#include <iostream>

 using namespace std;

int main()
{
	float hasil, a, b;
	char opr;

	cout << "masukan nilai a : ";
	cin >> a;
	cout << "Masukan operator : ";
	cin >> opr;
	cout << "Masukan nilai b : ";
	cin >> b;

	if (opr == '+') {
		hasil = a + b;
		cout << "hasil : " << hasil << endl;
	} else if (opr == '-') {
		hasil = a - b;
		cout << "hasil : " << hasil << endl;
	} else if (opr == '*') {
		hasil = a * b;
		cout << "hasil : " << hasil << endl;
	} else if (opr == '/') {
		hasil = a / b;
		cout << "hasil : " << hasil << endl;
	}



	return 0;
}