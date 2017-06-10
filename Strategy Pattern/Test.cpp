/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ===============================================================
*
*	Test the Strategy Pattern
*
*/

#include <iostream>
#include <memory>
#include "BubbleSort.hpp"
#include "OtherSort.hpp"

int main() {

	// Test array
	const std::size_t N = 10;
	std::array<int, N> testArray1 = { 9,8,7,4,6,5,1,3,2,10 };

	// Print before sorting
	std::cout << "Array 1 before sorting:\n";
	for (int elem : testArray1) {
		std::cout << elem << " ";
	}
	std::cout << "\n\n";

	// Pick a strategy
	std::shared_ptr<SortingStrategy<int, N>> sorting_strategy = std::make_shared<BubbleSort<int, N>>(BubbleSort<int, N>());
	std::cout << "Sorting Strategy: BubbleSort\n\n";

	// Sort via BubbleSort
	sorting_strategy->Sort(testArray1);

	// Print the result
	std::cout << "Array 1 after sorting:\n";
	for (int elem : testArray1) {
		std::cout << elem << " ";
	}
	std::cout << "\n\n\n\n";

	// Now sort another array and change sorting strategy
	std::array<int, N> testArray2 = { 91, -8, 78, -2004, 106, 5, 5, 5, 2, -190};

	// Print before sorting
	std::cout << "Array 2 before sorting:\n";
	for (int elem : testArray2) {
		std::cout << elem << " ";
	}
	std::cout << "\n\n";

	// Change a strategy
	sorting_strategy = std::make_shared<OtherSort<int, N>>(OtherSort<int, N>());
	std::cout << "Sorting Strategy: OtherSort\n\n";

	// Sort via OtherSort
	sorting_strategy->Sort(testArray2);

	// Print the result
	std::cout << "Array 2 after sorting:\n";
	for (int elem : testArray2) {
		std::cout << elem << " ";
	}
	std::cout << "\n\n";

	/*** Comments on the Strategy Pattern (aka Policy Pattern)

		Re-usability: 
			To add more sorting algorithms, simply derive another class from SortingStrategy with different implementation of Sort()
			and point sorting_strategy pointer to this class.

		Drawbacks:
			For every new algorithm you need to add an extra class to the system

		Alternative Pattern:
			Use a function wrapper member in the SortingStrategy and update it with a free function or lambda expression before use it in 
			the sorting function. That means that we only need to use a setter and implement a new sorting algorithm in a free function 
			instead of adding classes in our application. 
	
	******************************************************************************************************************************************************************/

	return 0;
}