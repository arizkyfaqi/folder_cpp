#include <iostream>
#include <limits>
	using namespace std;

int main()
{
	cout << "Belajar Tipe Data\n" << endl;
	/*
		integer tipe data yang memiliki memory 4 byte
		1 byte = 8 bit
		4 byte = 32 bit	
	
	*/
	int a = 100;
	cout << "01. Tipe Data Integer (int)\nInteger adalah sebuah bilangan bulat" << endl;
	cout << "int : " << a << endl;
	cout << sizeof(a) << " byte (adalah memory yang terpakai pada tipe data integer)" << endl;
	cout << "nilai maksimal Integer : " << numeric_limits<int>::max() << endl;
	cout << "nilai minimal Integer : " << numeric_limits<int>::min() << endl;
	cin.get();
	return 0;
}