/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Test the Template Method Pattern
*
*/

#include <iostream>
#include "Processor.hpp"

// Free functions 

double exponential(double value) {
	return std::exp(value);
}

double sine(double value) {
	return std::sin(value);
}

double inverse(double value) {
	if (abs(value) > 0.01) return 1 / value;
	else {
		std::cout << "Undefined result!\n\n";
		return 1;
	}
}

int main() {

	// Function object that doubles the input
	std::function<int(const int)> f1 = [](const int a) {
		return a * 2;
	};

	// Populate the processor's function vector with the above doubling function
	Processor<int> processor;

	unsigned N = 5;

	// Populate the processor
	for (unsigned i = 0; i < N; i++) {
		processor.AddFunction(f1);
	}

	// Now exectute with input 1
	// Will compute the Nth power of 2: for N = 5 we expect to get 32
	std::cout << "The " << N << "th power of 2 is : " << processor.execute(1) << "\n\n";

	// Remove the last function
	processor.removeFunction();

	// Will compute the Nth - 1 power of 2: for N' = 5 - 1 we expect to get 16
	std::cout << "The " << N - 1 << "th - 1 power of 2 is : " << processor.execute(1) << "\n\n";

	// Remove all functions 
	processor.clear();

	// Compute exp(sin [ pi / 5 ])
	Processor<double> processor2;
	processor2.AddFunction(exponential);
	processor2.AddFunction(sine);
	processor2.AddFunction(inverse);

	// Test
	std::cout << "Computing exp(sin [ pi / 5 ]): " << processor2.execute(5.0 / 3.14159) << "\n\n";

	// Clear out processor2
	processor2.clear();	

	return 0;
}