/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Vehicle classes implementation
*
*/

#include "Vehicles.hpp"

#include <iostream>

// Car implementation

void Car::buy() {
	std::cout << "Car: Speed: " << mph << " No. of Passengers: " << passengers << "\n";
}

void Car::Speed(double mph_) {
	mph = mph_;
}

void Car::Passengers(unsigned int people) {
	passengers = people;
}


// Bike implementation

void Bike::buy() {
	std::cout << "Bike: Speed: " << mph << " No. of Passengers: " << passengers << "\n";
}

void Bike::Speed(double mph_) {
	mph = mph_;
}

void Bike::Passengers(unsigned int people) {
	passengers = people;
}


// Drone implementation

void Drone::buy() {
	std::cout << "Drone: Speed: " << mph << " Max Weight: " << weight << "\n";
}

void Drone::Speed(double mph_) {
	mph = mph_;
}

void Drone::Weight(double weight_) {
	weight = weight_;
}