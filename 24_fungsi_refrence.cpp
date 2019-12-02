#include <iostream>
using namespace std;

void fungsi(int &b){
	b = 10;
	cout << "address b : " << &b << endl;
	cout << "nilai b : " << b << endl;
}

int main(int argc, char const *argv[])
{
	int a = 5;
	cout << "address a: " << &a << endl;
	cout << "nilai a : " << a << endl;
		
	cout << endl;
	fungsi(a);

	//nilai a akan mengikuti b
	cout << "nilai a : " << a << endl;


	cin.get();
	return 0;
}
