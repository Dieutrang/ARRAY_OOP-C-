#include "intArray.h"

int main()
{
	intArray intArr1, intArr2;
	cin >> intArr1;
	cout << intArr1;
	cin >> intArr2;
	cout << intArr2 << endl;

	cout << "Array1 + Array2 = " << intArr1 + intArr2 << endl;
	cout << "Array1++ = " << intArr1++ << endl;
	cout << "++Array1 = " << ++intArr1 << endl;

	return 0;
}