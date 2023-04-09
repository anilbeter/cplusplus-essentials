#include <iostream>
#include <string>
/* #include <string>, string tanýmlamama olanak asðlýyor */
using namespace std;

int main()
{
	string myStr = "Anil";

	string& myRef = myStr;
	/* & koyarak ref variable oluþturdum. myReF = Anil oldu çünkü myStr = Anil, referans aldýðýmýz variable myRef */
	
	
	cout << myStr << endl;
	/*Anil*/
	cout << myRef << endl;
	/*Anil*/

	system("pause");
}