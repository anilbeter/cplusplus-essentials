#include <iostream>
#include <string>
/* #include <string>, string tanýmlamama olanak asðlýyor */
using namespace std;

void ChangeStr(string str);

int main()
{
	string myStr = "Anil";

	ChangeStr(myStr);
	cout << myStr << endl;
	/* Output: Anil. Eee ünlem nerede? açýklamasý aþaðýdaki comment */

	system("pause");
}

void ChangeStr(string str)
/* string& yazmadýðým için Anil'in sonuna ! eklemeyecek. Ref almýyorum çünkü */
{
	str += "!";
}