/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ===============================================================
*
*	QuickSort class definition
*
*/

// Include guards
#ifndef OTHERSORT_HPP
#define OTHERSORT_HPP

#include "SortingStrategy.hpp"

template <class T, std::size_t N>
class OtherSort : public SortingStrategy<T, N> {
public:

	// Default constructor
	OtherSort();

	// Virtual function inherited from base class
	virtual void Sort(std::array<T, N> & input);

	// Default destructor
	virtual ~OtherSort();

};

#ifndef OTHERSORT_CPP
#include "OtherSort.cpp"
#endif // !OTHERSORT_CPP

#endif // !OTHERSORT_HPP
