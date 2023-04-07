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


int main()
{
	welcome();
	printNumber(5, 3);

	system("pause");
}