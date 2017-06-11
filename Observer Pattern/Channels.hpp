/*
*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ======================================================
*
*	Channels derived classes definition and implementation
*
*/

// Include guards
#ifndef CHANNELS_HPP
#define CHANNELS_HPP 

#include "TVSignals.hpp"
#include <iostream>

// Channel A class
class Channel_A : public TVSignals {
public:
	// Constructor
	Channel_A() = default;

	// Customized inherited function
	const std::string display() {
		return "Displaying Channel A ";
	}

	// Destructor
	virtual ~Channel_A() = default;
};

// Channel B class
class Channel_B : public TVSignals {
public:
	// Constructor
	Channel_B() = default;

	// Customized inherited function
	const std::string display() {
		return "Displaying Channel B ";
	}

	// Destructor
	virtual ~Channel_B() = default;
};

#endif