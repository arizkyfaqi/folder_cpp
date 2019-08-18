#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i <=10; i++)
		{
			if (i == 5)
			{
				/*
				break berfungsing untuk mengentikan looping dan keluar dari looping,
				jika syaratnya terpenuhi. 
				*/
				//break;
				/*
				continue berfungsi untuk skip looping sesuai dengan syarat yang ada
				*/
				//continue;
			}
			cout << i << endl;
		}

	cout << "end program" << endl;

	cin.get();
	return 0;
}