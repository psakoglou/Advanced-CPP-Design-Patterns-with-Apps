/*
*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
*  ======================================================
*
*	Observer Pattern test
*
*/

#include <iostream>
#include "Channels.hpp"
#include "TVScreen.hpp"
#include "SmartPhone.hpp"

int main() {

	// Signal for channels A and B is now available
	Channel_A channel_A;
	Channel_B channel_B;

	// Initialize devices that "observe" the signals -- open the TVs
	ObserversPtr observer_device = std::make_shared<TVScreen>(TVScreen());

	// Connect channels A and B to the TV screens
	channel_A.Attach(observer_device);
	channel_B.Attach(observer_device);

	// Initialize other devices that "observe" the signals -- open the smart phone screen app
	observer_device = std::make_shared<SmartPhone>(SmartPhone());
	
	// Connect channels A and B to the smart phone screens
	channel_A.Attach(observer_device);
	channel_B.Attach(observer_device);

	// Signal is transmitted now to all devices
	channel_A.Notify();
	channel_B.Notify();

	// In how many devices the channels are being displayed?
	std::cout << "Channel A is displayed in " << channel_A.NumberOfObservers() << " devices\n\n";
	std::cout << "Channel B is displayed in " << channel_B.NumberOfObservers() << " devices\n\n";

	// Detach a device from each channel -- turn off the smart phones
	channel_A.Detach(); 
	channel_B.Detach();

	// The signal transmission is now updated
	channel_A.Notify();
	channel_B.Notify();

	// In how many devices the channels are being displayed now? (channels displayed on the TV screens)
	std::cout << "Channel A is displayed in " << channel_A.NumberOfObservers() << " devices\n\n";
	std::cout << "Channel B is displayed in " << channel_B.NumberOfObservers() << " devices\n\n";

	// Detach a device from each channel -- turn off the TV screens now
	channel_A.Detach();
	channel_B.Detach();

	// We can extend the application further by adding more channels or displaying devices
	// We can also add more features to it: by using the Singleton pattern we can ensure that only one
	// channel can be displayed in a screen, etc. 

	return 0;
}