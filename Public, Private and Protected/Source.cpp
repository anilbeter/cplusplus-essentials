#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

	float GetHealth();

	void TakeDamage(float damage);

private:
	float Health;
	string Name;
};


int main()
{

	Creature Igor;
	/* Output ----> A creature has been created! */
	Igor.SetName("Igor");
	cout << "Name: " << Igor.GetName() << endl;
	/* Output ---> Igor */
	cout << "Health: " << Igor.GetHealth() << endl;
	/* Output ---> 100 */

	cout << "Igor now will take 35 damage!" << endl;
	Igor.TakeDamage(35);
	/* Output --> Igor take 35 damage
				   New health is: 65
	*/


	system("pause");
}


Creature::Creature()
{
	Health = 100.f;
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


float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;

	if (Total <= 0.f)
	{
		cout << GetName() << " has died!\n";
	}
	else
	{
		Health -= damage;
	}
	cout << GetName() << " take " << damage << endl;
	cout << "New health is: " << Health << endl;
}

