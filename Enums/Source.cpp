#include <iostream>
#include <string>
using namespace std;


enum PlayerStatus {
	PS_Crouched = 1,  /* Default olarak PS_Crouched de�eri 0 d� ama manuel olarak 1 atad�m b�yle bi �ey yapma hakk�m var, 1000 de atayabilirim */
	PS_Standing, /* �sttekini 1 olarak atad���m i�in bu otomatik olarak 2 oldu (Form�l = her defas�nda 1 artarak gidiyor) */
	PS_Walking, /* Bu da 3 oldu... */
	PS_Running
};

int main()
{


	system("pause");
}