/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Vehicle classes definitions
*
*/

#ifndef VECHICLES_HPP
#define VECHICLES_HPP 

#include "Garage.hpp"
#include <iostream>

// Car class
class Car : public Garage {
public:

	// Constructors
	Car() = default;
	Car(double speed, unsigned int people) : mph(speed), passengers(people) {
		std::cout << "Car is constructed!\n";
	}

	// Setters
	void Speed(double mph_);
	void Passengers(unsigned int people);

	// Pure virtual method
	void buy();

	// Destructor 
	virtual ~Car() = default;

private: 
	double mph;
	unsigned int passengers;
};

// Bike class
class Bike : public Garage {
public:

	// Constructors
	Bike() = default;
	Bike(double speed, unsigned int people) : mph(speed), passengers(people) {
		std::cout << "Bike is constructed!\n";
	}

	// Setters
	void Speed(double mph_);
	void Passengers(unsigned int people);

	// Pure virtual method
	void buy();

	// Destructor 
	virtual ~Bike() = default;

private:
	double mph;
	unsigned int passengers;
};

// Drone class
class Drone : public Garage {
public:

	// Constructors
	Drone() = default;
	Drone(double speed, double weight_) : mph(speed), weight(weight_) {
		std::cout << "Drone is constructed!\n";
	}

	// Setters
	void Speed(double mph_);
	void Weight(double weight_);

	// Pure virtual method
	void buy();

	// Destructor 
	virtual ~Drone() = default;

private:
	double mph;
	double weight;
};



#endif // !VECHICLES_HPP