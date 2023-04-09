#include <iostream>
#include <string>
using namespace std;

int main()
{
	/* && --> AND operator */
	/* || --> OR operator */

	int i = 1;
	int j = 2;
	int k = 1;

	bool Condition = true;
	
	if (i == j || i == k)
	{
		cout << Condition << endl;
		/* Eðer doðruysa beklenent output ---> 1 */
	}
	else
	{
		Condition = false;
		cout << Condition << endl;
		/* Eðer yanlýþsa beklenen output ----> 0 */
	}

	string myName = "Anil";
	int myAge = 23;

	if ((myName == "Anil") && (myAge == 23))
	{
		cout << "My name is Anil " << "and " << "I'm 23 Years old." << endl;
	}
	/* Beklenen output --> My name is Anil and I'm 23 Years old. */


	system("pause");
}

