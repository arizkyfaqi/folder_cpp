#include <iostream>
using namespace std;

/*
	Refrence = refrensi atau saling berhubungan satu dengan yang lain

*/

int main(int argc, char const *argv[])
{
	int a = 5;

	cout << "alamat dari nilai a  : " << &a << endl;
	cout << "        nilai dari a : " << a << endl;

	cout << endl;
	//Refrence
	int &b = a;

	cout << "alamat dari nilai b  : " << &b << endl;
	cout << "        nilai dari b : " << b << endl;

	cout << endl;
	b = 10;

	cout << "nilai dari a : " << a << endl;
	cout << "nilai dari b : " << b << endl;

	cin.get();
	return 0;
}
