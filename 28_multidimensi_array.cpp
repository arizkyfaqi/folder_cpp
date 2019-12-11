#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//array multidimensi
	// array [baris][kolom]
	int array[3][3] = {1,2,3,4,5,6,7,8,9};

	cout << array[0][0] << " " << array[0][1] << " " << array[0][2] << endl;
	cout << array[1][0] << " " << array[1][1] << " " << array[1][2] << endl;
	cout << array[2][0] << " " << array[2][1] << " " << array[2][2] << endl;

	cin.get();
	return 0;
}