#include <iostream>
using namespace std;

int main()
{
/* Array oluþturmanýn bir baþka yolu: */
	int myArray[5] = { 1, 23, 20, 24, 27 };

	for (int i = 0; i < 5; i++)
	{
		cout << "myArray[" << i << "] " << "= " << myArray[i] << endl;
	}
	system("pause");
}