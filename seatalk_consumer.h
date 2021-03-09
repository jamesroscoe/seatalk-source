// These functions are NOT implemented in the SeaTalk library. The consuming
// application must implement all functions prototyped in this file.

void st_received_depth_below_transducer(int seatalk_port, int depth_in_feet_times_10, int display_units, int active_alarms, int transducer_defective);
void st_received_engine_rpm_and_pitch(int seatalk_port, ENGINE_ID engine_id, int rpm, int pitch_percent);
void st_received_apparent_wind_angle(int seatalk_port, int degrees_right_times_2);
void st_received_apparent_wind_speed(int seatalk_port, int knots_times_10, int display_in_metric);
void st_received_water_speed(int seatalk_port, int knots_times_10);
void st_received_trip_mileage(int seatalk_port, int miles_times_100);
void st_received_total_mileage(int seatalk_port, int miles_times_10);
void st_received_water_temperature(int seatalk_port, int degrees_fahrenheit, int transducer_defective);
void st_received_speed_distance_units(int seatalk_port, DISTANCE_UNITS distance_units);
void st_received_total_and_trip_mileage(int seatalk_port, int total_mileage_times_10, int trip_mileage_times_100);
void st_received_average_water_speed(int seatalk_port, int knots_1_times_100, int knots_2_times_100, int speed_1_from_sensor, int speed_2_is_average, int average_is_stopped, int display_in_statute_miles);
void st_received_precise_water_temperature(int seatalk_port, int degrees_celsius_times_10);
void st_received_set_lamp_intensity(int seatalk_port, int level);
void st_received_lat_position(int seatalk_port, LATITUDE_HEMISPHERE hemisphere, int degrees, int minutes_times_100);
void st_received_lon_position(int seatalk_port, LONGITUDE_HEMISPHERE hemisphere, int degrees, int minutes_times_100);
void st_received_speed_over_ground(int seatalk_port, int knots_times_10);
void st_received_course_over_ground(int seatalk_port, int true_degrees);
void st_received_gmt_time(int seatalk_port, int hours, int minutes, int seconds);
void st_received_date(int seatalk_port, int year, int month, int day);
void st_received_satellite_info(int seatalk_port, int satellite_count, int horizontal_dilution_of_position);
void st_received_lat_lon_position(int seatalk_port, LATITUDE_HEMISPHERE hemisphere_latitude, int degrees_lat, int minutes_lat_times_1000, LONGITUDE_HEMISPHERE hemisphere_longitude, int degrees_lon, int minutes_lon_times_1000);
void st_received_set_countdown_timer(int seatalk_port, int hours, int minutes, int seconds, TIMER_MODE mode);
void st_received_wind_alarm(int seatalk_port, int active_alarms);
void st_received_alarm_acknowledgement(int seatalk_port, int acknowledged_alarm);
void st_received_maxview_keystroke(int seatalk_port, int key_1, int key_2, int held_longer);
void st_received_maxview_keystroke(int seatalk_port);
void st_received_target_waypoint_name(int seatalk_port, int char_1, int char_2, int char_3, int char_4);
void st_received_course_computer_failure(int seatalk_port, COURSE_COMPUTER_FAILURE_TYPE failure_type);
void st_received_autopilot_status(int seatalk_port, int compass_heading, TURN_DIRECTION turning_direction, int target_heading, AUTOPILOT_MODE mode, int rudder_position, int alarms, int display_flags);
void st_received_waypoint_navigation(int seatalk_port, int cross_track_error_present, int cross_track_error_times_100, int waypoint_bearing_present, int waypoint_bearing, int bearing_is_magnetic, int waypoint_distance_present, int waypoint_distance_times_100, int direction_to_steer);
void st_received_autopilot_command(int seatalk_port, ST_AUTOPILOT_COMMAND command);
void st_received_set_autopilot_response_level(int seatalk_port, AUTOPILOT_RESPONSE_LEVEL response_level);
void st_received_autopilot_parameter(int seatalk_port, int parameter, int min_value, int max_value, int value);
void st_received_heading(int seatalk_port, int heading, int locked_heading_active, int locked_heading);
void st_received_set_rudder_gain(int seatalk_port, int rudder_gain);
void st_received_set_autopilot_parameter(int seatalk_port, int parameter, int value);
void st_received_enter_autopilot_setup(int seatalk_port);
void st_received_compass_variation(int seatalk_port, int degrees);
void st_received_heading_and_rudder_position(int seatalk_port, int heading, TURN_DIRECTION turning_direction, int rudder_position);
void st_received_destination_waypoint_info(int seatalk_port, char last_4, char first_8, int more_records, int last_record);
void st_received_arrival_info(int seatalk_port, int perpendicular_passed, int circle_entered, int char_1, int char_2, int char_3, int char_4);
void st_received_gps_and_dgps_fix_info(int seatalk_port, int signal_quality_available, int signal_quality, int hdop_available, int hdop, int antenna_height, int satellite_count_available, int satellite_count, int geoseparation, int dgps_age_available, int dgps_age, int dgps_station_id_available, int dgps_station_id);