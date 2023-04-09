#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);

int main()
{
	Print("Hello World!");
	Print(23);



	system("pause");
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
	cout << i << endl;
}