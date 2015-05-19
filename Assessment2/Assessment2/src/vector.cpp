#include "vector.h"


using namespace std;

static int INITIAL_CAPACITY = 7;
static int GROWTH_FACTOR = 7;

/// Constructor – dynamic array of int
Vector::Vector() {
    capacity = INITIAL_CAPACITY;
    numElements = 0;
    data = new int[INITIAL_CAPACITY];
}

/// Destructor – Delete dynamic array
Vector::~Vector() {
    delete[] data;
    //cout << "\n vector destructor has been called" << endl;
}

/// get number of elements
int Vector::size() {
    return numElements;
}

/// test to see if vector is empty
bool Vector::empty() {
    return numElements == 0;
}

/// access element at particular index
int Vector::at(unsigned int index) {
    return data[index];
}

/// Overloads the [] operator for accessing or changing the value of an element.
int& Vector::operator[](unsigned int index) {
    return data[index];
}

/// Add new element to end of vector
void Vector::push_back(int value) {
    if (numElements == capacity) {
        capacity = capacity * GROWTH_FACTOR;
        int* newData = new int[capacity];

        // copy old elements to new array
        for (unsigned int i = 0; i < numElements; i++) {
            newData[i] = data[i];
        }

        // clean up used memory and reassign the array
        delete[] data;
        data = newData;
    }

    // add new element and increment number of elements
    data[numElements] = value;
    numElements++;
}

/// Insert an element at the given index
void Vector::insert(unsigned int index, int value) {

    // add dummy element at end of vector
    // if capacity is reached, push_back takes care of this
    push_back(0);

    // shuffle up the elements above insertion point
    for (unsigned int i = numElements - 1; i > index; i--) {
        data[i] = data[i - 1];
    }

    // insert value at index
    data[index] = value;
}

/// erase element at given index
void Vector::erase(unsigned int index) {

    // shuffle elements down one place from next element to erase point
    for (unsigned int i = index; i < numElements; i++) {
        data[i] = data[i + 1];
    }

    // reduce size of vector
    numElements--;
}

/// clear data from vector
void Vector::clear() {

    // this makes addition point the first element in the array
    // no need to actually clean out the data
    numElements = 0;
}

ostream& operator << (ostream& os, const Vector& v){

    for ( unsigned int i = 0; i < v.numElements; i++ )
        os << *(v.data + i) << " ";
    os << endl;
    return os;
}

