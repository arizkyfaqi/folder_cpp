#include <iostream>
using namespace std;

//reporter
int kuadrat(int x){
	int y = x * x;
	return y;
}
//fungsi bagi
// int bagi(int a, int b){
// 	int d = a / b;
// 	return d;
// }


/*
	Void adalah tipe data,
	Void artinya adalah kosong,
*/
//fungsi Void
void tampilkan(int input){
	cout << "hasil kuadrat :"<< input << endl;
}


int main(int argc, char const *argv[])
{
	int hasil, input, a, b, hasil2;
	cout << "nilai kuadrat dari :";
	cin >> input;
	hasil = kuadrat(input);
	tampilkan(hasil);

	//fungsi bagi
	// cout << "Fungsi Pembagian \n";
	// cout << "Masukan nilai :";
	// cin >> a;
	// cout << "Masukan nilai bagi :";
	// cin >> b;

	// hasil2 = bagi(a,b);
	// cout << hasil2 << endl;

	cin.get();
	return 0;
}