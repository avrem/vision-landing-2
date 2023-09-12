#pragma once
// MESSAGE GEN_STATUS PACKING

#define MAVLINK_MSG_ID_GEN_STATUS 240


typedef struct __mavlink_gen_status_t {
 float charge_current; /*< [A] Charge current*/
 uint32_t rpm; /*< [rpm] RPM*/
 float ice_temp; /*< [degC] Engine temperature*/
 float gen_temp; /*< [degC] Motor temperature*/
 uint8_t fuel_remaining; /*< [%] Fuel remaining*/
 uint8_t cooler; /*< [%] Cooler*/
 uint8_t starter; /*< [%] Starter*/
 uint8_t throttle; /*< [%] Throttle*/
 float vsi_temp; /*< [degC] Inverter temperature*/
 uint32_t rpm_alt; /*< [rpm] RPM alternate*/
 float ice_temp_alt; /*< [degC] Engine temperature alternate*/
} mavlink_gen_status_t;

#define MAVLINK_MSG_ID_GEN_STATUS_LEN 32
#define MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN 20
#define MAVLINK_MSG_ID_240_LEN 32
#define MAVLINK_MSG_ID_240_MIN_LEN 20

#define MAVLINK_MSG_ID_GEN_STATUS_CRC 255
#define MAVLINK_MSG_ID_240_CRC 255



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GEN_STATUS { \
    240, \
    "GEN_STATUS", \
    11, \
    {  { "charge_current", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_gen_status_t, charge_current) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_gen_status_t, rpm) }, \
         { "ice_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gen_status_t, ice_temp) }, \
         { "gen_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gen_status_t, gen_temp) }, \
         { "fuel_remaining", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_gen_status_t, fuel_remaining) }, \
         { "cooler", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_gen_status_t, cooler) }, \
         { "starter", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_gen_status_t, starter) }, \
         { "throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_gen_status_t, throttle) }, \
         { "vsi_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_gen_status_t, vsi_temp) }, \
         { "rpm_alt", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_gen_status_t, rpm_alt) }, \
         { "ice_temp_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_gen_status_t, ice_temp_alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GEN_STATUS { \
    "GEN_STATUS", \
    11, \
    {  { "charge_current", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_gen_status_t, charge_current) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_gen_status_t, rpm) }, \
         { "ice_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gen_status_t, ice_temp) }, \
         { "gen_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gen_status_t, gen_temp) }, \
         { "fuel_remaining", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_gen_status_t, fuel_remaining) }, \
         { "cooler", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_gen_status_t, cooler) }, \
         { "starter", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_gen_status_t, starter) }, \
         { "throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_gen_status_t, throttle) }, \
         { "vsi_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_gen_status_t, vsi_temp) }, \
         { "rpm_alt", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_gen_status_t, rpm_alt) }, \
         { "ice_temp_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_gen_status_t, ice_temp_alt) }, \
         } \
}
#endif

