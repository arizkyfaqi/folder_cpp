#include <iostream>
using namespace std;

/*
	Overloading function adalah menimpa fungsi yang telah dibuat
*/


//basic function
int luas_kotak(int panjang, int lebar){
	int luas = panjang * lebar;
	return luas;
}

//overloading function
int luas_kotak(int panjang){
	int luas = panjang * panjang;
	return luas;
}

int main(int argc, char const *argv[])
{
	
	cout << "luas kotak 3x5 : "<< luas_kotak(3,5) << endl;
	//akan menjalankan overloading function
	cout << "luas kotak 3x3 : "<< luas_kotak(3) << endl;

	cin.get();
	return 0;
}
