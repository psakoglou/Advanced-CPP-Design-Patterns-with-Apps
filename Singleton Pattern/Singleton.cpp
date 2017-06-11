/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ====================================================================
*
*	Singleton Implementation
*
*/


#ifndef Singleton_cpp
#define Singleton_cpp

#include "Singleton.hpp"

// Templated Singleton code
template<class TYPE> 
TYPE * Singleton<TYPE>::ins = NULL;

// Default constructor
template<class TYPE>
Singleton<TYPE>::Singleton() { 
}

// Copy constructor
template<class TYPE>
Singleton<TYPE>::Singleton(const Singleton<TYPE>& source) { 
}

// Destructor
template<class TYPE>
Singleton<TYPE>::~Singleton() {
	int x;
	x=0;
}

// Return the singleton instance
template<class TYPE> 
TYPE * Singleton<TYPE>::instance() {

	if (ins==NULL) {
		ins=new TYPE;
	}

	return ins;
}

// Assignment operator
template<class TYPE>
Singleton<TYPE>& Singleton<TYPE>::operator = (const Singleton<TYPE>& source) {	
	return *this;
}

#endif	// Singleton_cpp
