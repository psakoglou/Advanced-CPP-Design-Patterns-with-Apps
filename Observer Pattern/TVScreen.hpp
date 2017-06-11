/*
*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ======================================================
*
*	TVScreen observer device
*
*/

// Include guards
#ifndef TV_SCREEN_HPP
#define TV_SCREEN_HPP

#include "Observer.hpp"
#include "TVSignals.hpp"

// TV screen class derived class
class TVScreen : public Observer {
public: 
	// Constructor
	TVScreen() = default;

	// Inherited method
	void Display(TVSignals & tv_signal);

	// Destructor 
	virtual ~TVScreen() = default;

};

// Implementation
void TVScreen::Display(TVSignals & tv_signal) {
	std::string channel = tv_signal.display();
	std::cout << channel << "in TV screen\n\n";
}

#endif // !TV_SCREEN_HPP
