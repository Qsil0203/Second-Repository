#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	//1. task
	int a = 10;

	cout << "Addres a: " << &a << endl;

	//2. task
	int b = 5;
	int* ptrb = &b;
	cout << "Value b: " << *ptrb << endl;

	*ptrb = 10;
	cout << "Value b: " << *ptrb << endl;

	//3. task
	int c = 5;
	int& link = c;

	cout << "Value c: " << link << endl;

	cout << "Modified" << endl;
	link = 10;
	cout << "Value c: " << link;
}
