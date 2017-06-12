/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Processor class implementation
*
*/

// Include guards (for templates)
#ifndef PROCESSOR_CPP
#define PROCESSOR_CPP

#include "Processor.hpp"

template <class T>
void Processor<T>::AddFunction(F<T> f) {
	function_vector.push_back(f);
}

template <class T>
void Processor<T>::removeFunction() {
	function_vector.pop_back();
}

template <class T>
void Processor<T>::clear() {
	function_vector.clear();
}

// Algorithm that computes: f1 o f2 o f3 o ... o fn (t)
template <class T>
T Processor<T>::execute(const T t) {
	std::size_t size = function_vector.size();
	T result = function_vector[size - 1](t);
	T temp;
	for (unsigned i = size - 1; i > 0; i = i - 2) {
		if (i == 1) {
			result = function_vector[i - 1](result);
			return result;
		}
		temp = function_vector[i - 1](result);
		result = function_vector[i - 2](temp);
	}
	return result; 
}

#endif