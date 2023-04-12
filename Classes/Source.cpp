#include <iostream>
#include <string>
using namespace std;


class Dog {
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
	Dog Rex;
	Dog Ocean;


	system("pause");
}