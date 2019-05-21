#include "pch.h"
#include <iostream>
#include "ComplexNumber.h"

using namespace std;
int main()
{
	cout << "Start";
	ComplexNumber A(1, 3), B(2, 5), C(1);
	cout << A;
	cout << B;

	C = A + B;
	cout << C;

	C = A + 10.5;
	cout << C;

	C = 10.5 + A;
	cout << C;

	C = A + B + C;
	cout << C;

	C = A = B = C;
	cout << C;

	cout << "Enter numbers";
	cin >> A >> B >> C;

	ComplexNumber Res;
	Res = (A + C) ;
	Res = Res * B;
	cout << Res;

	system("pause");
	return 0;
}