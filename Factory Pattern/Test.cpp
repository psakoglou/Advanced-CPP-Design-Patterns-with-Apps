/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Factory Pattern Test
*
*/

// Include libraries
#include <iostream>
#include <memory>

// Include code files
#include "RacingVehiclesFactory.hpp"
#include "TransportationVehiclesFactory.hpp"

int main() {

	// Choose factory 
	std::shared_ptr<Factory> factory = std::make_shared<RacingVehicles>(RacingVehicles());
	std::cout << "Chosen factory: Racing Factory\n\n";

	// Contruct the vehicles as per the chosen factory's policy
	Car racing_car(factory->CreateCar());
	Bike racing_bike(factory->CreateBike());
	Drone racing_drone(factory->CreateDrone());

	// Sell the racing vehicles
	std::cout << "\n\nSell the newly constructed vehicles:\n\n";

	// Print the bought vehicle's information 
	racing_car.buy();
	racing_bike.buy();
	racing_drone.buy();

	// Change manufacturer (factory method)
	factory = std::make_shared<TransportationVehicles>(TransportationVehicles());
	std::cout << "\n\n\nChange manufacturer to: Transportation Factory\n\n";

	// Contruct the vehicles as per the chosen factory's policy
	Car transportation_car(factory->CreateCar());
	Bike transportation_bike(factory->CreateBike());
	Drone transportation_drone(factory->CreateDrone());

	// Sell the racing vehicles
	std::cout << "\n\nSell the newly constructed vehicles:\n\n";

	// Print the bought vehicle's information 
	transportation_car.buy();
	transportation_bike.buy();
	transportation_drone.buy();
	std::cout << "\n\n";

	return 0;
}
