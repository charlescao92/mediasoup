#define MS_CLASS "RTC::Histogram"

#include "RTC/Histogram.hpp"
#include "Logger.hpp"

namespace RTC {

Histogram::Histogram(uint16_t num_buckets, uint16_t max_num_packets) {
    MS_TRACE();

    buckets_.resize(num_buckets);
    values_.reserve(max_num_packets);
}

Histogram::~Histogram() {
    MS_TRACE();

    values_.clear();
    values_.shrink_to_fit();

    buckets_.clear();
    buckets_.shrink_to_fit();
}

void Histogram::Add(uint16_t value) {
    MS_TRACE();

    value = std::min<uint16_t>(value, buckets_.size() - 1);
    if (index_ < values_.size()) { // 容量已满，新数据覆盖旧数据
        --buckets_[values_[index_]];
        values_[index_] = value;
    } else {
        // 容量还足够
        values_.emplace_back(value);
    }

    ++buckets_[value];
    index_ = (index_ + 1) % values_.capacity();
}

// 逆累计分布函数（InverseCdf），给定一个概率，输出对应的取值
// 例如输入概率0.5，输出2个，意思是乱序的个数为 2
uint16_t Histogram::InverseCdf(float probability) const {
    MS_TRACE();

    uint16_t bucket = 0;
    float accumulated_probability = 0;
    while (accumulated_probability < probability && bucket < buckets_.size()) {
        accumulated_probability += (float)(buckets_[bucket]) / values_.size(); // 概率是累加的
        ++bucket;
    }

    return bucket;
}

uint16_t Histogram::NumValues() const {
    MS_TRACE();

    return values_.size();
}

} // namespace RTC
