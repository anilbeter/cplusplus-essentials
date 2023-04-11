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



int main()
{
	float MovementSpeed;

	PlayerStatus status = PS_Walking;

	UpdateMovementSpeed(status, MovementSpeed);
	cout << "Movement speed is: " << MovementSpeed << endl;
	cout << "The player status: " << status << endl;


	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	if (P_Status == PS_Running)
	{
		speed = RunSpeed;
	}
	else if (P_Status == PS_Walking)
	{
		speed = WalkSpeed;
	}
	else if (P_Status == Ps_Crouching)
	{
		speed = CrouchSpeed;
	}
}