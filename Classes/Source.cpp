#include <iostream>
#include <string>
using namespace std;

struct Cat
{
	Cat();

	int Age;
	float Health;

	void Meow();
};

Cat::Cat()
{
	cout << "New kitty has borned!" << endl;
	
	Age = 3;
	Health = 90.2f;

	Meow();

}


void Cat::Meow()
{
	cout << "My age is: " << Age << "\n";
	cout << "My health is: " << Health << "\n";
}



int main()
{
	Cat cat;

	cat.Age += 5;
	cout << "My cats age is: " << cat.Age << endl;

	system("pause");
}