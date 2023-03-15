#ifndef MS_RTC_HISTOGRAM_HPP
#define MS_RTC_HISTOGRAM_HPP

#include <vector>

#include "common.hpp"

namespace RTC {

class Histogram {
public:
    // (桶的个数，最大的样本数)
    Histogram(uint16_t num_buckets, uint16_t max_num_packets);
    ~Histogram();
    
    void Add(uint16_t value); 
    uint16_t InverseCdf(float probability) const;
    uint16_t NumValues() const;

private:
    std::vector<uint16_t> values_; // 保存样本的原始数据
    std::vector<uint16_t> buckets_; // 存放的是每个样本出现的次数
    uint16_t index_ = 0; // 用了判断values_容量是否已经满了，满了就将新数据去覆盖旧数据
};

} // namespace RTC

#endif  // MS_RTC_HISTOGRAM_HPP_
