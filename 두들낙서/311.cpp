# include <iostream>
#include <stdio.h>
using namespace std;

class Complex {
private:
	double imag, real;
public:
	Complex(double imag_ = 0, double real_ = 0) {
		imag = imag_;
		real = real_;
	}
	double GetReal() {
		return real;
	}
	double GetImag() {
		return imag;
	}
	void SetReal(double real_) {
		real = real_;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}
};

int main() {
	Complex c1;
	Complex c2 = Complex(2.2, 3.3);
	cout << c1.GetImag() << " " << c1.GetReal()<<endl;
	cout << c2.GetImag() << " " << c2.GetReal()<<endl;
}