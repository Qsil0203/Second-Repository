#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int a = 5;
	cout << "Value a: "<< a << endl;
	cout << "Addres a: " << &a << endl;

	int b = 10;
	cout << "Value b: " << b << endl;
	cout << "Addres b: " << &b << endl;
}