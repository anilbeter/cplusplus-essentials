#include <iostream>
#include <string>
/* #include <string>, string tan�mlamama olanak as�l�yor */
using namespace std;

void ChangeStr(string str);

int main()
{
	string myStr = "Anil";

	ChangeStr(myStr);
	cout << myStr << endl;
	/* Output: Anil. Eee �nlem nerede? a��klamas� a�a��daki comment */

	system("pause");
}

void ChangeStr(string str)
/* string& yazmad���m i�in Anil'in sonuna ! eklemeyecek. Ref alm�yorum ��nk� */
{
	str += "!";
}