#include <iostream>
#include <string>
using namespace std;


enum PlayerStatus  /* enum PlayerStatus yazarak, playerStatus ad�nda bir data type olu�turdum. T�pk� int gibi, string gibi. */
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

int main()
{
	PlayerStatus status;
	status = PS_Crouched;

	if (status == PS_Crouched)
	{
		cout << "The player is crouching." << endl;
	}

	status = PS_Running;
	if (status == PS_Running)
	{
		cout << "The player is running." << endl;
	}

	system("pause");
}