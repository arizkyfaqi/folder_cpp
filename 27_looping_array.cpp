#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
	/*
		Looping untuk array bisa di lakukan di c++ versi 11 keatas

		//deklarasi
		for (declarasi variabel : array){
			statemen
		}

	*/

	array <int, 10> arrayNilai = {0,1,2,3,4,5,6,7,8,9};

	for (int nilai : arrayNilai){
		cout << "nilai array : " << nilai << endl;
	}

	cout << endl;

	for (int &nilai : arrayNilai){
		cout <<"address array : "<< &nilai << " nilai array : " << nilai << endl;
	}


	cin.get();
	return 0;
}