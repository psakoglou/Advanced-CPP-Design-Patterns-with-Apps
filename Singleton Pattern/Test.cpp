/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ====================================================================
*
*	Singleton test
*
*/

#include <iostream>

#include "Point.hpp"
#include "Singleton.hpp"
#include "OriginPoint.hpp"

int main() {

	// Set the origin to (0,0)
	(OriginPoint::instance())->x(0);
	(OriginPoint::instance())->y(0);

	// Print the current origin
	std::cout << "Origin: " << *OriginPoint::instance() << "\n";
	
	// Create some Point instances
	Point p1(1, 1), p2(2, 2), p3(5, 5);

	// Compute and print the distances of the points from the origin
	// Implicitly using the OriginPoint class
	std::cout << "Distance of " << p1 << " from the origin: " << p1.Distance() << "\n";
	std::cout << "Distance of " << p2 << " from the origin: " << p2.Distance() << "\n";
	std::cout << "Distance of " << p3 << " from the origin: " << p3.Distance() << "\n\n\n";
	
	// Change the origin using the setter functions to be Point(1, 1)
	(OriginPoint::instance())->x(1);
	(OriginPoint::instance())->y(1);

	// Print the current origin
	std::cout << "New Origin: " << *OriginPoint::instance() << "\n";

	// Compute and print the point distances from the new origin
	std::cout << "Distance of " << p1 << " from the origin: " << p1.Distance() << "\n";
	std::cout << "Distance of " << p2 << " from the origin: " << p2.Distance() << "\n";
	std::cout << "Distance of " << p3 << " from the origin: " << p3.Distance() << "\n\n\n";

	return 0;
}
