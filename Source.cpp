#include <iostream>
#include <conio.h>
#define Spasi " "

using namespace std;

int main()
{
	//fn = fn1 + fn2
	long int n, fn, fn1, fn2, i;

	cout << "-----------------------" << endl;
	cout << "Program Deret Fibonacci" << endl;
	cout << "-----------------------" << endl;
	cout << "Masukkan Nilai Ke-n : "; cin >> n; cout << endl;

	fn1 = 1;
	fn2 = 0;

	if (n > 45)
	{
		cout << "Maksimal Lompatan Nilai n Yang Diperbolehkan = 1 sampai 45" << endl << endl;
		n = 45;
	}

	cout << fn2 << Spasi;
	cout << fn1 << Spasi;

	for (i = 0; i < n; i++)
	{
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;

		cout << fn << Spasi;
	}

	cout << endl;

	_getch();
	return 0;
}