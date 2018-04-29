#ifndef __LNM_ETHERNET_H
#define __LNM_ETHERNET_H

#include <stdint.h>

#define LNM_ETHERNET_MAC_ADDRESS_LENGTH_BYTES 6

// Setting to 10,000 for flexibility.
// It is up to the user to conform to MTU requirements.
#define LNM_ETHERNET_MAX_PAYLOAD_LENGTH_BYTES 10000

typedef enum tLNM_EthernetStatus
{
    LNM_ETHERNET_STATUS_OK,
} LNM_EthernetStatus;

typedef struct tLNM_EthernetInfo
{
    uint8_t destinationAddress[LNM_ETHERNET_MAC_ADDRESS_LENGTH_BYTES];
    uint8_t sourceAddress[LNM_ETHERNET_MAC_ADDRESS_LENGTH_BYTES];
    union
    {
        uint8_t type;
        uint8_t length;
    };
    uint8_t data[LNM_ETHERNET_MAX_PAYLOAD_LENGTH_BYTES];
} LNM_EthernetInfo;

LNM_EthernetStatus construct (LNM_EthernetInfo *ethernetInfo, uint8_t **msg, uint8_t *msgLen);

#endif // __LNM_ETHERNET_H
