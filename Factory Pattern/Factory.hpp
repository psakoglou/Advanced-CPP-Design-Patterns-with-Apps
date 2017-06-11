/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Factory
*
*/

#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "Vehicles.hpp"

class Factory {
public: 
	
	// Default constructor
	Factory() = default; 

	// Pure virtual method
	virtual Car CreateCar() = 0; 
	virtual Bike CreateBike() = 0;
	virtual Drone CreateDrone() = 0;

	// Default destructor
	virtual ~Factory() = default;
};

#endif // !FACTORY_HPP

