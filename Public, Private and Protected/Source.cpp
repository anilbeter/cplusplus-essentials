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
	/* Output ---> Igor (g�r�ld��� �zre 2 tane fonksiyon tan�mlayarak (birisi void birisi string) private i�indeki veriye eri�ebiliyorum */

	system("pause");
}


Creature::Creature()
{
	cout << "A creature has been created!\n";
}

void Creature::SetName(string name)
{
	Name = name;
	/* Prive i�indeki veriye ula��p onu de�i�tirebiliyorum bu y�ntemle */
}

string Creature::GetName()
{
	return Name;
}