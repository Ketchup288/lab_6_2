#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
	}

}

void Print(int* a, const int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;  // виводить в стовпчик, оскільки функція рахує індекси, а в стовпі їх легше бачити.
	}
	cout << endl;
}

int IndexSum(int* a, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 != 0) {
			S += i; // Обчислення суми індексів
		}
	}
	return S;
}

int main() {

	srand((unsigned)time(NULL));
	
	const int n = 15;
	 
	int Low, High;
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	int a[n];

	Create(a, n, Low, High); // Заповнюэ масив ранд. числами

	Print(a, n); // Виводить масив 

	cout << "Index sum: " << IndexSum(a, n);


	return 0;
}
