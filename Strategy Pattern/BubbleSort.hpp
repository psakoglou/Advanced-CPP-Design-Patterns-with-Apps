/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ===============================================================
*
*	BubbleSort class definition
*
*/

// Include guards
#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "SortingStrategy.hpp"

// BubbleSort class
template <class T, std::size_t N>
class BubbleSort : public SortingStrategy<T, N> {
public:

	// Default constructor
	BubbleSort();

	// Virtual function inherited from base class
	virtual void Sort(std::array<T, N> & input);
	
	// Default destructor
	virtual ~BubbleSort();

};

#ifndef BUBBLESORT_CPP
#include "BubbleSort.cpp"
#endif // !BUBBLESORT_CPP

#endif // !BUBBLESORT_HPP
