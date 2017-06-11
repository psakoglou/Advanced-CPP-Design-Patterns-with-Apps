/*
*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ======================================================
*
*	Smart Phone observer device
*
*/

// Include guards
#ifndef SMART_PHONE_HPP
#define SMART_PHONE_HPP

#include "Observer.hpp"
#include "TVSignals.hpp"

// Smart Phone class
class SmartPhone : public Observer {
public:
	// Constructor
	SmartPhone() = default;

	// Inherited method
	void Display(TVSignals & tv_signal);

	// Destructor 
	virtual ~SmartPhone() = default;

};

// Implementation
void SmartPhone::Display(TVSignals & tv_signal) {
	std::string channel = tv_signal.display();
	std::cout << channel << "in Smart Phone screen\n\n";
}

#endif // !SMART_PHONE_HPP
