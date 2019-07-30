#include <iostream>
using namespace std;

int main()
{
	//looping pada c++

	//while melakukan looping selama syarat masih terpenuhi
	//melakukan increment untuk menghentikan looping di akhir statement
	int a = 1;
	cout << "while" << endl;
	while(a < 10){
		cout << "Hallo Dunia ";
		cout << a << endl;;
		a++;
	}

	/*
		do while, melakukan looping minimal satu kali dan selanjutnya
		selama syarat masih terpenuhi.
		penempatan statment increment di tengah dan penempatan syarat di akhir () 
	*/
	a = 1;
	cout << "\ndo while" << endl;
	do{
		cout << "Hallo World ";
		cout << a << endl;
		a++;
	}while (a < 10);

	/*
		for, melakukan loping selama syarat terpenuhi
		kondisi, syarat, dan increment dalam satu kurung
		(kondisi, syarat, increment)
	*/

	cout << "\nfor" << endl;
	for (a = 1; a <= 10; ++a)
	{
		cout << "Hallo Earth ";
		cout << a << endl; 
	}


	cin.get();
	return 0;
}
