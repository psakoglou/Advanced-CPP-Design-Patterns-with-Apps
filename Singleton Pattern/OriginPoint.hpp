/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ====================================================================
*
*	OriginPoint definition
*
*/

// Multiple inclusion guards
#ifndef ORIGINPOINT_HPP
#define ORIGINPOINT_HPP

#include "Point.hpp"
#include "Singleton.cpp"

// Derive the OriginPoint class from the Singleton
class OriginPoint : public Singleton<Point> {
public:
	// Destructor
	virtual ~OriginPoint();

private:
	// Constructor
	OriginPoint();											
};

#endif // !ORIGINPOINT_HPP
