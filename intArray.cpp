#include "intArray.h"

intArray::intArray()
{
	size = 0;
	data = NULL;
}
intArray::~intArray()
{
	if (size > 0)
	{
		size = 0;
		delete[]data;
		data = NULL;
	}
}

intArray::intArray(const intArray& intArr)
{
	size = intArr.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = intArr.data[i];
	}
}
intArray& intArray::operator=(const intArray& source)
{
	if (this != &source)
	{
		delete[]data;
		size = source.size;
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = source.data[i];
		}
	}
	return *this;
}
intArray intArray::operator+(const intArray& intArr)
{
	intArray temp;
	if (size == intArr.size)
	{
		temp.size = size;
		temp.data = new int[temp.size];
		for (int i = 0; i < temp.size; i++)
		{
			temp.data[i] = data[i] + intArr.data[i];
		}
	}
	else if (size > intArr.size)
	{
		temp.size = intArr.size;
		temp.data = new int[temp.size];
		for (int i = 0; i < temp.size; i++)
		{
			temp.data[i] = data[i] + intArr.data[i];
		}
	}
	else
	{
		temp.size = size;
		temp.data = new int[size];
		for (int i = 0; i < temp.size; i++)
		{
			temp.data[i] = data[i] + intArr.data[i];
		}
	}
	return temp;
}
istream& operator>>(istream& inDev, intArray& intArr)
{
	do
	{
		cout << "Input size: ";
		inDev >> intArr.size;

		if (intArr.size <= 0)
		{
			cout << "Size of array must be greater than zero" << endl;
		}

	} while (intArr.size <= 0);

	intArr.data = new int[intArr.size];

	for (int i = 0; i < intArr.size; i++)
	{
		cout << "data[" << i << "] = ";
		inDev >> intArr.data[i];
	}
	return inDev;

}
ostream& operator<<(ostream& outDev, const intArray& intArr)
{
	for (int i = 0; i < intArr.size; i++)
	{
		outDev << intArr.data[i] << " ";
	}
	cout << endl;
	return outDev;
}
intArray& intArray::operator++()
{
	for (int i = 0; i < size; i++)
	{
		data[i] = data[i] + 1;
	}
	return *this;
}
intArray intArray::operator++(int)
{
	intArray temp = *this;
	++(*this);
	return temp;
}
