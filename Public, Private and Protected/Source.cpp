#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

private:
	float Health;
	string Name;
};


int main()
{

	Creature Igor;
	/* Output ---> A creature has been created! */
	Igor.Name = "Anil";
	/* ERROR --> member Creature:Name is inaccessible */

	system("pause");
}


Creature::Creature()
{
	cout << "A creature has been created!\n";
}