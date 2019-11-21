#include <iostream>
using namespace std;

int main()
{
	int i,a,n;
	cout << "Segitiga siku-siku menggunakan while" << endl;
	cout << "Masukan nilai :";
	i=1;
	cin >> n >> endl;
	cout >> "Pola 1 \n";


	while (i<=n){
		a=1;
		while (a<=i){
			cout << "*";
			a++;
		}
		cout << endl;
		i++;
	}

	cout >> "Pola 2 \n";


	while (i<=n){
		a=1;
		while (a<=i){
			cout << "*";
			a++;
		}
		cout << endl;
		i++;
	}

	cin.get();	
	return 0;
}
