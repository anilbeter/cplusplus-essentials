#include <iostream>
#include <string>
/* #include <string>, string tan�mlamama olanak as�l�yor */
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