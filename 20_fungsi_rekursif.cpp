#include <iostream>
using namespace std;

//fungsi rekursif terbatas
int pangkatIterasi(int a, int b){
	int hasil = a;
	for (int i = 1; i < b; ++i)
	{
		hasil = hasil * a;
	}
	return hasil;
}

//fungi rekursif
int pangkatRekursif(int a, int b){
	if (b <= 1)
	{
		cout << "akhir dari rekursif\n";
		return a;
	} else {
		cout << "rekursif\n";
		return a * pangkatRekursif(a,(b - 1));
	}
}

int main(int argc, char const *argv[])
{
	int a, b;
	cout << "angka: ";
	cin >> a;
	cout << "pangkat: ";
	cin >> b;
	cout << "hasil iterasi = " << pangkatIterasi(a,b) << endl;
	cout << "hasil iterasi = " << pangkatRekursif(a,b) << endl;



	cin.get();
	return 0;
}
