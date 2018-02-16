/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Racing Factory definition
*
*/

#ifndef RACING_VEHICLES_FACTORY_HPP
#define RACING_VEHICLES_FACTORY_HPP

#include "Factory.hpp"

class RacingVehicles : public Factory {
public: 

	// Default constructor
	RacingVehicles() = default;

	Car CreateCar();
	Bike CreateBike();
	Drone CreateDrone();

	// Default destructor
	virtual ~RacingVehicles() = default;
};

#endif // !RACING_VEHICLES_FACTORY_HPP
