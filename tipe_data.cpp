#include <iostream>
	using namespace std;

int main()
{
	/*
		integer tipe data yang memiliki memory 4 byte
		1 byte = 8 bit
		4 byte = 32 bit	
	
	*/
	int a = 100;

	cout << a << endl;
	cout << sizeof(a) << " byte" << endl;
	cout << "nilai maksimal Integer : " << numeric_limits<int>::max() << endl;
	cout << "nilai minimal Integer : " << numeric_limits<int>::min() << endl;
	cin.get();
	return 0;
}