/**
 * @brief Pack a gen_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param charge_current [A] Charge current
 * @param rpm [rpm] RPM
 * @param ice_temp [degC] Engine temperature
 * @param gen_temp [degC] Motor temperature
 * @param fuel_remaining [%] Fuel remaining
 * @param cooler [%] Cooler
 * @param starter [%] Starter
 * @param throttle [%] Throttle
 * @param vsi_temp [degC] Inverter temperature
 * @param rpm_alt [rpm] RPM alternate
 * @param ice_temp_alt [degC] Engine temperature alternate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gen_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float charge_current, uint32_t rpm, float ice_temp, float gen_temp, uint8_t fuel_remaining, uint8_t cooler, uint8_t starter, uint8_t throttle, float vsi_temp, uint32_t rpm_alt, float ice_temp_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEN_STATUS_LEN];
    _mav_put_float(buf, 0, charge_current);
    _mav_put_uint32_t(buf, 4, rpm);
    _mav_put_float(buf, 8, ice_temp);
    _mav_put_float(buf, 12, gen_temp);
    _mav_put_uint8_t(buf, 16, fuel_remaining);
    _mav_put_uint8_t(buf, 17, cooler);
    _mav_put_uint8_t(buf, 18, starter);
    _mav_put_uint8_t(buf, 19, throttle);
    _mav_put_float(buf, 20, vsi_temp);
    _mav_put_uint32_t(buf, 24, rpm_alt);
    _mav_put_float(buf, 28, ice_temp_alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEN_STATUS_LEN);
#else
    mavlink_gen_status_t packet;
    packet.charge_current = charge_current;
    packet.rpm = rpm;
    packet.ice_temp = ice_temp;
    packet.gen_temp = gen_temp;
    packet.fuel_remaining = fuel_remaining;
    packet.cooler = cooler;
    packet.starter = starter;
    packet.throttle = throttle;
    packet.vsi_temp = vsi_temp;
    packet.rpm_alt = rpm_alt;
    packet.ice_temp_alt = ice_temp_alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEN_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEN_STATUS_LEN, MAVLINK_MSG_ID_GEN_STATUS_CRC);
}

/**
 * @brief Pack a gen_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param charge_current [A] Charge current
 * @param rpm [rpm] RPM
 * @param ice_temp [degC] Engine temperature
 * @param gen_temp [degC] Motor temperature
 * @param fuel_remaining [%] Fuel remaining
 * @param cooler [%] Cooler
 * @param starter [%] Starter
 * @param throttle [%] Throttle
 * @param vsi_temp [degC] Inverter temperature
 * @param rpm_alt [rpm] RPM alternate
 * @param ice_temp_alt [degC] Engine temperature alternate
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gen_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float charge_current,uint32_t rpm,float ice_temp,float gen_temp,uint8_t fuel_remaining,uint8_t cooler,uint8_t starter,uint8_t throttle,float vsi_temp,uint32_t rpm_alt,float ice_temp_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEN_STATUS_LEN];
    _mav_put_float(buf, 0, charge_current);
    _mav_put_uint32_t(buf, 4, rpm);
    _mav_put_float(buf, 8, ice_temp);
    _mav_put_float(buf, 12, gen_temp);
    _mav_put_uint8_t(buf, 16, fuel_remaining);
    _mav_put_uint8_t(buf, 17, cooler);
    _mav_put_uint8_t(buf, 18, starter);
    _mav_put_uint8_t(buf, 19, throttle);
    _mav_put_float(buf, 20, vsi_temp);
    _mav_put_uint32_t(buf, 24, rpm_alt);
    _mav_put_float(buf, 28, ice_temp_alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GEN_STATUS_LEN);
#else
    mavlink_gen_status_t packet;
    packet.charge_current = charge_current;
    packet.rpm = rpm;
    packet.ice_temp = ice_temp;
    packet.gen_temp = gen_temp;
    packet.fuel_remaining = fuel_remaining;
    packet.cooler = cooler;
    packet.starter = starter;
    packet.throttle = throttle;
    packet.vsi_temp = vsi_temp;
    packet.rpm_alt = rpm_alt;
    packet.ice_temp_alt = ice_temp_alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GEN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GEN_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEN_STATUS_LEN, MAVLINK_MSG_ID_GEN_STATUS_CRC);
}

/**
 * @brief Encode a gen_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gen_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gen_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gen_status_t* gen_status)
{
    return mavlink_msg_gen_status_pack(system_id, component_id, msg, gen_status->charge_current, gen_status->rpm, gen_status->ice_temp, gen_status->gen_temp, gen_status->fuel_remaining, gen_status->cooler, gen_status->starter, gen_status->throttle, gen_status->vsi_temp, gen_status->rpm_alt, gen_status->ice_temp_alt);
}

/**
 * @brief Encode a gen_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gen_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gen_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gen_status_t* gen_status)
{
    return mavlink_msg_gen_status_pack_chan(system_id, component_id, chan, msg, gen_status->charge_current, gen_status->rpm, gen_status->ice_temp, gen_status->gen_temp, gen_status->fuel_remaining, gen_status->cooler, gen_status->starter, gen_status->throttle, gen_status->vsi_temp, gen_status->rpm_alt, gen_status->ice_temp_alt);
}

/**
 * @brief Send a gen_status message
 * @param chan MAVLink channel to send the message
 *
 * @param charge_current [A] Charge current
 * @param rpm [rpm] RPM
 * @param ice_temp [degC] Engine temperature
 * @param gen_temp [degC] Motor temperature
 * @param fuel_remaining [%] Fuel remaining
 * @param cooler [%] Cooler
 * @param starter [%] Starter
 * @param throttle [%] Throttle
 * @param vsi_temp [degC] Inverter temperature
 * @param rpm_alt [rpm] RPM alternate
 * @param ice_temp_alt [degC] Engine temperature alternate
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gen_status_send(mavlink_channel_t chan, float charge_current, uint32_t rpm, float ice_temp, float gen_temp, uint8_t fuel_remaining, uint8_t cooler, uint8_t starter, uint8_t throttle, float vsi_temp, uint32_t rpm_alt, float ice_temp_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GEN_STATUS_LEN];
    _mav_put_float(buf, 0, charge_current);
    _mav_put_uint32_t(buf, 4, rpm);
    _mav_put_float(buf, 8, ice_temp);
    _mav_put_float(buf, 12, gen_temp);
    _mav_put_uint8_t(buf, 16, fuel_remaining);
    _mav_put_uint8_t(buf, 17, cooler);
    _mav_put_uint8_t(buf, 18, starter);
    _mav_put_uint8_t(buf, 19, throttle);
    _mav_put_float(buf, 20, vsi_temp);
    _mav_put_uint32_t(buf, 24, rpm_alt);
    _mav_put_float(buf, 28, ice_temp_alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEN_STATUS, buf, MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEN_STATUS_LEN, MAVLINK_MSG_ID_GEN_STATUS_CRC);
#else
    mavlink_gen_status_t packet;
    packet.charge_current = charge_current;
    packet.rpm = rpm;
    packet.ice_temp = ice_temp;
    packet.gen_temp = gen_temp;
    packet.fuel_remaining = fuel_remaining;
    packet.cooler = cooler;
    packet.starter = starter;
    packet.throttle = throttle;
    packet.vsi_temp = vsi_temp;
    packet.rpm_alt = rpm_alt;
    packet.ice_temp_alt = ice_temp_alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEN_STATUS, (const char *)&packet, MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEN_STATUS_LEN, MAVLINK_MSG_ID_GEN_STATUS_CRC);
#endif
}

/**
 * @brief Send a gen_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gen_status_send_struct(mavlink_channel_t chan, const mavlink_gen_status_t* gen_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gen_status_send(chan, gen_status->charge_current, gen_status->rpm, gen_status->ice_temp, gen_status->gen_temp, gen_status->fuel_remaining, gen_status->cooler, gen_status->starter, gen_status->throttle, gen_status->vsi_temp, gen_status->rpm_alt, gen_status->ice_temp_alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEN_STATUS, (const char *)gen_status, MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEN_STATUS_LEN, MAVLINK_MSG_ID_GEN_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GEN_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gen_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float charge_current, uint32_t rpm, float ice_temp, float gen_temp, uint8_t fuel_remaining, uint8_t cooler, uint8_t starter, uint8_t throttle, float vsi_temp, uint32_t rpm_alt, float ice_temp_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, charge_current);
    _mav_put_uint32_t(buf, 4, rpm);
    _mav_put_float(buf, 8, ice_temp);
    _mav_put_float(buf, 12, gen_temp);
    _mav_put_uint8_t(buf, 16, fuel_remaining);
    _mav_put_uint8_t(buf, 17, cooler);
    _mav_put_uint8_t(buf, 18, starter);
    _mav_put_uint8_t(buf, 19, throttle);
    _mav_put_float(buf, 20, vsi_temp);
    _mav_put_uint32_t(buf, 24, rpm_alt);
    _mav_put_float(buf, 28, ice_temp_alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEN_STATUS, buf, MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEN_STATUS_LEN, MAVLINK_MSG_ID_GEN_STATUS_CRC);
#else
    mavlink_gen_status_t *packet = (mavlink_gen_status_t *)msgbuf;
    packet->charge_current = charge_current;
    packet->rpm = rpm;
    packet->ice_temp = ice_temp;
    packet->gen_temp = gen_temp;
    packet->fuel_remaining = fuel_remaining;
    packet->cooler = cooler;
    packet->starter = starter;
    packet->throttle = throttle;
    packet->vsi_temp = vsi_temp;
    packet->rpm_alt = rpm_alt;
    packet->ice_temp_alt = ice_temp_alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GEN_STATUS, (const char *)packet, MAVLINK_MSG_ID_GEN_STATUS_MIN_LEN, MAVLINK_MSG_ID_GEN_STATUS_LEN, MAVLINK_MSG_ID_GEN_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE GEN_STATUS UNPACKING


/**
 * @brief Get field charge_current from gen_status message
 *
 * @return [A] Charge current
 */
