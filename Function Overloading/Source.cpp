#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);

int main()
{
	Print("Hello World!");
	
	
	Print(23);
	
	
	Print("Anil", "Beter");



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

void Print(string str1, string str2)
{
	cout << "First string: " << str1 << endl;
	cout << "Second string: " << str2 << endl;
}