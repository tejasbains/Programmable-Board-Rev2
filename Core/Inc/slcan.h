/*
 * slcan.h
 *
 *  Created on: Nov 1, 2026
 *      Author: arthi
 */

#ifndef INC_SLCAN_H_
#define INC_SLCAN_H_

#include <circular_buffer.h>
#include <can_queue.h>


#define NUM_OF_BITS_IN_HEX 4U


uint8_t charToHex(char c);

bool SLCANToCAN(CircularBuffer_t* cb, CANQueue_t* canq);


#endif /* INC_SLCAN_H_ */
