#include <iostream>
using namespace std;

int a = 5;

/*

	Belajar Pointer, 
	Pointer adalah sebuah alamat variable dan nilai nya pada suatu memori

*/

//Pointer

/*
	
	tanda *(pointer) digunakan untuk menampung alamat varible;
	tanda &(nama_varible) di gunakan untuk menampilkan/mengambil alamat varible.

*/

int *aPtr = nullptr;
	 aPtr = &a;

int main(int argc, char const *argv[])
{
	cout << "nilai dari varible a : " << a << endl;
	cout << "alamat dari varible a :" << aPtr << endl;

	cin.get();
	return 0;
}