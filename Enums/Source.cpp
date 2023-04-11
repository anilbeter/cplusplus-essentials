#include <iostream>
#include <string>
using namespace std;


enum PlayerStatus {
	PS_Crouched = 1,  /* Default olarak PS_Crouched deðeri 0 dý ama manuel olarak 1 atadým böyle bi þey yapma hakkým var, 1000 de atayabilirim */
	PS_Standing, /* Üsttekini 1 olarak atadýðým için bu otomatik olarak 2 oldu (Formül = her defasýnda 1 artarak gidiyor) */
	PS_Walking, /* Bu da 3 oldu... */
	PS_Running
};

int main()
{


	system("pause");
}