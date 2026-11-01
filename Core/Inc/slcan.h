/*
 * slcan.h
 *
 *  Created on: Nov 1, 2026
 *      Author: arthi
 */

#ifndef INC_SLCAN_H_
#define INC_SLCAN_H_

#include <circular_buffer.h>

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


#endif /* INC_SLCAN_H_ */
