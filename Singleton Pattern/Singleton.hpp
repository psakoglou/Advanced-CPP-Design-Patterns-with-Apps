/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ====================================================================
*
*	Singleton definition
*
*/

#ifndef Singleton_hpp
#define Singleton_hpp

// Forward reference for singleton
template<class TYPE> class Singleton; 

// Templated Singleton class
template<class TYPE> 
class Singleton {
private:
	static TYPE * ins;
protected:
	Singleton();
	Singleton(const Singleton<TYPE> & source);
	virtual ~Singleton();
	Singleton<TYPE>& operator = (const Singleton<TYPE>& source);

public:
	static TYPE * instance();
};

#include "Singleton.cpp"
#endif // Singleton_hpp
