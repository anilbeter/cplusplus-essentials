#include <iostream>
#include <string>
using namespace std;


int main()
{
	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* NumPtr = numbers;
	/* Pointerý bir array'e eþitlersem otomatik olarak arrayin ilk (0. indexini) indexini referans alacak. Yani NumPtr bu durumda 0 a eþit olucak */

	cout << *NumPtr << endl;
	// Output ---> 0

	/* NumPtr++ yazarak bunu deðiþtirebilirim, NumPtr++ yazarsam hemen bi yanýndaki indexe geçicek, yani bizim durumumuzda 1 */

	NumPtr++;
	cout << *NumPtr << endl;
	// Output ---> 1

	NumPtr++;
	cout << *NumPtr << endl;
	// Output ---> 2

	NumPtr += 3; /* 2 numaralý indexi gösteriyordu, 3 ekledim 5 oldu. 5 numaralý index = 5 */
	cout << *NumPtr << endl;
	// Output ---> 5

	system("pause");
}