GEN_FUNCS = \
snd_asoundlib_version.o \
snd_async_add_ctl_handler.o \
snd_async_add_handler.o \
snd_async_add_pcm_handler.o \
snd_async_del_handler.o \
snd_async_handler_get_callback_private.o \
snd_async_handler_get_ctl.o \
snd_async_handler_get_pcm.o \
snd_card_get_index.o \
snd_card_get_longname.o \
snd_card_get_name.o \
snd_card_load.o \
snd_card_next.o \
snd_config_add.o \
snd_config_copy.o \
snd_config_delete.o \
snd_config_get_ascii.o \
snd_config_get_id.o \
snd_config_get_integer.o \
snd_config_get_integer64.o \
snd_config_get_string.o \
snd_config_get_type.o \
snd_config_imake_integer.o \
snd_config_imake_integer64.o \
snd_config_imake_string.o \
snd_config_iterator_end.o \
snd_config_iterator_entry.o \
snd_config_iterator_first.o \
snd_config_iterator_next.o \
snd_config_load.o \
snd_config_make_compound.o \
snd_config_make_integer.o \
snd_config_make_integer64.o \
snd_config_make_string.o \
snd_config_save.o \
snd_config_search.o \
snd_config_set_ascii.o \
snd_config_set_integer.o \
snd_config_set_integer64.o \
snd_config_set_string.o \
snd_config_top.o \
snd_config_update.o \
snd_config_update_free_global.o \
snd_ctl_card_info.o \
snd_ctl_card_info_clear.o \
snd_ctl_card_info_copy.o \
snd_ctl_card_info_free.o \
snd_ctl_card_info_get_components.o \
snd_ctl_card_info_get_driver.o \
snd_ctl_card_info_get_id.o \
snd_ctl_card_info_get_longname.o \
snd_ctl_card_info_get_mixername.o \
snd_ctl_card_info_get_name.o \
snd_ctl_card_info_malloc.o \
snd_ctl_card_info_sizeof.o \
snd_ctl_close.o \
snd_ctl_elem_add_boolean.o \
snd_ctl_elem_add_iec958.o \
snd_ctl_elem_add_integer.o \
snd_ctl_elem_id_clear.o \
snd_ctl_elem_id_copy.o \
snd_ctl_elem_id_free.o \
snd_ctl_elem_id_get_device.o \
snd_ctl_elem_id_get_index.o \
snd_ctl_elem_id_get_interface.o \
snd_ctl_elem_id_get_name.o \
snd_ctl_elem_id_get_numid.o \
snd_ctl_elem_id_get_subdevice.o \
snd_ctl_elem_id_malloc.o \
snd_ctl_elem_id_set_device.o \
snd_ctl_elem_id_set_index.o \
snd_ctl_elem_id_set_interface.o \
snd_ctl_elem_id_set_name.o \
snd_ctl_elem_id_set_numid.o \
snd_ctl_elem_id_set_subdevice.o \
snd_ctl_elem_id_sizeof.o \
snd_ctl_elem_iface_name.o \
snd_ctl_elem_info.o \
snd_ctl_elem_info_clear.o \
snd_ctl_elem_info_copy.o \
snd_ctl_elem_info_free.o \
snd_ctl_elem_info_get_count.o \
snd_ctl_elem_info_get_id.o \
snd_ctl_elem_info_get_item_name.o \
snd_ctl_elem_info_get_items.o \
snd_ctl_elem_info_get_max.o \
snd_ctl_elem_info_get_max64.o \
snd_ctl_elem_info_get_min.o \
snd_ctl_elem_info_get_min64.o \
snd_ctl_elem_info_get_name.o \
snd_ctl_elem_info_get_numid.o \
snd_ctl_elem_info_get_step.o \
snd_ctl_elem_info_get_step64.o \
snd_ctl_elem_info_get_type.o \
snd_ctl_elem_info_is_inactive.o \
snd_ctl_elem_info_is_locked.o \
snd_ctl_elem_info_is_readable.o \
snd_ctl_elem_info_is_user.o \
snd_ctl_elem_info_is_volatile.o \
snd_ctl_elem_info_is_writable.o \
snd_ctl_elem_info_malloc.o \
snd_ctl_elem_info_set_id.o \
snd_ctl_elem_info_set_item.o \
snd_ctl_elem_info_sizeof.o \
snd_ctl_elem_list.o \
snd_ctl_elem_list_alloc_space.o \
snd_ctl_elem_list_clear.o \
snd_ctl_elem_list_copy.o \
snd_ctl_elem_list_free.o \
snd_ctl_elem_list_free_space.o \
snd_ctl_elem_list_get_count.o \
snd_ctl_elem_list_get_id.o \
snd_ctl_elem_list_get_name.o \
snd_ctl_elem_list_get_used.o \
snd_ctl_elem_list_malloc.o \
snd_ctl_elem_list_set_offset.o \
snd_ctl_elem_list_sizeof.o \
snd_ctl_elem_read.o \
snd_ctl_elem_remove.o \
snd_ctl_elem_type_name.o \
snd_ctl_elem_value_clear.o \
snd_ctl_elem_value_copy.o \
snd_ctl_elem_value_free.o \
snd_ctl_elem_value_get_boolean.o \
snd_ctl_elem_value_get_byte.o \
snd_ctl_elem_value_get_bytes.o \
snd_ctl_elem_value_get_enumerated.o \
snd_ctl_elem_value_get_id.o \
snd_ctl_elem_value_get_iec958.o \
snd_ctl_elem_value_get_integer.o \
snd_ctl_elem_value_get_integer64.o \
snd_ctl_elem_value_malloc.o \
snd_ctl_elem_value_set_boolean.o \
snd_ctl_elem_value_set_byte.o \
snd_ctl_elem_value_set_enumerated.o \
snd_ctl_elem_value_set_id.o \
snd_ctl_elem_value_set_iec958.o \
snd_ctl_elem_value_set_integer.o \
snd_ctl_elem_value_set_integer64.o \
snd_ctl_elem_value_sizeof.o \
snd_ctl_elem_write.o \
snd_ctl_event_clear.o \
snd_ctl_event_copy.o \
snd_ctl_event_elem_get_id.o \
snd_ctl_event_elem_get_mask.o \
snd_ctl_event_free.o \
snd_ctl_event_malloc.o \
snd_ctl_event_sizeof.o \
snd_ctl_hwdep_info.o \
snd_ctl_hwdep_next_device.o \
snd_ctl_name.o \
snd_ctl_nonblock.o \
snd_ctl_open.o \
snd_ctl_pcm_info.o \
snd_ctl_pcm_next_device.o \
snd_ctl_poll_descriptors.o \
snd_ctl_poll_descriptors_count.o \
snd_ctl_rawmidi_info.o \
snd_ctl_rawmidi_next_device.o \
snd_ctl_read.o \
snd_ctl_subscribe_events.o \
snd_hctl_close.o \
snd_hctl_elem_get_callback_private.o \
snd_hctl_elem_get_id.o \
snd_hctl_elem_info.o \
snd_hctl_elem_next.o \
snd_hctl_elem_prev.o \
snd_hctl_elem_read.o \
snd_hctl_elem_set_callback.o \
snd_hctl_elem_set_callback_private.o \
snd_hctl_elem_write.o \
snd_hctl_find_elem.o \
snd_hctl_first_elem.o \
snd_hctl_free.o \
snd_hctl_get_callback_private.o \
snd_hctl_get_count.o \
snd_hctl_handle_events.o \
snd_hctl_last_elem.o \
snd_hctl_load.o \
snd_hctl_nonblock.o \
snd_hctl_open.o \
snd_hctl_set_callback.o \
snd_hctl_set_callback_private.o \
snd_hctl_wait.o \
snd_hwdep_close.o \
snd_hwdep_dsp_image_copy.o \
snd_hwdep_dsp_image_free.o \
snd_hwdep_dsp_image_get_image.o \
snd_hwdep_dsp_image_get_index.o \
snd_hwdep_dsp_image_get_length.o \
snd_hwdep_dsp_image_get_name.o \
snd_hwdep_dsp_image_malloc.o \
snd_hwdep_dsp_image_set_image.o \
snd_hwdep_dsp_image_set_index.o \
snd_hwdep_dsp_image_set_length.o \
snd_hwdep_dsp_image_set_name.o \
snd_hwdep_dsp_image_sizeof.o \
snd_hwdep_dsp_load.o \
snd_hwdep_dsp_status.o \
snd_hwdep_dsp_status_copy.o \
snd_hwdep_dsp_status_free.o \
snd_hwdep_dsp_status_get_chip_ready.o \
snd_hwdep_dsp_status_get_dsp_loaded.o \
snd_hwdep_dsp_status_get_id.o \
snd_hwdep_dsp_status_get_num_dsps.o \
snd_hwdep_dsp_status_get_version.o \
snd_hwdep_dsp_status_malloc.o \
snd_hwdep_dsp_status_sizeof.o \
snd_hwdep_info.o \
snd_hwdep_info_copy.o \
snd_hwdep_info_free.o \
snd_hwdep_info_get_card.o \
snd_hwdep_info_get_device.o \
snd_hwdep_info_get_id.o \
snd_hwdep_info_get_iface.o \
snd_hwdep_info_get_name.o \
snd_hwdep_info_malloc.o \
snd_hwdep_info_set_device.o \
snd_hwdep_info_sizeof.o \
snd_hwdep_ioctl.o \
snd_hwdep_open.o \
snd_hwdep_poll_descriptors.o \
snd_hwdep_read.o \
snd_hwdep_write.o \
snd_input_buffer_open.o \
snd_input_close.o \
snd_input_stdio_attach.o \
snd_input_stdio_open.o \
snd_lib_error_set_handler.o \
snd_midi_event_decode.o \
snd_midi_event_encode.o \
snd_midi_event_encode_byte.o \
snd_midi_event_free.o \
snd_midi_event_init.o \
snd_midi_event_new.o \
snd_midi_event_reset_decode.o \
snd_midi_event_reset_encode.o \
snd_mixer_attach.o \
snd_mixer_close.o \
snd_mixer_detach.o \
snd_mixer_elem_get_callback_private.o \
snd_mixer_elem_get_type.o \
snd_mixer_elem_next.o \
snd_mixer_elem_prev.o \
snd_mixer_elem_set_callback.o \
snd_mixer_elem_set_callback_private.o \
snd_mixer_find_selem.o \
snd_mixer_first_elem.o \
snd_mixer_free.o \
snd_mixer_get_callback_private.o \
snd_mixer_get_count.o \
snd_mixer_handle_events.o \
snd_mixer_last_elem.o \
snd_mixer_load.o \
snd_mixer_open.o \
snd_mixer_poll_descriptors.o \
snd_mixer_poll_descriptors_count.o \
snd_mixer_poll_descriptors_revents.o \
snd_mixer_selem_channel_name.o \
snd_mixer_selem_get_capture_group.o \
snd_mixer_selem_get_capture_switch.o \
snd_mixer_selem_get_capture_volume.o \
snd_mixer_selem_get_capture_volume_range.o \
snd_mixer_selem_get_enum_item.o \
snd_mixer_selem_get_enum_item_name.o \
snd_mixer_selem_get_enum_items.o \
snd_mixer_selem_get_id.o \
snd_mixer_selem_get_index.o \
snd_mixer_selem_get_name.o \
snd_mixer_selem_get_playback_switch.o \
snd_mixer_selem_get_playback_volume.o \
snd_mixer_selem_get_playback_volume_range.o \
snd_mixer_selem_has_capture_channel.o \
snd_mixer_selem_has_capture_switch.o \
snd_mixer_selem_has_capture_switch_exclusive.o \
snd_mixer_selem_has_capture_switch_joined.o \
snd_mixer_selem_has_capture_volume.o \
snd_mixer_selem_has_capture_volume_joined.o \
snd_mixer_selem_has_common_switch.o \
snd_mixer_selem_has_common_volume.o \
snd_mixer_selem_has_playback_channel.o \
snd_mixer_selem_has_playback_switch.o \
snd_mixer_selem_has_playback_switch_joined.o \
snd_mixer_selem_has_playback_volume.o \
snd_mixer_selem_has_playback_volume_joined.o \
snd_mixer_selem_id_copy.o \
snd_mixer_selem_id_free.o \
snd_mixer_selem_id_get_index.o \
snd_mixer_selem_id_get_name.o \
snd_mixer_selem_id_malloc.o \
snd_mixer_selem_id_set_index.o \
snd_mixer_selem_id_set_name.o \
snd_mixer_selem_id_sizeof.o \
snd_mixer_selem_is_active.o \
snd_mixer_selem_is_capture_mono.o \
snd_mixer_selem_is_enum_capture.o \
snd_mixer_selem_is_enum_playback.o \
snd_mixer_selem_is_enumerated.o \
snd_mixer_selem_is_playback_mono.o \
snd_mixer_selem_register.o \
snd_mixer_selem_set_capture_switch.o \
snd_mixer_selem_set_capture_switch_all.o \
snd_mixer_selem_set_capture_volume.o \
snd_mixer_selem_set_capture_volume_all.o \
snd_mixer_selem_set_capture_volume_range.o \
snd_mixer_selem_set_enum_item.o \
snd_mixer_selem_set_playback_switch.o \
snd_mixer_selem_set_playback_switch_all.o \
snd_mixer_selem_set_playback_volume.o \
snd_mixer_selem_set_playback_volume_all.o \
snd_mixer_selem_set_playback_volume_range.o \
snd_mixer_set_callback.o \
snd_mixer_set_callback_private.o \
snd_mixer_wait.o \
snd_output_buffer_open.o \
snd_output_buffer_string.o \
snd_output_close.o \
snd_output_putc.o \
snd_output_puts.o \
snd_output_stdio_attach.o \
snd_output_stdio_open.o \
snd_pcm_access_mask_any.o \
snd_pcm_access_mask_copy.o \
snd_pcm_access_mask_free.o \
snd_pcm_access_mask_malloc.o \
snd_pcm_access_mask_none.o \
snd_pcm_access_mask_set.o \
snd_pcm_access_mask_sizeof.o \
snd_pcm_access_mask_test.o \
snd_pcm_access_name.o \
snd_pcm_area_copy.o \
snd_pcm_area_silence.o \
snd_pcm_areas_copy.o \
snd_pcm_areas_silence.o \
snd_pcm_avail_update.o \
snd_pcm_build_linear_format.o \
snd_pcm_bytes_to_frames.o \
snd_pcm_bytes_to_samples.o \
snd_pcm_close.o \
snd_pcm_delay.o \
snd_pcm_drain.o \
snd_pcm_drop.o \
snd_pcm_dump.o \
snd_pcm_format_big_endian.o \
snd_pcm_format_cpu_endian.o \
snd_pcm_format_description.o \
snd_pcm_format_float.o \
snd_pcm_format_linear.o \
snd_pcm_format_little_endian.o \
snd_pcm_format_mask_any.o \
snd_pcm_format_mask_copy.o \
snd_pcm_format_mask_free.o \
snd_pcm_format_mask_malloc.o \
snd_pcm_format_mask_none.o \
snd_pcm_format_mask_set.o \
snd_pcm_format_mask_sizeof.o \
snd_pcm_format_mask_test.o \
snd_pcm_format_name.o \
snd_pcm_format_physical_width.o \
snd_pcm_format_set_silence.o \
snd_pcm_format_signed.o \
snd_pcm_format_size.o \
snd_pcm_format_unsigned.o \
snd_pcm_format_value.o \
snd_pcm_format_width.o \
snd_pcm_forward.o \
snd_pcm_frames_to_bytes.o \
snd_pcm_hw_free.o \
snd_pcm_hw_params.o \
snd_pcm_hw_params_any.o \
snd_pcm_hw_params_can_mmap_sample_resolution.o \
snd_pcm_hw_params_can_pause.o \
snd_pcm_hw_params_can_resume.o \
snd_pcm_hw_params_can_sync_start.o \
snd_pcm_hw_params_copy.o \
snd_pcm_hw_params_current.o \
snd_pcm_hw_params_dump.o \
snd_pcm_hw_params_free.o \
snd_pcm_hw_params_get_access.o \
snd_pcm_hw_params_get_access_mask.o \
snd_pcm_hw_params_get_buffer_size.o \
snd_pcm_hw_params_get_buffer_size_max.o \
snd_pcm_hw_params_get_buffer_size_min.o \
snd_pcm_hw_params_get_buffer_time.o \
snd_pcm_hw_params_get_buffer_time_max.o \
snd_pcm_hw_params_get_buffer_time_min.o \
snd_pcm_hw_params_get_channels.o \
snd_pcm_hw_params_get_channels_max.o \
snd_pcm_hw_params_get_channels_min.o \
snd_pcm_hw_params_get_format.o \
snd_pcm_hw_params_get_format_mask.o \
snd_pcm_hw_params_get_period_size.o \
snd_pcm_hw_params_get_period_size_max.o \
snd_pcm_hw_params_get_period_size_min.o \
snd_pcm_hw_params_get_period_time.o \
snd_pcm_hw_params_get_period_time_max.o \
snd_pcm_hw_params_get_period_time_min.o \
snd_pcm_hw_params_get_periods.o \
snd_pcm_hw_params_get_periods_max.o \
snd_pcm_hw_params_get_periods_min.o \
snd_pcm_hw_params_get_rate.o \
snd_pcm_hw_params_get_rate_max.o \
snd_pcm_hw_params_get_rate_min.o \
snd_pcm_hw_params_get_rate_numden.o \
snd_pcm_hw_params_get_rate_resample.o \
snd_pcm_hw_params_get_sbits.o \
snd_pcm_hw_params_is_double.o \
snd_pcm_hw_params_is_half_duplex.o \
snd_pcm_hw_params_is_joint_duplex.o \
snd_pcm_hw_params_malloc.o \
snd_pcm_hw_params_set_access.o \
snd_pcm_hw_params_set_access_mask.o \
snd_pcm_hw_params_set_buffer_size.o \
snd_pcm_hw_params_set_buffer_size_near.o \
snd_pcm_hw_params_set_buffer_time.o \
snd_pcm_hw_params_set_buffer_time_near.o \
snd_pcm_hw_params_set_channels.o \
snd_pcm_hw_params_set_channels_near.o \
snd_pcm_hw_params_set_format.o \
snd_pcm_hw_params_set_format_mask.o \
snd_pcm_hw_params_set_period_size.o \
snd_pcm_hw_params_set_period_size_near.o \
snd_pcm_hw_params_set_period_time.o \
snd_pcm_hw_params_set_period_time_near.o \
snd_pcm_hw_params_set_periods.o \
snd_pcm_hw_params_set_periods_integer.o \
snd_pcm_hw_params_set_periods_near.o \
snd_pcm_hw_params_set_rate.o \
snd_pcm_hw_params_set_rate_near.o \
snd_pcm_hw_params_set_rate_resample.o \
snd_pcm_hw_params_sizeof.o \
snd_pcm_hw_params_test_access.o \
snd_pcm_hw_params_test_buffer_size.o \
snd_pcm_hw_params_test_buffer_time.o \
snd_pcm_hw_params_test_channels.o \
snd_pcm_hw_params_test_format.o \
snd_pcm_hw_params_test_period_size.o \
snd_pcm_hw_params_test_period_time.o \
snd_pcm_hw_params_test_periods.o \
snd_pcm_hw_params_test_rate.o \
snd_pcm_hwsync.o \
snd_pcm_info.o \
snd_pcm_info_copy.o \
snd_pcm_info_free.o \
snd_pcm_info_get_card.o \
snd_pcm_info_get_class.o \
snd_pcm_info_get_device.o \
snd_pcm_info_get_id.o \
snd_pcm_info_get_name.o \
snd_pcm_info_get_stream.o \
snd_pcm_info_get_subdevice.o \
snd_pcm_info_get_subdevice_name.o \
snd_pcm_info_get_subdevices_avail.o \
snd_pcm_info_get_subdevices_count.o \
snd_pcm_info_malloc.o \
snd_pcm_info_set_device.o \
snd_pcm_info_set_stream.o \
snd_pcm_info_set_subdevice.o \
snd_pcm_info_sizeof.o \
snd_pcm_link.o \
snd_pcm_mmap_begin.o \
snd_pcm_mmap_commit.o \
snd_pcm_mmap_readi.o \
snd_pcm_mmap_readn.o \
snd_pcm_mmap_writei.o \
snd_pcm_mmap_writen.o \
snd_pcm_name.o \
snd_pcm_nonblock.o \
snd_pcm_open.o \
snd_pcm_open_lconf.o \
snd_pcm_pause.o \
snd_pcm_poll_descriptors.o \
snd_pcm_poll_descriptors_count.o \
snd_pcm_poll_descriptors_revents.o \
snd_pcm_prepare.o \
snd_pcm_readi.o \
snd_pcm_readn.o \
snd_pcm_recover.o \
snd_pcm_reset.o \
snd_pcm_resume.o \
snd_pcm_rewind.o \
snd_pcm_samples_to_bytes.o \
snd_pcm_start.o \
snd_pcm_state.o \
snd_pcm_state_name.o \
snd_pcm_status.o \
snd_pcm_status_copy.o \
snd_pcm_status_dump.o \
snd_pcm_status_free.o \
snd_pcm_status_get_avail.o \
snd_pcm_status_get_avail_max.o \
snd_pcm_status_get_delay.o \
snd_pcm_status_get_state.o \
snd_pcm_status_get_trigger_tstamp.o \
snd_pcm_status_get_tstamp.o \
snd_pcm_status_malloc.o \
snd_pcm_status_sizeof.o \
snd_pcm_stream.o \
snd_pcm_stream_name.o \
snd_pcm_sw_params.o \
snd_pcm_sw_params_copy.o \
snd_pcm_sw_params_current.o \
snd_pcm_sw_params_dump.o \
snd_pcm_sw_params_free.o \
snd_pcm_sw_params_get_avail_min.o \
snd_pcm_sw_params_get_boundary.o \
snd_pcm_sw_params_get_silence_size.o \
snd_pcm_sw_params_get_silence_threshold.o \
snd_pcm_sw_params_get_start_threshold.o \
snd_pcm_sw_params_get_stop_threshold.o \
snd_pcm_sw_params_get_tstamp_mode.o \
snd_pcm_sw_params_malloc.o \
snd_pcm_sw_params_set_avail_min.o \
snd_pcm_sw_params_set_silence_size.o \
snd_pcm_sw_params_set_silence_threshold.o \
snd_pcm_sw_params_set_start_threshold.o \
snd_pcm_sw_params_set_stop_threshold.o \
snd_pcm_sw_params_set_tstamp_mode.o \
snd_pcm_sw_params_set_xfer_align.o \
snd_pcm_sw_params_sizeof.o \
snd_pcm_type.o \
snd_pcm_type_name.o \
snd_pcm_unlink.o \
snd_pcm_wait.o \
snd_pcm_writei.o \
snd_pcm_writen.o \
snd_rawmidi_close.o \
snd_rawmidi_drain.o \
snd_rawmidi_drop.o \
snd_rawmidi_info.o \
snd_rawmidi_info_copy.o \
snd_rawmidi_info_free.o \
snd_rawmidi_info_get_card.o \
snd_rawmidi_info_get_device.o \
snd_rawmidi_info_get_flags.o \
snd_rawmidi_info_get_id.o \
snd_rawmidi_info_get_name.o \
snd_rawmidi_info_get_stream.o \
snd_rawmidi_info_get_subdevice.o \
snd_rawmidi_info_get_subdevice_name.o \
snd_rawmidi_info_get_subdevices_avail.o \
snd_rawmidi_info_get_subdevices_count.o \
snd_rawmidi_info_malloc.o \
snd_rawmidi_info_set_device.o \
snd_rawmidi_info_set_stream.o \
snd_rawmidi_info_set_subdevice.o \
snd_rawmidi_info_sizeof.o \
snd_rawmidi_nonblock.o \
snd_rawmidi_open.o \
snd_rawmidi_poll_descriptors.o \
snd_rawmidi_poll_descriptors_count.o \
snd_rawmidi_poll_descriptors_revents.o \
snd_rawmidi_read.o \
snd_rawmidi_write.o \
snd_seq_alloc_named_queue.o \
snd_seq_alloc_queue.o \
snd_seq_client_id.o \
snd_seq_client_info_copy.o \
snd_seq_client_info_free.o \
snd_seq_client_info_get_client.o \
snd_seq_client_info_get_name.o \
snd_seq_client_info_get_num_ports.o \
snd_seq_client_info_get_type.o \
snd_seq_client_info_malloc.o \
snd_seq_client_info_set_client.o \
snd_seq_client_info_set_name.o \
snd_seq_client_info_sizeof.o \
snd_seq_close.o \
snd_seq_connect_from.o \
snd_seq_connect_to.o \
snd_seq_control_queue.o \
snd_seq_create_port.o \
snd_seq_create_simple_port.o \
snd_seq_delete_port.o \
snd_seq_delete_simple_port.o \
snd_seq_disconnect_from.o \
snd_seq_disconnect_to.o \
snd_seq_drain_output.o \
snd_seq_drop_output.o \
snd_seq_drop_output_buffer.o \
snd_seq_event_input.o \
snd_seq_event_input_pending.o \
snd_seq_event_length.o \
snd_seq_event_output.o \
snd_seq_event_output_direct.o \
snd_seq_free_event.o \
snd_seq_free_queue.o \
snd_seq_get_any_client_info.o \
snd_seq_get_any_port_info.o \
snd_seq_get_client_info.o \
snd_seq_get_input_buffer_size.o \
snd_seq_get_output_buffer_size.o \
snd_seq_get_port_info.o \
snd_seq_get_port_subscription.o \
snd_seq_get_queue_status.o \
snd_seq_get_queue_tempo.o \
snd_seq_nonblock.o \
snd_seq_open.o \
snd_seq_parse_address.o \
snd_seq_poll_descriptors.o \
snd_seq_poll_descriptors_count.o \
snd_seq_poll_descriptors_revents.o \
snd_seq_port_info_copy.o \
snd_seq_port_info_free.o \
snd_seq_port_info_get_addr.o \
snd_seq_port_info_get_capability.o \
snd_seq_port_info_get_client.o \
snd_seq_port_info_get_name.o \
snd_seq_port_info_get_port.o \
snd_seq_port_info_get_type.o \
snd_seq_port_info_malloc.o \
snd_seq_port_info_set_capability.o \
snd_seq_port_info_set_client.o \
snd_seq_port_info_set_midi_channels.o \
snd_seq_port_info_set_name.o \
snd_seq_port_info_set_port.o \
snd_seq_port_info_set_port_specified.o \
snd_seq_port_info_set_timestamp_queue.o \
snd_seq_port_info_set_timestamp_real.o \
snd_seq_port_info_set_timestamping.o \
snd_seq_port_info_set_type.o \
snd_seq_port_info_sizeof.o \
snd_seq_port_subscribe_copy.o \
snd_seq_port_subscribe_free.o \
snd_seq_port_subscribe_get_dest.o \
snd_seq_port_subscribe_get_exclusive.o \
snd_seq_port_subscribe_get_queue.o \
snd_seq_port_subscribe_get_sender.o \
snd_seq_port_subscribe_get_time_real.o \
snd_seq_port_subscribe_get_time_update.o \
snd_seq_port_subscribe_malloc.o \
snd_seq_port_subscribe_set_dest.o \
snd_seq_port_subscribe_set_exclusive.o \
snd_seq_port_subscribe_set_queue.o \
snd_seq_port_subscribe_set_sender.o \
snd_seq_port_subscribe_set_time_real.o \
snd_seq_port_subscribe_set_time_update.o \
snd_seq_port_subscribe_sizeof.o \
snd_seq_query_next_client.o \
snd_seq_query_next_port.o \
snd_seq_query_port_subscribers.o \
snd_seq_query_subscribe_copy.o \
snd_seq_query_subscribe_free.o \
snd_seq_query_subscribe_get_addr.o \
snd_seq_query_subscribe_get_exclusive.o \
snd_seq_query_subscribe_get_index.o \
snd_seq_query_subscribe_get_queue.o \
snd_seq_query_subscribe_get_root.o \
snd_seq_query_subscribe_get_time_real.o \
snd_seq_query_subscribe_get_time_update.o \
snd_seq_query_subscribe_malloc.o \
snd_seq_query_subscribe_set_index.o \
snd_seq_query_subscribe_set_root.o \
snd_seq_query_subscribe_set_type.o \
snd_seq_query_subscribe_sizeof.o \
snd_seq_queue_status_copy.o \
snd_seq_queue_status_free.o \
snd_seq_queue_status_get_real_time.o \
snd_seq_queue_status_get_tick_time.o \
snd_seq_queue_status_malloc.o \
snd_seq_queue_status_sizeof.o \
snd_seq_queue_tempo_copy.o \
snd_seq_queue_tempo_free.o \
snd_seq_queue_tempo_get_ppq.o \
snd_seq_queue_tempo_get_tempo.o \
snd_seq_queue_tempo_malloc.o \
snd_seq_queue_tempo_set_ppq.o \
snd_seq_queue_tempo_set_tempo.o \
snd_seq_queue_tempo_sizeof.o \
snd_seq_set_client_info.o \
snd_seq_set_client_name.o \
snd_seq_set_input_buffer_size.o \
snd_seq_set_output_buffer_size.o \
snd_seq_set_port_info.o \
snd_seq_set_queue_tempo.o \
snd_seq_subscribe_port.o \
snd_seq_sync_output_queue.o \
snd_seq_system_info.o \
snd_seq_system_info_copy.o \
snd_seq_system_info_free.o \
snd_seq_system_info_get_clients.o \
snd_seq_system_info_get_ports.o \
snd_seq_system_info_get_queues.o \
snd_seq_system_info_malloc.o \
snd_seq_system_info_sizeof.o \
snd_seq_unsubscribe_port.o \
snd_strerror.o \
snd_timer_close.o \
snd_timer_continue.o \
snd_timer_id_copy.o \
snd_timer_id_free.o \
snd_timer_id_get_card.o \
snd_timer_id_get_class.o \
snd_timer_id_get_device.o \
snd_timer_id_get_sclass.o \
snd_timer_id_get_subdevice.o \
snd_timer_id_malloc.o \
snd_timer_id_set_card.o \
snd_timer_id_set_class.o \
snd_timer_id_set_device.o \
snd_timer_id_set_sclass.o \
snd_timer_id_set_subdevice.o \
snd_timer_id_sizeof.o \
snd_timer_info.o \
snd_timer_info_copy.o \
snd_timer_info_free.o \
snd_timer_info_get_card.o \
snd_timer_info_get_id.o \
snd_timer_info_get_name.o \
snd_timer_info_get_resolution.o \
snd_timer_info_malloc.o \
snd_timer_info_sizeof.o \
snd_timer_open.o \
snd_timer_params.o \
snd_timer_params_get_ticks.o \
snd_timer_params_malloc.o \
snd_timer_params_set_auto_start.o \
snd_timer_params_set_ticks.o \
snd_timer_poll_descriptors.o \
snd_timer_poll_descriptors_count.o \
snd_timer_read.o \
snd_timer_start.o \
snd_timer_status.o \
snd_timer_status_free.o \
snd_timer_status_get_lost.o \
snd_timer_status_get_overrun.o \
snd_timer_status_get_queue.o \
snd_timer_status_get_resolution.o \
snd_timer_status_malloc.o \
snd_timer_stop.o 