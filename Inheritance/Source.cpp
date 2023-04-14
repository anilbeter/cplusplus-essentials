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


class Dog : public Animal  /* Dog inheritances everything in Animal (child-parent) */
{
public:
	Dog();
	Dog(string name, int age, int num_limbs);
};

int main()
{
	Dog dog("Rex", 3, 4);
	/* Output ----> An animal is borned!
					Animal's name is Rex
					Animal's age is 3
					Animal's limbs number is 4 
	*/


	system("pause");
}

Animal::Animal()
{
	cout << "An animal is borned!\n";

	Name = "Default";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs):
	Name(name), Age(age), NumberOfLimbs(num_limbs)
{
	Report();
}

void Animal::Report()
{
	cout << "Animal's name is " << Name << endl;
	cout << "Animal's age is " << Age << endl;
	cout << "Animal's limbs number is " << NumberOfLimbs << endl;
}

Dog::Dog()
{
	cout << "Wooff!" << endl;
}

Dog::Dog(string name, int age, int num_limbs)
{
	Animal(name, age, num_limbs);
}