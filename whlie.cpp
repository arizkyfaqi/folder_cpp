#include <iostream>
using namespace std;

int main()
{
	int i,a,b,n;
	i=1;
	cout << "Segitiga siku-siku menggunakan while" << endl;
	cout << "Masukan nilai :";
	cin >> n;
	while(i<=n){
		// cout << i;
		a=i;
		while(a<=n){
			// cout << a;
			cout << "*";
			a++;
		}
		cout << endl;
		i++;
	}
	cin.get();	
	return 0;
}
