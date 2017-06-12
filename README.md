# Advanced C++ Design Patterns with Applications

This repository provides sample code and simple examples of selected C++ design patterns that can be used when designing different softwares. Design patterns are Object-Oriented coding techniques that allow us to write re-usable, maintainable, and efficient code without redundant repetitions and complicated files. 

# Usability

Download and run the code files of each directory separately.

# Patterns Featured

**Singleton Pattern**

*Intent*

Ensure a class only has one instance, and provide a global point of access to it.

*Usage*

1) There must be exactly one instance of a class, and it must be accessible to clients from a well-known access point.

2) When the sole instance should be extensible by subclassing, and clients should be able to use an extended instance without modifying their code

*Application*

Setting a unique origin in the 2-D Euclidean Plane <br/>

**Strategy Pattern (aka Policy)** 

*Intent*

Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently fromclients that use it.

*Usage*

 1) Different algorithms will be appropriate at different times. We don't want to support multiple linebreaking algorithms if we don't use them all. 
 
 2) It's difficult to add new algorithms and vary existing ones when linebreaking is an integral part of a client. 

*Application*

Sorting an STL array with different algorithms: bubble sort and another sorting algorithm

**Observer Pattern**

*Intent*

Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically. 

*Usage*

Partitioning a system into a collection of cooperating classes is the need to maintain consistency between related objects. You don't want to achieve consistency by making the classes tightly coupled, because that reduces their reusability.
 
 
*Application*

Receive TV signals of channels (observables), connect or disconnect them to/from several devices (observers), and play the TV channels in these devices.

**Factory Pattern**
 
*Intent*

Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses. 

*Usage*

1) When a class can't anticipate the class of objects it must create. 

2) When a class wants its subclasses to specify the objects it creates. 

3) When classes delegate responsibility to one of several helper subclasses, and you want to localize the knowledge of which helper subclass is the delegate. 

*Application*

Garage selling cars, bikes, and drones from two (or more) manufacturers. <br/>

**Template Method Pattern (with universal function wrappers)**

*Intent*

Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.

Using universal function wrappers we don't need subclasses anymore, but instead we can comprise the algorithm -- and the dependency graph -- using a sequence of free functions or function objects of a certain type. 

*Usage*

1) To implement the invariant parts of an algorithm once, and leave it up to a sequence of free function wrappers to implement the behavior, that can vary.

*Application*

Compute the Nth power of 2 and perform an n-size function composition with a single (or several) input


