#include <iostream>
#include <string>
using namespace std;


int main()
{
	int a = 23;
	int* aPointer = &a;

	cout << aPointer << endl;
	/* Output ---> 000000879090FBC4 */

	system("pause");
}