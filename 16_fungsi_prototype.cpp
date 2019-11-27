#include <iostream>

using namespace std;

/*
	Prototype pada fungsi adalah dimana kita
	mendeklarasikan nya di awal, tetapi isi fungsi nya di bawah
*/

//Deklarasi fungsi
double luas_persegi(double p, double l);


int main(int argc, char const *argv[])
{
	double panjang, lebar, hasil;
	cin >> panjang;
	cin >> lebar;

	hasil = luas_persegi(panjang, lebar);
	cout << hasil << endl;

	
	cin.get();
	return 0;
}

//Isi fungsi
double luas_persegi(double p, double l){
	double luas = p * l;
	return luas;
}