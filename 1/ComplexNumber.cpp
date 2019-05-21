// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Start";
	ComplexNumber A(1, 1), B, C(1);
	cout << A << B << C;
	C = A + B;
	cout << C;
	C = A + 10.5;
	cout << C;
	C = 10.5 + A;
	cout << C;
	C = A + B + C;
	cout << C;
	C = A = B = C;
	cout << A << B << C;
	cin >> A >> B >> C;
	cout << A << B << C;
	system("pause");
}

class ComplexNumber
{
private:
	double Re, Im;
public:
	ComplexNumber(double InitRe = 0, double InitIm = 0)
	{
		Re = InitRe;
		Im = InitIm;
	};
	~ComplexNumber()
	{
		cout << "in destructor";
	}


	friend istream& operator>> (istream & o, ComplexNumber & c)
	{
		double a, b;
		o >> a >> b;
		c.SetRe(a);
		c.SetIm(b);
		return o;
	}
			
	friend ostream& operator<< (ostream & o, ComplexNumber & c)
	{
		c.GetIm();
		return o;
	}

	friend ComplexNumber& operator+ (ComplexNumber& c1, ComplexNumber& c2)
	{
		ComplexNumber c;
		c.SetRe(c1.GetRe() + c2.GetRe());
		c.SetIm(c1.GetIm() + c2.GetIm());
		return c;
	}
	
	friend ComplexNumber operator+ (ComplexNumber c, double b)
	{
		ComplexNumber c1;
		c1.SetRe(c.GetRe() + b);
		c1.SetIm(c.GetIm());
		return c1;
	}

	friend ComplexNumber operator+ (double a, ComplexNumber c)
	{
		ComplexNumber c1;
		c1.SetRe(a + c.GetRe());
		c1.SetIm(c.GetIm());
		return c1;
	}

	friend ComplexNumber& operator- (ComplexNumber & c1, ComplexNumber & c2)
	{
		ComplexNumber c;
		c.SetRe(c1.GetRe() - c2.GetRe());
		c.SetIm(c1.GetIm() - c2.GetIm());
		return c;
	}

	friend ComplexNumber operator- (ComplexNumber c, double b)
	{
		ComplexNumber c1;
		c1.SetRe(c.GetRe() - b);
		c1.SetIm(c.GetIm());
		return c1;
	}

	friend ComplexNumber operator- (double a, ComplexNumber c )
	{
		ComplexNumber c1;
		c1.SetRe(a - c.GetRe());
		c1.SetIm((-1) * c.GetIm());
		return c1;
	}

	friend ComplexNumber& operator* (ComplexNumber& c1, ComplexNumber& c2)
	{
		ComplexNumber c;
		c.SetRe((c1.GetRe() * c2.GetRe()) - (c1.GetIm() * c2.GetIm()));
		c.SetIm((c1.GetRe() * c2.GetIm()) + (c1.GetIm() * c2.GetRe()));
		return c;
	}

	friend ComplexNumber operator* (ComplexNumber c, double b)
	{
		ComplexNumber c1;
		c1.SetRe(c.GetRe() * b);
		c1.SetIm(c.GetRe() * b);
		return c1;
	}

	friend ComplexNumber operator* ( double a, ComplexNumber c )
	{
		ComplexNumber c1;
		c1.SetRe(a * c.GetRe());
		c1.SetIm(a * c.GetRe());
		return c1;
	}
			
	double GetRe()
	{
		return Re;
	};

	double GetIm()
	{
		return Im;
	};
			
	int SetRe(double newVal)
	{
		Re = newVal;
		return 1;
	};

	int SetIm(double newVal)
	{
		Im = newVal;
		return 1;
	};



			// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
			// Debug program: F5 or Debug > Start Debugging menu

			// Tips for Getting Started: 
			//   1. Use the Solution Explorer window to add/manage files
			//   2. Use the Team Explorer window to connect to source control
			//   3. Use the Output window to see build output and other messages
			//   4. Use the Error List window to view errors
			//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
			//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

};
	


