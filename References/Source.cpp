#include <iostream>
#include <string>
/* #include <string>, string tanýmlamama olanak asðlýyor */
using namespace std;

void ChangeStr(string& str);

int main()
{
	string myStr = "Anil";

	ChangeStr(myStr);
	cout << myStr << endl;
	/*Beklenen output: Anil! */

	system("pause");
}

void ChangeStr(string& str)
{
	str += "!";
}