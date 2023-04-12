#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;
	int X;
	int Y;
	int Z;
};


int main()
{
	Container container = { "Anil", 3, 4, 5 };

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl;
	// Output ----> Anil

	cout << PtrToCont->Name << endl;
	// Output -----> Anil (Üstteki kod ile tamamen ayný, ama daha fancy daha tatlý geliyor göze)

	cout << PtrToCont->X << endl;
	// Output ----> 3

	



	system("pause");
}