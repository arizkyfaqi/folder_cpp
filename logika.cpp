#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 2;

	bool hasil;

	//operator logika : not, and, or

	//not
	hasil = !(a == 3);

	//and : kedua nilai benar untuk menghasilkan true
	
	cout << "untuk and \n";
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 3) and (b == 6); // true and false
	cout << hasil << endl;
	hasil = (a == 1) && (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 7) && (b == 8); // false and false
	cout << hasil << endl;

	//or : salah satu nilai true maka hasil true
	
	cout << "untuk or \n";
	hasil = (a == 3) or (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 3) or (b == 6); // true and false
	cout << hasil << endl;
	hasil = (a == 1) || (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 7) || (b == 8); // false and false
	cout << hasil << endl;

	return 0;
}
