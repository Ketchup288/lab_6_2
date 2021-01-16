#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
	}

}

void Print(int* a, const int size) {
	for (int i = 0; i < size; i++){
		cout << setw(4) << a[i];
	}
	cout << endl;
}

int main() {

	srand((unsigned)time(NULL));

	int n, Low, High;
	cout << "x = "; cin >> x;
	const int n = x; // sizes
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	int a[n];

	Create(a, n, Low, High); // Заповнюэ масив ранд. числами

	Print(a, n); // Виводить масив 

	return 0;
}
