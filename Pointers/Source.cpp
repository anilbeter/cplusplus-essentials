#include <iostream>
#include <string>
using namespace std;


int main()
{
	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* NumPtr = numbers;
	/* Pointer� bir array'e e�itlersem otomatik olarak arrayin ilk (0. indexini) indexini referans alacak. Yani NumPtr bu durumda 0 a e�it olucak */

	cout << *NumPtr << endl;
	// Output ---> 0

	/* NumPtr++ yazarak bunu de�i�tirebilirim, NumPtr++ yazarsam hemen bi yan�ndaki indexe ge�icek, yani bizim durumumuzda 1 */

	NumPtr++;
	cout << *NumPtr << endl;
	// Output ---> 1

	NumPtr++;
	cout << *NumPtr << endl;
	// Output ---> 2

	NumPtr += 3; /* 2 numaral� indexi g�steriyordu, 3 ekledim 5 oldu. 5 numaral� index = 5 */
	cout << *NumPtr << endl;
	// Output ---> 5

	system("pause");
}