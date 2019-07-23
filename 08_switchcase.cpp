#include <iostream>

using namespace std;

int main()
{
	//switch case : adalah percabangan sama halnya deenagn if statment 
	int a;

	cout << "masukan nilai = ";
	//inputkan nilai a
	cin >> a;

	switch(a){
		case 1:
			cout << "a = 1" << endl;
		break;
		case 2:
			cout << "a = 2" << endl;
		break;
		case 3:
			cout << "a = 3" << endl;
		break;
		case 4:
			cout << "a = 4" << endl;
		break;
		case 5:
			cout << "a = 5" << endl;
		break;
		default :
			cout << "ini adalah default" << endl;
	}

	cout << "akhir dari program" << endl;

	return 0;
}
