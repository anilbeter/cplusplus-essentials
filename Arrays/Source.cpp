#include <iostream>
using namespace std;

int main()
{
	int MyIntArray[10]{};

	for (int i = 0; i < 10; i++)
	{
		MyIntArray[i] = i;
	}
			
	cout << "The first element in MyIntArray is: " << MyIntArray[0] << endl;
	cout << "The fifth element is: " << MyIntArray[4] << endl;

	system("pause");
}