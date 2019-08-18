#include <iostream>
using namespace std;

int main()
{
	//increment dan decement
	//preincrement dan postincrement

	int a = 5;
	int b = 5;

	//increment
	cout << "increment (menambahkan satu pada int)" << endl;
	cout << a << endl;
	a++;
	cout << a << endl;

	//decrement
	cout << "decrement (mengurangi satu pada int)" << endl;
	cout << b << endl;
	b--;
	cout << b << endl;

	//preincrement
	cout << "preincrement : ++a" << endl;
	cout << a << endl;
	++a;
	cout << a << endl;

	//postincrement
	cout << "postincrement : b++" << endl;
	cout << b << endl;
	b++;
	cout << b << endl;


	return 0;
}
