/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ====================================================================
*
*	OriginPoint implementation
*
*/

// Multiple inclusion guards
#ifndef ORIGINPOINT_CPP
#define ORIGINPOINT_CPP

#include "OriginPoint.hpp"

// Default constructor
// Call Singleton<Point> constructor
OriginPoint::OriginPoint() : Singleton<Point>() { 
}

// Default destructor 
OriginPoint::~OriginPoint() = default;

#endif // !ORIGINPOINT_CPP
