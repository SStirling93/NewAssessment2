/// vector.h
/// This interface defines a Vector class to demonstrate how a vector works.
/// limited to holding int values

#ifndef _vector_h
#define _vector_h

#include <iostream>
using namespace std;

class Vector {
public:
    /// Usage: Vector vector – vector is a variable of type Vector
    /// Initialises a new empty vector.
    Vector();

    /// Usage: (implicitly called)
    /// Deallocates storage associated with this vector.
    ~Vector();

    /// Usage: vector.size()
    /// Returns the number of elements in the vector.
    int size();

    /// Usage: vector.empty()
    /// Returns true if the vector is empty.
    bool empty();

    /// Usage: vector.at(index)
    /// Returns the element at index in the vector.
    int at(unsigned int index);

    /// Usage: vector[index] = value
    /// Overloads the [] operator for accessing or changing the value of an element.
    int& operator[](unsigned int index);

    /// Usage: vector.push_back(value)
    /// Adds a new element with value to the vector.
    void push_back(int value);

    /// Usage: vector.insert(index, value)
    /// Inserts an element with value at index in the vector.
    void insert(unsigned int index, int value);

    /// Usage: vector.erase(index)
    /// Removes the element at index from the vector.
    void erase(unsigned int index);

    /// Usage: vector.clear()
    /// Removes all elements from the vector.
    void clear();

    /// Usage: os << v
    /// output a vector object
    friend ostream& operator << (ostream& os, const Vector& v);

private:
    int* data;
    unsigned int capacity;
    unsigned int numElements;
};

#endif // _vector_h
