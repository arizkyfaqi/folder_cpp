#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Latihan Segitiga sama sisi!\n";
	cout << "Masukan nilai :";
	cin >> n;

	for (int i=1; i<=n; ++i)
	{
		for (int a=n; a>i ; --a)
		{
			cout << " ";
		}
		for (int c=1; c<=(i*2-1); ++c)
		{
			cout << "*";
		}

		cout << endl;
	}

	for (int g = 2; g <=n ; ++g)
	{
		for (int h = 1; h<g ; ++h)
		{
			cout << " ";
		}
		for (int x = n; x >=(g*2-n) ; --x)
		{
			cout << "*";
		}

		cout << endl;
	}

	cout << endl;

for (int i = 1; i <=n ; ++i)
{
	for (int c =1; c>=(i*2-n); --c)
	{
		cout << i;
		cout << i*2-n;
		cout << "*";
		cout << c << endl;
	}	
}



	cin.get();
	return 0;
}