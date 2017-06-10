/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ===============================================================
*
*	OtherSort class implementation
*
*/

#ifndef OTHERSORT_CPP
#define OTHERSORT_CPP

#include "OtherSort.hpp"

// Default constructor
template <class T, std::size_t N>
OtherSort<T, N>::OtherSort() = default;

// Virtual function inherited from base class
template <class T, std::size_t N>
void OtherSort<T, N>::Sort(std::array<T, N> & input) {
	unsigned size = input.size();
	auto minAfterIndex = [&](int i, const std::array<int, 10> & ar) {
		int min = i;
		unsigned size = ar.size();
		for (unsigned k = i; k < size; k++) {
			if (ar[min] > ar[k]) min = k;
		}
		return min;
	};
	for (unsigned int i = 0; i < size; i++) {
		int j = minAfterIndex(i, input);
		std::swap(input[i], input[j]);
	}
}

// Default destructor
template <class T, std::size_t N>
OtherSort<T, N>::~OtherSort() = default;


#endif