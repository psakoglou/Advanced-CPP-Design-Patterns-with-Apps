/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Transportation Factory definition
*
*/

#ifndef TRANSPORTATION_VEHICLES_FACTORY_HPP
#define TRANSPORTATION_VEHICLES_FACTORY_HPP

#include "Factory.hpp"

class TransportationVehicles : public Factory {
public:

	// Default constructor
	TransportationVehicles() = default;

	Car CreateCar();
	Bike CreateBike();
	Drone CreateDrone();

	// Default destructor
	virtual ~TransportationVehicles() = default;
};

#endif // !TRANSPORTATION_VEHICLES_FACTORY_HPP
