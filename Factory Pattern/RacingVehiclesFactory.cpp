/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Racing Factory implementation
*
*/

#include "RacingVehiclesFactory.hpp"

Car RacingVehicles::CreateCar() {
	return Car(250.0, 2);
}

Bike RacingVehicles::CreateBike() {
	return Bike(200.0, 1);
}

Drone RacingVehicles::CreateDrone() {
	return Drone(50.0, 40.0);
}