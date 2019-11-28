#include <iostream>
using namespace std;

//fungsi menghitung luas persegi panjang
double menghitung_luas(double l, double p){
	double luas = l * p;
	return luas;
}

//fungsi menghitung keliling persegi panjang
double menghitung_keliling(double l, double p){
	double keliling = 2 * (l + p);

	return keliling;
}

void tampilkan_luas(double p, double l){
	cout << "Luas Persegi Panjang : ";
	cout << menghitung_luas(p,l) << endl;
}

void tampilkan_keliling(double p, double l){
	cout << "Keliling Persegi Panjang : ";
	cout << menghitung_keliling(p,l) << endl;
}


int main(int argc, char const *argv[])
{
	double lebar,panjang;
	cout << "Masukan Panjang :";
	cin >> panjang;
	cout << "Masukan Lebar :";
	cin >> lebar;

	tampilkan_luas(panjang,lebar);
	tampilkan_keliling(panjang,lebar);





	cin.get();
	return 0;
}
