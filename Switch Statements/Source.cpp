#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus {
	PS_Running,
	PS_Walking,
	Ps_Crouching
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchStatementWithInt(int i);



int main()
{
	float MovementSpeed;

	PlayerStatus status = PS_Walking;

	UpdateMovementSpeed(status, MovementSpeed);
	cout << "Movement speed is: " << MovementSpeed << endl;
	cout << "The player status: " << status << endl;

	SwitchStatementWithInt(23);
	// Output ---> I LOVE 23! 23 IS MY TRANSFORMATION


	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	switch (P_Status)
	{
	case PS_Running:
		speed = RunSpeed;
		break;
	case PS_Walking:
		speed = WalkSpeed;
		break;
	case Ps_Crouching:
		speed = CrouchSpeed;
	}
}

void SwitchStatementWithInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Hmm your number is 0" << endl;
		break;
	case 1:
		cout << "1 is nice number tho" << endl;
		break;
	case 23:
		cout << "I LOVE 23! 23 IS MY TRANSFORMATION" << endl;
	}
}