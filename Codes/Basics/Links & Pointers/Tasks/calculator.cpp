#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	int a;
	int b;
	char c;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter math action: ";
	cin >> c;

	int* ptra = &a;
	int* ptrb = &b;

	switch (c)
	{
	case '+':
		cout << "Sum: " << *ptra + *ptrb;
		break;
	case '-':
		cout << "Minus: " << *ptra - *ptrb;
		break;
	case '/':
		cout << "Division: " << *ptra / *ptrb;
		break;
	case '*':
		cout << "Multiplication: " << *ptra * *ptrb;
		break;
	}
	
	
}
