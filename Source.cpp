#include <iostream>
#include <cstdlib>
using namespace std;
void printIte(int* A, int sz) {
	for (int i = 0; i < sz; i++)
	{

		cout << A[i] << " ";
	}
	cout << endl;
}
void generateIte(int* A, int sz) {
	for (int i = 0; i < sz; i++)
	{

		A[i] = rand() % 61 - 40;
	}
}
int sumaIte(int* A, int sz) {
	int suma = 0;
	for (int i = 0; i < sz; i++) {
		if (!(A[i] > 0 || (i % 2) != 0)) {
			suma += A[i];
		}
	}
	return suma;
}
int quantityIte(int* A, int sz) {
	int quantity = 0;
	for (int i = 0; i < sz; i++) {
		if (!(A[i] > 0 || (i % 2) != 0)) {
			quantity++;
		}
	}
	return quantity;
}
void zeroIte(int* A, int sz) {
	for (int i = 0; i < sz; i++)
	{
		if (!(A[i] > 0 || (i % 2) != 0))
			A[i] = 0;
	}
}
int main() {


	int A[26] = {};
	generateIte(A, 26);
	printIte(A, 26);
	cout << sumaIte(A, 26) << endl;
	cout << quantityIte(A, 26) << endl;
	zeroIte(A, 26);
	printIte(A, 26);
}
