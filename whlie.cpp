#include <iostream>
using namespace std;

int main()
{
	int i,a,n,c,x;
	cout << "Segitiga siku-siku menggunakan while" << endl;
	cout << "Masukan nilai :";
	i=1;
	cin >> n; 
	// cout << "Pola 1 \n";


	// while (i<=n){
	// 	a=1;
	// 	while (a<=i){
	// 		cout << "*";
	// 		a++;
	// 	}
	// 	cout << endl;
	// 	i++;
	// }

	// cout << "Pola 2 \n";

	// while (i<=n){
	// 	a=1;
	// 	while (a<i){
	// 		cout << " ";
	// 		a++;
	// 	}
	// 	int c=n;
	// 	while (c>=i){
	// 		cout << "*";
	// 		c--;
	// 	}
	// 	cout << endl;
	// 	i++;
	// }

	cout << "Pola 3\n";

	while (i<=n){
		a=n;
		while (a>i){
			cout << " ";
			a--;
		}
		c=1;
		while (c<=(i*2-1)){
			cout << "*";
			c++;
		}

		cout << endl;
		i++;
	}

	cout << "ploa 4\n";

	while (i<=n){

		x=1;
		while (x<i){
			cout << " ";
			x++;
		}
		c=n;
		while (c>=i){
			cout << "*";
			c--;
		}


		cout << endl;
		i++;
	}



	cin.get();	
	return 0;
}
