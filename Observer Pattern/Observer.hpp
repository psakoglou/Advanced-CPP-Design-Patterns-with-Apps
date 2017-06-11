/*
*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ======================================================
*
*	Observer base class
*
*/

// Include guards
#ifndef OBSERVER_HPP
#define OBSERVER_HPP

// Forward declaration of TVSignals to be used below
class TVSignals;
#include <string>

// Observer class
class Observer {
public: 
	// Constructor
	Observer() = default;

	// Pure virtual method called Display()
	virtual void Display(TVSignals & tv_signal) = 0;

	// Destructor
	virtual ~Observer() = default; 
};

#endif
