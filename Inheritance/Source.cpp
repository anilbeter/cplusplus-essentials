#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal();

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};


int main()
{

	Animal animal;

	animal.Report();

	system("pause");
}

Animal::Animal()
{
	cout << "An animal is borned!\n";

	Name = "Default";
	Age = 2;
	NumberOfLimbs = 4;
}

void Animal::Report()
{
	cout << "Animal's name is " << Name << endl;
	cout << "Animal's age is " << Age << endl;
	cout << "Animal's limbs number is " << NumberOfLimbs << endl;
}