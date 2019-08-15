#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Masukan panjang pola: ";
	cin >> n ;

	cout << "Pola 1 \n";
	for (int i = 1; i <= n; ++i){
		cout << i;
		for (int j = 1; j <= i; ++j){
			cout << j;
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
