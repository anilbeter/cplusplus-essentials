#include <iostream>
#include <string>
using namespace std;

int main()
{
	/* C-style (old school) string like this:  */
	char myString[5] = { 'A', 'n', 'i', 'l', '\0' };
	cout << myString << endl;
	/* Output --> Anil */

	/* with <string> built-in library, i can easily create string: */
	string myFirstName = "Anil";
	string mySecondName = "Beter";
	string space = " ";
	cout << "My full name is " << myFirstName << space << mySecondName << endl;
	/* Output ---> My full name is Anil Beter */


	system("pause");
}