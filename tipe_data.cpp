#include <iostream>
#include <limits>
	using namespace std;

int main()
{
	cout << "Belajar Tipe Data\n" << endl;
	/*
		1 byte = 8 bit
		Tipe Data

		bilangan bulat
		short = 2 byte / 16 bit
		integer = 4 byte / 32 bit
		long = 8 byte / 64 bit
		
		bilangan decimal
		float = 4 byte / 32 bit
		double = 8 byte / 64 bit

		karakter
		char = 1 byte

		boolean
		bool = 1 byte


	
	*/
	char a = 'a';
	cout << "Tipe Data" << endl;
	cout << "char : " << a << endl;
	cout << sizeof(a) << " byte (adalah memory yang terpakai pada tipe data)" << endl;
	cout << "nilai maksimal  : " << numeric_limits<char>::max() << endl;
	cout << "nilai minimal  : " << numeric_limits<char>::min() << endl;

	cin.get();
	return 0;
}