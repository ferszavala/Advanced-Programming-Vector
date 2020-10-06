//La variable con la que se declara el vector es la misma para toda la longitud del arreglo
/*
 * File: vector.h
 * --------------
 * This interface exports the Vector template class, which provides an
 * efficient, safe, convenient replacement for the array type in C++.
 */

#ifndef _vector_h
#define _vector_h

#include <iterator>
#include "error.h"
#include "foreach.h"

/*
 * Class: Vector<ValueType>
 * ------------------------
 * This class stores an ordered list of values similar to an array.  It
 * supports traditional array selection using square brackets, but also
 * supports inserting and deleting elements.
 */

template <typename ValueType> //haces  dinamica la variable de entrada, una funcion recibe tipos de datos de caracter dinámico, da igual el tipo de dato que recibe
class Vector {

public:

/*
 * Constructor: Vector
 * Usage: Vector<ValueType> vec;
 *        Vector<ValueType> vec(n, value);
 * ---------------------------------------
 * Initializes a new vector.  The default constructor creates an empty
 * vector.  The second form creates an array with n elements, each of which
 * is initialized to value; if value is missing, the elements are
 * initialized to the default value for the type.
 */

   Vector();
   explicit Vector(int n, ValueType value = ValueType());

/*
 * Destructor: ~Vector
 * Usage: (usually implicit)
 * -------------------------
 * Frees any heap storage allocated by this vector.
 */

   ~Vector();

/*
 * Method: size
 * Usage: int nElems = vec.size();
 * -------------------------------
 * Returns the number of elements in this vector.
 */

   int size() const; 

/*
 * Method: isEmpty
 * Usage: if (vec.isEmpty()) . . .
 * -------------------------------
 * Returns true if this vector contains no elements.
 */

   bool isEmpty() const;

/*
 * Method: clear
 * Usage: vec.clear();
 * -------------------
 * Removes all elements from this vector.
 */

   void clear();

/*
 * Method: get
 * Usage: ValueType val = vec.get(index);
 * --------------------------------------
 * Returns the element at the specified index in this vector.  This method
 * signals an error if the index is not in the array range.
 */

   ValueType get(int index) const;

/*
 * Method: set
 * Usage: vec.set(index, value);
 * -----------------------------
 * Replaces the element at the specified index in this vector with a new
 * value.  The previous value at that index is overwritten.  This method
 * signals an error if the index is not in the array range.
 */

   void set(int index, ValueType value);

/*
 * Method: insertAt
 * Usage: vec.insertAt(0, value);
 * ------------------------------
 * Inserts the element into this vector before the specified index.  All
 * subsequent elements are shifted one position to the right.  This method
 * signals an error if the index is outside the range from 0 up to and
 * including the length of the vector.
 */

   void insertAt(int index, ValueType value);

/*
 * Method: removeAt
 * Usage: vec.removeAt(index);
 * ---------------------------
 * Removes the element at the specified index from this vector.  All
 * subsequent elements are shifted one position to the left.  This method
 * signals an error if the index is outside the array range.
 */

   void removeAt(int index);

/*
 * Method: add
 * Usage: vec.add(value);
 * ----------------------
 * Adds a new value to the end of this vector.  To ensure compatibility
 * with the vector class in the Standard Template Library, this method is
 * also called push_back.
 */

   void add(ValueType value);
   void push_back(ValueType value);

/*
 * Operator: []
 * Usage: vec[index]
 * -----------------
 * Overloads [] to select elements from this vector.  This extension
 * enables the use of traditional array notation to get or set individual
 * elements.  This method signals an error if the index is outside the
 * array range.
 */

   ValueType & operator[](int index);

/*
 * Operator: +
 * Usage: v1 + v2
 * --------------
 * Concatenates two vectors.
 */

   Vector operator+(const Vector & v2) const;

/*
 * Operator: +=
 * Usage: v1 += v2;
 *        v1 += value;
 * -------------------
 * Adds all of the elements from v2 (or the single specified value) to v1. 
 * As a convenience, the Vector package also overloads the comma operator
 * so that it is possible to initialize a vector like this:
 *
 *    Vector<int> digits;
 *    digits += 0, 1, 2, 3, 4, 5, 6, 7, 8, 9;
 */

   Vector & operator+=(const Vector & v2);
   Vector & operator+=(const ValueType & value);

/*
 * Macro: foreach
 * Usage: foreach (ValueType value in vec) . . .
 * ---------------------------------------------
 * Iterates over the elements of the vector in ascending index order.
 */

   /* The foreach macro is defined in foreach.h */

/*
 * Method: mapAll
 * Usage: vec.mapAll(fn);
 *        vec.mapAll(fn, data);
 * ----------------------------
 * Calls the specified function on each element of the vector in ascending
 * index order.  The second form of the call allows the client to pass a
 * data value of any type to the callback function.
 */

   void mapAll(void (*fn)(ValueType value));

   template <typename ClientDataType>
   void mapAll(void (*fn)(ValueType value, ClientDataType & data),
               ClientDataType & data);

#include "private/vectorpriv.h"

};

#include "private/vectorimpl.cpp"

#endif