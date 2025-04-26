#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	int a;

	cout << "Введите а: ";
	cin >> a;

	int* ptra = &a;
	cout << (*ptra > 0? "Число положительное" : "Число отрицательное");
	
}