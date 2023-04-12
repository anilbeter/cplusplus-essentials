#include <iostream>
#include <string>
using namespace std;


class Dog {
public:
	
	Dog()    // Bu Constructor olarak adlandýrýlýyor. Class ismi ile ayný olmak zorunda
	{
		Bark();
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
	// Output ---> Woof!

	system("pause");
}