add_project_arguments('-DWEBRTC_POSIX', '-DWEBRTC_LINUX', language: 'cpp')

libwebrtc_sources = [
  'libwebrtc/system_wrappers/source/field_trial.cc',
  'libwebrtc/rtc_base/rate_statistics.cc',
  'libwebrtc/rtc_base/experiments/field_trial_parser.cc',
  'libwebrtc/rtc_base/experiments/alr_experiment.cc',
  'libwebrtc/rtc_base/experiments/field_trial_units.cc',
  'libwebrtc/rtc_base/experiments/rate_control_settings.cc',
  'libwebrtc/rtc_base/network/sent_packet.cc',
  'libwebrtc/call/rtp_transport_controller_send.cc',
  'libwebrtc/api/transport/bitrate_settings.cc',
  'libwebrtc/api/transport/field_trial_based_config.cc',
  'libwebrtc/api/transport/network_types.cc',
  'libwebrtc/api/transport/goog_cc_factory.cc',
  'libwebrtc/api/units/timestamp.cc',
  'libwebrtc/api/units/time_delta.cc',
  'libwebrtc/api/units/data_rate.cc',
  'libwebrtc/api/units/data_size.cc',
  'libwebrtc/api/units/frequency.cc',
  'libwebrtc/api/network_state_predictor.cc',
  'libwebrtc/modules/pacing/interval_budget.cc',
  'libwebrtc/modules/pacing/bitrate_prober.cc',
  'libwebrtc/modules/pacing/paced_sender.cc',
  'libwebrtc/modules/remote_bitrate_estimator/overuse_detector.cc',
  'libwebrtc/modules/remote_bitrate_estimator/overuse_estimator.cc',
  'libwebrtc/modules/remote_bitrate_estimator/aimd_rate_control.cc',
  'libwebrtc/modules/remote_bitrate_estimator/inter_arrival.cc',
  'libwebrtc/modules/remote_bitrate_estimator/bwe_defines.cc',
  'libwebrtc/modules/remote_bitrate_estimator/remote_bitrate_estimator_abs_send_time.cc',
  'libwebrtc/modules/rtp_rtcp/include/rtp_rtcp_defines.cc',
  'libwebrtc/modules/bitrate_controller/send_side_bandwidth_estimation.cc',
  'libwebrtc/modules/bitrate_controller/loss_based_bandwidth_estimation.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/goog_cc_network_control.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/probe_bitrate_estimator.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/congestion_window_pushback_controller.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/link_capacity_estimator.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/alr_detector.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/probe_controller.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/median_slope_estimator.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/bitrate_estimator.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/trendline_estimator.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/delay_based_bwe.cc',
  'libwebrtc/modules/congestion_controller/goog_cc/acknowledged_bitrate_estimator.cc',
  'libwebrtc/modules/congestion_controller/rtp/send_time_history.cc',
  'libwebrtc/modules/congestion_controller/rtp/transport_feedback_adapter.cc',
  'libwebrtc/modules/congestion_controller/rtp/control_handler.cc',
  
  #add fec 
  'libwebrtc/api/media_types.cc',
  'libwebrtc/api/rtp_parameters.cc',
  'libwebrtc/api/media_stream_interface.cc',
  'libwebrtc/api/rtp_headers.cc',
  'libwebrtc/api/task_queue/task_queue_base.cc',
  'libwebrtc/api/video/color_space.cc',
  'libwebrtc/api/video/hdr_metadata.cc',
  'libwebrtc/api/video/video_timing.cc',
  'libwebrtc/api/video/video_content_type.cc',
  'libwebrtc/system_wrappers/source/clock.cc',
  'libwebrtc/rtc_base/checks.cc',
  'libwebrtc/rtc_base/logging.cc',
  'libwebrtc/rtc_base/string_utils.cc',
  'libwebrtc/rtc_base/string_to_number.cc',
  'libwebrtc/rtc_base/string_encode.cc',
  'libwebrtc/rtc_base/time_utils.cc',
  'libwebrtc/rtc_base/copy_on_write_buffer.cc',
  'libwebrtc/rtc_base/zero_memory.cc',
  'libwebrtc/rtc_base/critical_section.cc',
  'libwebrtc/rtc_base/platform_thread_types.cc',
  'libwebrtc/rtc_base/strings/string_builder.cc',
  'libwebrtc/rtc_base/synchronization/sequence_checker.cc',
  'libwebrtc/rtc_base/synchronization/rw_lock_wrapper.cc',
  'libwebrtc/rtc_base/synchronization/rw_lock_posix.cc',
  'libwebrtc/common_video/generic_frame_descriptor/generic_frame_info.cc',
  'libwebrtc/modules/rtp_rtcp/source/fec_private_tables_bursty.cc',
  'libwebrtc/modules/rtp_rtcp/source/fec_private_tables_random.cc',
  'libwebrtc/modules/rtp_rtcp/source/flexfec_header_reader_writer.cc',
  'libwebrtc/modules/rtp_rtcp/source/flexfec_receiver.cc',
  'libwebrtc/modules/rtp_rtcp/source/forward_error_correction.cc',
  'libwebrtc/modules/rtp_rtcp/source/forward_error_correction_internal.cc',
  'libwebrtc/modules/rtp_rtcp/source/rtp_dependency_descriptor_extension.cc',
  'libwebrtc/modules/rtp_rtcp/source/rtp_generic_frame_descriptor.cc',
  'libwebrtc/modules/rtp_rtcp/source/rtp_generic_frame_descriptor_extension.cc',
  'libwebrtc/modules/rtp_rtcp/source/rtp_header_extension_map.cc',
  'libwebrtc/modules/rtp_rtcp/source/rtp_header_extensions.cc',
  'libwebrtc/modules/rtp_rtcp/source/rtp_packet.cc',
  'libwebrtc/modules/rtp_rtcp/source/rtp_packet_received.cc',
  'libwebrtc/modules/rtp_rtcp/source/ulpfec_header_reader_writer.cc',
  'libwebrtc/modules/rtp_rtcp/source/ulpfec_receiver_impl.cc',
]

abseil_cpp_proj = subproject(
  'abseil-cpp',
  default_options: [
    'warning_level=0',
  ],
)

local_include_directories = declare_dependency(
  include_directories: include_directories('libwebrtc')
)

libwebrtc = library(
  'libwebrtc',
  libwebrtc_sources,
  dependencies: [
    local_include_directories,
    openssl_proj.get_variable('openssl_dep'),
    abseil_cpp_proj.get_variable('absl_strings_dep'),
    abseil_cpp_proj.get_variable('absl_types_dep'),
    nlohmann_json_proj.get_variable('nlohmann_json_dep'),
    libuv_proj.get_variable('libuv_dep'),
  ],
  include_directories: libwebrtc_include_directories,
  cpp_args: cpp_args,
)

libwebrtc_dep = declare_dependency(
  dependencies: [
    local_include_directories,
    abseil_cpp_proj.get_variable('absl_strings_dep'),
    abseil_cpp_proj.get_variable('absl_types_dep'),
  ],
  include_directories: include_directories('.'),
  link_with: libwebrtc,
)
