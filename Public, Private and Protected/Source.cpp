#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

private:
	float Health;
	string Name;
};


int main()
{

	Creature Igor;
	/* Output ----> A creature has been created! */
	Igor.SetName("Igor");
	cout << Igor.GetName() << endl;
	/* Output ---> Igor (görüldüðü üzre 2 tane fonksiyon tanýmlayarak (birisi void birisi string) private içindeki veriye eriþebiliyorum */

	system("pause");
}


Creature::Creature()
{
	cout << "A creature has been created!\n";
}

void Creature::SetName(string name)
{
	Name = name;
	/* Prive içindeki veriye ulaþýp onu deðiþtirebiliyorum bu yöntemle */
}

string Creature::GetName()
{
	return Name;
}