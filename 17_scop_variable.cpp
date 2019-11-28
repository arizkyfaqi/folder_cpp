#include <iostream>
using namespace std;

/*
	Belajar Scop Variable
	1. Global
	2. Local
*/

//Variable global
int x = 10;

/*
	fungsi untuk mengabil varible global
*/
int ambil_global(){
	return x;
}


int main(int argc, char const *argv[])
{
	/*
		statmen sebelum deklarasi varible local, 
		akan mengacu pada varibale Global 
	*/
	cout << "mencetak varible global :" << x << endl;
	
	//variable local main
	int x = 5;

	/*
		statmen sesudah deklarasi varible local, 
		akan mengacu pada varibale Local 
	*/
	cout << "mencetak varible loacl main :" << x << endl;

	/*
		statement yang menjalankan fungsi, yang di dalam nya
		mengacu pada varible Global akan mencetak varible Global
	*/

	cout << "mencetak varible global lewat fungsi:";
	cout << ambil_global() << endl; 


	/*
		Blok varible artinya dimana di dalam fungsi main
		terdapat blok kode yang di dalam nya terdapat Varible dengan
		nama yang sama.
	*/
	{
		cout << "mencetak varible loacl main :" << x << endl;
		int x = 8;
		cout << "mencetak varible local blok :" << x << endl;
		cout << "mencetak varible global lewat fungsi di dalam blok :";
		cout << ambil_global();
	}


	cin.get();
	return 0;
}