static inline float mavlink_msg_gen_status_get_charge_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field rpm from gen_status message
 *
 * @return [rpm] RPM
 */
static inline uint32_t mavlink_msg_gen_status_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field ice_temp from gen_status message
 *
 * @return [degC] Engine temperature
 */
static inline float mavlink_msg_gen_status_get_ice_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field gen_temp from gen_status message
 *
 * @return [degC] Motor temperature
 */
static inline float mavlink_msg_gen_status_get_gen_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field fuel_remaining from gen_status message
 *
 * @return [%] Fuel remaining
 */
static inline uint8_t mavlink_msg_gen_status_get_fuel_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field cooler from gen_status message
 *
 * @return [%] Cooler
 */
static inline uint8_t mavlink_msg_gen_status_get_cooler(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field starter from gen_status message
 *
 * @return [%] Starter
 */
static inline uint8_t mavlink_msg_gen_status_get_starter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field throttle from gen_status message
 *
 * @return [%] Throttle
 */
static inline uint8_t mavlink_msg_gen_status_get_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field vsi_temp from gen_status message
 *
 * @return [degC] Inverter temperature
 */
static inline float mavlink_msg_gen_status_get_vsi_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field rpm_alt from gen_status message
 *
 * @return [rpm] RPM alternate
 */
static inline uint32_t mavlink_msg_gen_status_get_rpm_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field ice_temp_alt from gen_status message
 *
 * @return [degC] Engine temperature alternate
 */
static inline float mavlink_msg_gen_status_get_ice_temp_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a gen_status message into a struct
 *
 * @param msg The message to decode
 * @param gen_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_gen_status_decode(const mavlink_message_t* msg, mavlink_gen_status_t* gen_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gen_status->charge_current = mavlink_msg_gen_status_get_charge_current(msg);
    gen_status->rpm = mavlink_msg_gen_status_get_rpm(msg);
    gen_status->ice_temp = mavlink_msg_gen_status_get_ice_temp(msg);
    gen_status->gen_temp = mavlink_msg_gen_status_get_gen_temp(msg);
    gen_status->fuel_remaining = mavlink_msg_gen_status_get_fuel_remaining(msg);
    gen_status->cooler = mavlink_msg_gen_status_get_cooler(msg);
    gen_status->starter = mavlink_msg_gen_status_get_starter(msg);
    gen_status->throttle = mavlink_msg_gen_status_get_throttle(msg);
    gen_status->vsi_temp = mavlink_msg_gen_status_get_vsi_temp(msg);
    gen_status->rpm_alt = mavlink_msg_gen_status_get_rpm_alt(msg);
    gen_status->ice_temp_alt = mavlink_msg_gen_status_get_ice_temp_alt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GEN_STATUS_LEN? msg->len : MAVLINK_MSG_ID_GEN_STATUS_LEN;
        memset(gen_status, 0, MAVLINK_MSG_ID_GEN_STATUS_LEN);
    memcpy(gen_status, _MAV_PAYLOAD(msg), len);
#endif
}
