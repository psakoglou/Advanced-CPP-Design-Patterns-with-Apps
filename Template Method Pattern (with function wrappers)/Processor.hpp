/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Processor class definition
*
*/

// Include guards
#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <functional>
#include <vector>

// Alias for the function type F : Type -> Type
// You can change the domain and range of F below
template <class Type>
using F = std::function<Type(const Type)>;

// Processor templated class
template <class T>
class Processor {
public:

	// Constructor
	Processor() = default;
	
	// Methods
	void AddFunction(F<T> f);	// Add a function in the vector
	void removeFunction();		// Remove a function from the vector
	void clear();				// Empty the vector

	T execute(const T t);		// Execute all functions by composing them consequently:
								// f1 o f2 o f3 o ... o fn (t)
								// where f1 is the function of the 0th index, and fn i the function of the n-1th index
	// Destructor
	~Processor() = default;

private:
	std::vector<F<T>> function_vector;
};

#ifndef PROCESSOR_CPP
#include "Processor.cpp"
#endif

#endif // !PROCESSOR_HPP
