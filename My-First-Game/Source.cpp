#include <iostream>
using namespace std;

int main()
{
	int a(1);
	int b = 13;

	if (a > b)
	{
		cout << "A is greater than B." << endl;
	}
	else if (a == b)
	{
		cout << "A and B are equal." << endl;
	}
	else {
		cout << "B is greater than A." << endl;
	}


	system("pause");
}