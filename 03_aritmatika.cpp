#include <iostream>

using namespace std;


int main()
{
	int a = 6;
	int b = 4;

	int hasil;
	//Operator aritmatika +, -, *, /, %

	//penjumlahan
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil << endl;

	//penjumlahan
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil << endl;

	//perkalian
	hasil = a * b;
	cout << a << " x " << b << " = " << hasil << endl;

	//pembagian
	float c = 6;
	int d = 4;
	float hasilbagi;
	hasilbagi = c / d;
	cout << a << " - " << b << " = " << hasilbagi << endl;

	//modulus
	hasil = a % b;
	cout << a << " % " << b << " = " << hasil << endl;

	//prioritas yang didalam kurung terlebih dahulu
	hasil = (a + b) * a;
	cout << hasil << endl;

	cin.get();
	return 0;
}
