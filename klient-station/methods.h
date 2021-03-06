/*****************************************************************************
 *	  ____  _____ ___ ____  
 *   |  _ \|  ___|_ _|  _ \ 
 *   | |_) | |_   | || | | |
 *   |  _ <|  _|  | || |_| |
 *   |_| \_\_|   |___|____/ 
 *	 Author: Marc Jamot
 *
 *   Holds the methods used to connect to the web service
 *
 *****************************************************************************/

#include "data.h"

#ifndef METHODS_HEADER
#define METHODS_HEADER

void pallet_id(const PalletMovement * movement);

void place_id(const PalletMovement * movement);

/// Starts to move a pallet
void move_start(const PalletMovement *movement);

/// Ends a move with a pallet
void move_end(const PalletMovement *movement);

/// Store a movement to send
void movements_add(const char *URL);

/// Send all stored movements
void send_movements();

#endif
