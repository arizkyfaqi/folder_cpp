#include <iostream>
using namespace std;

/*

	Fungsi dengan pointer

*/


void fungsiptr(int *b){
	cout << "Address b : " << b << endl;
	cout << "Nilai b : " << *b << endl;
}

void kuadrat(int *valPtr){
	*valPtr = (*valPtr) * (*valPtr);
}

int main(int argc, char const *argv[])
{

	int a = 5;

	cout << "Address a : " << &a << endl;
	cout << "Nilai a : " << a << endl;

	// fungsiptr(&a);
	kuadrat(&a);

	cout << "Nilai dari kuadrat a : " << a << endl;

	cin.get();
	return 0;
}
