#include <iostream>
#include <string>
using namespace std;


class Dog {
public:
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
	dog.Bark();

	system("pause");
}