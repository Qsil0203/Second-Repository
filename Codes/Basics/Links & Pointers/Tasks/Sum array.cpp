#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	int arr[5] = { 5 , 10 , 15 , 20 , 25 };
	int* ptrarr = arr;

	int summ = 0;
	for (int i = 0; i < 5; i++) {
		summ += ptrarr[i];
	}

	cout << summ;
}
