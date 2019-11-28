#include <iostream>
#include <cstdlib> //mengandung fungsi random

using namespace std;

//Latihan Dadu Acak

int main(){

	char lanjut;
	while (true)
	{
		cout << "Acak dadu?(y/n)";
		cin >> lanjut;
		cout << "\n";

		if (lanjut == 'y')
		{
			cout << 1 + rand() % 6 << endl;
		}
		else if (lanjut == 'n')
		{
			break;
		}
		else
		{
			cout << "Anda harus masukan karakter y/n!";
			break;
		}

	}

	cin.get();
	return 0;
}