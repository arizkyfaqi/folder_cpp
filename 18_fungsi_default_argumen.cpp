#include <iostream>
using namespace std;

/*
	Default argumen adalah nilai default pada parameter sebuah fungsi
*/
double volume_kubus(double p, double l, double t = 2){
	return p * l * t;
}

int main(int argc, char const *argv[])
{
	cout << "volume kubus 1 : " << volume_kubus(3,5,7) << endl;
	cout << "volume kubus 2 : " << volume_kubus(3,5) << endl;

	cin.get();
	return 0;
}
