#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 2;

	bool hasil1, hasil2;

	//komparasi, reation expression

	//sebanding ==
	hasil1 = (a == b);

	//tidak sebanding !=
	hasil2 = (a != b);

	//kurang dari
	hasil2 = (a < b);

	//lebih dari
	hasil2 = (a > b);

	//kurang dari sama dengan
	hasil2 = (a <= b);

	//lebih dari sama dengan
	hasil2 = (a >= b);

	cout << hasil1 << endl;
	cout << hasil2 << endl;
	return 0;
}
