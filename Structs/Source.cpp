#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct LocationVector
{
	float X;
	float Y;
	float Z;
};


struct Player
{
	int Level;
	float Health;
	float Damage;
	float Stamina;
	
	LocationVector Location = { 0.f, 0.f, 0.f };
	
	void TakeDamage(float dmg)
	{
		Health -= dmg;
	}
	int GetLevel()
	{
		if (Level > 10)
		{
			cout << "Your level greater than 10! \n";
		}
		return Level;
	}

	void DisplayLocation()
	{
		cout << "Location.X = " << Location.X << endl;
		cout << "Location.Y = " << Location.Y << endl;
		cout << "Location.Z = " << Location.Z << endl;
	}

};



int main()
{
	Player p_1;
	p_1.Level = 12;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	cout << "p_1 level = " << p_1.GetLevel() << endl;

	p_1.TakeDamage(40.f);


	cout << "p_1 takes " << 40.f << " damage!" << endl;
	cout << "p_1 health = " << p_1.Health << endl;

	p_1.DisplayLocation();

	system("pause");
}