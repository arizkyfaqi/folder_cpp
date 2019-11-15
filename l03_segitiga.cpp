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

	cout << "\n";

	cout << "Pola 2 \n";
	for (int i = 1; i <= n; ++i){
		// cout << i;
		for (int j = n; j >= i; --j){
			// cout << j;
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";

	cout << "Pola 3 \n";
	for (int i = 1; i <= n; ++i){
		cout << i;
		for (int j = 1; j < i; ++j){
			cout << j;
			cout << " ";
		}
		for (int k = n; k >= i; k--){
			cout << k;
			cout << "*";
			
		}
		
		cout << endl;
	}


	cin.get();
	return 0;
}
