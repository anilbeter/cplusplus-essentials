#include <iostream>
using namespace std;

int main()
{
	double numberPi = 3.14159;
	double numberE = 2.711829585;
	int count = 1;
	bool Condition = true;

	do
	{
		cout << "Loop: " << count << endl;
		cout << "Number Pi is: " << numberPi << endl;
		cout << "Number E is: " << numberE << endl;
		cout << "(Number E + Number Pi) * " << count << " = " << (numberE + numberPi) * count << endl;
		cout << endl;
		count++;

		if (count <= 100)
		{
			Condition = true;
		}
		else
		{
			Condition = false;
		}
	} while (Condition);


	system("pause");
}