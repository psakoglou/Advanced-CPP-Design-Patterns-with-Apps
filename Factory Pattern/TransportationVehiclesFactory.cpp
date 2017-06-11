/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Transportation Factory implementation
*
*/

#include "TransportationVehiclesFactory.hpp"

Car TransportationVehicles::CreateCar() {
	return Car(180.0, 5);
}

Bike TransportationVehicles::CreateBike() {
	return Bike(150.0, 2);
}

Drone TransportationVehicles::CreateDrone() {
	return Drone(15.0, 80.0);
}