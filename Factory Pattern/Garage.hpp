/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Garage base class definition
*
*/

#ifndef GARAGE_HPP
#define GARAGE_HPP 

class Garage {
public:

	// Constructor 
	Garage() = default;

	// Pure virtual method
	virtual void buy() = 0;

	// Destructor 
	virtual ~Garage() = default;
};

#endif // !GARAGE_HPP