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


uint8_t charToHex(char c) {
	if (c >= '0' && c <= '9') {
		return (c - '0');
	} else if (c >= 'A' && c <= 'F') {
		return ((c - 'A') + 10);
	} else if (c >= 'a' && c <= 'f') {
		return ((c - 'a') + 10);
	}

	return 0; //Error
}

bool SLCANToCAN(CircularBuffer_t* cb, CANQueue_t* canq) {
	uint32_t current_head = cb->head;
	uint32_t current_tail = cb->tail;

	CANMessage_t mssg;
	static char line_buffer[32];
	static uint8_t index = 0;
	bool seenStart;

	while(current_head != current_tail) {

	}
}

#endif /* INC_SLCAN_H_ */
