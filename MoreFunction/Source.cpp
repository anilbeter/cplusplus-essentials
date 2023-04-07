#include <iostream>
using namespace std;

void welcome();	

char getYesNo();

int main()
{
	welcome();
	getYesNo();

	system("pause");
}

void welcome()
{
	cout << "Welcome to the game!\n";
}

char getYesNo()
{
	cout << "Please answer: y or n.\n";

	char response;
	cin >> response;

	cout << "Your answer is: " << response << endl;
	return response;
}