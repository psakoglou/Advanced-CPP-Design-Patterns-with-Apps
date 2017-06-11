/*
*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ======================================================
*
*	TVSignals class implementation
*
*/

#include "TVSignals.hpp"

// Add an observer
void TVSignals::Attach(ObserversPtr & observer_ptr) {
	observers.push_back(observer_ptr);
}

// Remove an observer
void TVSignals::Detach() {
	observers.pop_back();
}

// Transmit the signal of the channel to all connected devices
void TVSignals::Notify() {

	// Iterate through the list and call Display the channels on each observer device
	for (auto e : observers) {
		e->Display(*this);
	}
}

// Get the number of observer
const int TVSignals::NumberOfObservers() const {
	return observers.size();
}
