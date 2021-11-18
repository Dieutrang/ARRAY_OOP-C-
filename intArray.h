#pragma once
#ifndef INTARRAY_h
#define INTARRAY_h
#include <iostream>
using namespace std;

class intArray
{
private:
	int* data;
	int size;
public:
	intArray();
	intArray(const intArray&intArr);
	~intArray();
	intArray& operator=(const intArray& source);
	intArray operator+(const intArray& intArr);
	intArray& operator++();
	intArray operator++(int);
	friend istream& operator>>(istream& inDev, intArray& intArr);
	friend ostream& operator<<(ostream& outDev, const intArray& intArr);
};
#endif
