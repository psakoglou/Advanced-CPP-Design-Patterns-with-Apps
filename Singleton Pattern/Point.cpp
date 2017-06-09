/*
*	Pavlos Sakoglou
*
* ====================================================================
*
*	Point class implementation
*
*/

// Multiple inclusion guards 
#ifndef POINT_CPP
#define POINT_CPP

// Include class definition
#include "Point.hpp"
#include "OriginPoint.hpp"

// Implementation of Point class' functionality

// Default constructor implementation
Point::Point() : m_x(0), m_y(0) {
}

// Constructor with coordinates implementation
Point::Point(double xs, double ys) : m_x(xs), m_y(ys) {
}

// Copy constructor implementation
Point::Point(const Point & pt) : m_x(pt.m_x), m_y(pt.m_y) {
}

// Assignment operator implementation
Point & Point::operator=(const Point& pt) {
	if (this != &pt) {
		m_x = pt.m_x;
		m_y = pt.m_y;
	}
	return *this;
}

// Getter implementation

// Get x
const double Point::x() const {
	return m_x;
}

// Get y
const double Point::y() const {
	return m_y;
}

// Setter implementation implementation

// Set x 
void Point::x(double xs) {
	m_x = xs;
}

// Set y 
void Point::y(double ys) {
	m_y = ys;
}

// Print function implementation
void Point::print() {
	std::cout << "Point(" << m_x << "," << m_y << ")";
}

// Ostream implementation
std::ostream & operator<<(std::ostream & os, const Point & p) {
	os << "Point(" << p.x() << "," << p.y() << ")";
	return os;
}

// Implementation of Point::Distance member function
double Point::Distance(const Point& p) {
	return std::sqrt(std::pow((p.m_x - m_x), 2) + std::pow((p.m_y - m_y), 2));
}

// !!!!!!!!!!!!!!!!!!!!!!!!!

// Singleton pattern below makes sure that the distance is always measured to the relative origin

// !!!!!!!!!!!!!!!!!!!!!!!!!

// Change the Distance() function of the Point class to use the new OriginPoint class
double Point::Distance() {	
	// Using a unique instance of the OriginPoint
	return Distance(*OriginPoint::instance());
}

// Default destructor
Point::~Point() = default;

#endif  // !POINT_CPP