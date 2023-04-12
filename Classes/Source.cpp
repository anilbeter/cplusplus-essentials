#include <iostream>
#include <string>
using namespace std;


class Dog {
public:
	
	Dog()    // Bu Constructor olarak adlandýrýlýyor. Class ismi ile ayný olmak zorunda
	{
		Bark();

		Name = "Default Name";
		Age = 10;
		Health = 100.f;
	}

	string Name;
	int Age;
	float Health;

	void Bark()
	{
		cout << "Woof!" << endl;
	}
};

int main()
{
	Dog dog;
	
	cout << dog.Name << endl;
	/* Output ----> Default Name */
	cout << dog.Health << endl;
	/* Output ----> 100 */

	system("pause");
}