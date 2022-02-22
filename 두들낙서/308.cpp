# include <iostream>
#include <stdio.h>
using namespace std;

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}

	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
	}

	double GetReal() {
		return real;
	}

	void SetReal(double real_) {
		real = real_;
	}

	double Getimag() {
		return imag;
	}

	void Setimag(double imag_) {
		imag = imag_;
	}
private:
	double real;
	double imag;
};

int main() {
	Complex c1; //complex() 호출
	Complex c2 = Complex(4, 5);
	Complex c3(2, 3);

	cout << c1.GetReal() << ' ' << c1.Getimag();
}