
#
# Main component of TF Micro project 'micro_speech'.
#

idf_component_register(
    SRCS main.cc main_functions.cc audio_provider.cc feature_provider.cc micro_features/no_micro_features_data.cc micro_features/yes_micro_features_data.cc micro_features/tiny_conv_micro_features_model_data.cc recognize_commands.cc command_responder.cc micro_features/micro_features_generator.cc micro_features/micro_model_settings.cc tensorflow/lite/experimental/microfrontend/lib/fft.cc tensorflow/lite/experimental/microfrontend/lib/fft_util.cc tensorflow/lite/experimental/microfrontend/lib/filterbank.c tensorflow/lite/experimental/microfrontend/lib/filterbank_util.c tensorflow/lite/experimental/microfrontend/lib/frontend.c tensorflow/lite/experimental/microfrontend/lib/frontend_util.c tensorflow/lite/experimental/microfrontend/lib/log_lut.c tensorflow/lite/experimental/microfrontend/lib/log_scale.c tensorflow/lite/experimental/microfrontend/lib/log_scale_util.c tensorflow/lite/experimental/microfrontend/lib/noise_reduction.c tensorflow/lite/experimental/microfrontend/lib/noise_reduction_util.c tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control.c tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control_util.c tensorflow/lite/experimental/microfrontend/lib/window.c tensorflow/lite/experimental/microfrontend/lib/window_util.c tensorflow/lite/micro/tools/make/downloads/kissfft/kiss_fft.c tensorflow/lite/micro/tools/make/downloads/kissfft/tools/kiss_fftr.c
    INCLUDE_DIRS "")
