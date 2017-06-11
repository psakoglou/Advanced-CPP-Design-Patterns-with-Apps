/*
*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ======================================================
*
*	TVSignals base class implementation
*
*/


// Include guards
#ifndef TVSIGNALS_HPP
#define TVSIGNALS_HPP

#include <list>
#include <memory>
#include "Observer.hpp"
#include <string>

// Alias
using ObserversPtr = std::shared_ptr<Observer>;

// TVSignals class
class TVSignals {
private: 
	// Has a list of observers -- displaying devices in our application
	std::list<ObserversPtr> observers;
public:
	// Constructor
	TVSignals() = default; 

	// Virtual methods to be inherited
	virtual void Attach(ObserversPtr & observer_ptr);	// Add a device (observer)
	virtual void Detach();								// Remove a device (observer)
	virtual void Notify();								// Iterate in the list of observers and use functionality
	virtual const int NumberOfObservers() const;		// Size of our observer list

	// Pure virtual method
	virtual const std::string display() = 0;			// Extra functionality -- display channels

	// Destructor
	virtual ~TVSignals() = default; 
};

#endif // !TVSIGNALS_HPP
