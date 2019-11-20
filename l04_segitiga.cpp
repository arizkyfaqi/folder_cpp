#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Masukan nilai : ";
	cin >> n;
	cout << "\n";

	for (int i = 1; i<=n; ++i){
		// cout << i;
		for (int a = n; a > i; --a){
			// cout << a;
			cout << " ";
		}

		for (int b = 1; b <= (2*i - 1); b++){
			// cout << b;
			cout << "*";
		}

		cout << endl;
	}

	cout << "\nWhile\n";
	//deklarasi
	int o,p,l;
	//inisialisasi
	o=1;

	while(o<=n){
		
		while(p<=n){
			cout << "*";
			p++;
		}
		cout << endl;
		o++;
	}

	cin.get();
	return 0;
}
										