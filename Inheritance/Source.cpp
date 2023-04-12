#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal();
	
	Animal(string name, int age, int num_limbs);  // Overloaded function

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};


int main()
{

	Animal animal;

	animal.Report();

	Animal animal_2("Shark", 4, 0);
	animal_2.Report();

	system("pause");
}

Animal::Animal()
{
	cout << "An animal is borned!\n";

	Name = "Default";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs): Name(name), Age(age), NumberOfLimbs(num_limbs)
{

}

void Animal::Report()
{
	cout << "Animal's name is " << Name << endl;
	cout << "Animal's age is " << Age << endl;
	cout << "Animal's limbs number is " << NumberOfLimbs << endl;
}