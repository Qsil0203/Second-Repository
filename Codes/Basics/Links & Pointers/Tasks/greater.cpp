#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	int a;
	int b;

	cout << "Введите а: ";
	cin >> a;

	cout << "Введите б: ";
	cin >> b;

	int* ptra = &a;
	int* ptrb = &b;

	

	cout << (*ptra > *ptrb ? *ptra : *ptrb);
}
