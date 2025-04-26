#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	int a = 5;
	int* ptr = &a;

	cout << "Addres a: " << ptr << endl;
	cout << "Value a: " << *ptr << endl;

	*ptr = 10;
	cout << "Addres a: " << ptr << endl;
	cout << "Value a: " << *ptr << endl;
}