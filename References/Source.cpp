#include <iostream>
#include <string>
/* #include <string>, string tan�mlamama olanak as�l�yor */
using namespace std;

int main()
{
	string myStr = "Anil";

	string& myRef = myStr;
	/* & koyarak ref variable olu�turdum. myReF = Anil oldu ��nk� myStr = Anil, referans ald���m�z variable myRef */
	
	
	cout << myStr << endl;
	/*Anil*/
	cout << myRef << endl;
	/*Anil*/

	system("pause");
}