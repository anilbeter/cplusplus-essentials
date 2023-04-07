#include <iostream>
using namespace std;

void welcome()
{
	cout << "Welcome to the game!\n";
}

void printNumber(int number1, int number2) 
{
	cout << number1 + number2 << endl;
}


int add(int a, int b)
{
	int result;
	result = a + b;
	cout << "The result is: " << result << endl;
	return result;
}


int main()
{
	welcome();
	printNumber(5, 3);
	add(2, 9);

	system("pause");
}