#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i) {
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1) {
		Create(a, size, Low, High, i + 1);
	}
}


void Print(int* a, const int size, int i) {
	cout << "a[" << setw(2) << i << " ] =" << setw(4) << a[i] << endl; // виведення у форматі стовбця, оскільки так легше переглядати індекси
	if (i < size - 1) {
		Print(a, size, i + 1);
	}
	else {
		cout << endl;
	}
}


int IndexSum(int* a, const int size, int i, int S) {
	if (a[i] % 2 != 0) {
		S += i;
	}
	if (i < size - 1) {
		return IndexSum(a, size, i + 1, S);
	}
	else {
		return S;
	}
}


int main() {

	srand((unsigned)time(NULL));

	const int n = 15;
	int a[n];
	int Low, High;

	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	Create(a, n, Low, High, 0);

	Print(a, n, 0);

	cout << "\nIndex sum: " << IndexSum(a, n, 0, 0) << endl;

	return 0;
}