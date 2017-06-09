/*
*	Pavlos Sakoglou
*
* ====================================================================
*
*	Point class definition
*
*/

// Multiple inclusion guards
#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

// Point derived class from Shape
class Point {
private:
	// Member data for point -- x and y coordinates
	double m_x, m_y;
public:
	
	// Constructors
	Point();
	Point(double xs, double ys);
	Point(const Point & pt);

	// Operators
	Point & operator=(const Point& pt);
	friend std::ostream & operator<<(std::ostream & os, const Point & p);

	// Getters 
	const double x() const;
	const double y() const;

	// Setters 
	void x(double xs);
	void y(double ys);

	// Print function
	void print();

	// Function to compute the distance between two points
	double Distance(const Point& p);

	// Function to compute the distance of a Point from the origin
	double Distance();

	// Destructor 
	virtual ~Point();
};

#endif // !POINT_HPP