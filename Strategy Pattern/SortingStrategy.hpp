/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ===============================================================
*
*	SortingStrategy base class definition
*
*/

// Include guards
#ifndef SORTINGSTRATEGY_HPP
#define SORTINGSTRATEGY_HPP

#include <array>

// SortingStrategy class
template <class T, std::size_t N>
class SortingStrategy {
public:

	// Default constructor
	SortingStrategy();

	// Pure virtual function to be derived and implemented in the subclasses
	virtual void Sort(std::array<T, N> & input) = 0;

	// Destructor
	virtual ~SortingStrategy();
};

#ifndef SORTINGSTRATEGY_CPP
#include "SortingStrategy.cpp"
#endif // SORTINGSTRATEGY_CPP

#endif // !SORTINGSTRATEGY_HPP
