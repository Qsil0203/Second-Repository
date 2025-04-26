#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	int a = 5;
	int b = 10;

	int* ptra = &a;
	int* ptrb = &b;

	cout << "Value a: " << *ptra << endl;
	cout << "Value b: " << *ptrb << endl;

	int* trash = ptra;
	ptra = ptrb;
	ptrb = trash;

	cout << "\nValue a: " << *ptra << endl;
	cout << "Value b: " << *ptrb << endl;
	
}