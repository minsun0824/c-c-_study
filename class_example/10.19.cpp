#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


class Complex {
private:
	int* m_r = nullptr;
	int* m_i = nullptr;
public:
	Complex();
	Complex(int, int);
	Complex(int);
	~Complex();
	Complex(const Complex& rhs);
	void print() const; 
	//+
	Complex operator+(const Complex& c2);
	Complex operator+(int r);
	Complex operator+(double r);
	friend Complex operator+(double r, const Complex& c);

	//==
	bool operator ==(const Complex& );

	//+=
	void operator +=(const Complex& );
};

bool Complex::operator==(const Complex & rhs) {
	if ((*m_r == *rhs.m_r) && (*m_i == *rhs.m_i)) {
		return true;
	}
	else
		return false;
}

void Complex::operator+=(const Complex& rhs) {
	*m_r += *rhs.m_r;
	*m_i += *rhs.m_i;
}

Complex operator+(double r, const Complex& c) {
	Complex result;
	*result.m_r = static_cast<int>(r) + *c.m_r;
	*result.m_i = *c.m_i;
	return result;
}


Complex Complex::operator+(int r) {
	Complex result;
	*result.m_r = *m_r + r;
	*result.m_i = *m_i;
	return result;
}

Complex Complex::operator+(double r) {
	return Complex((static_cast<int>(r)) + *m_r, *m_i);
}

Complex Complex::operator+(const Complex& c2) {
	Complex result;
	*result.m_r = *m_r + *c2.m_r;
	*result.m_i = *m_i + *c2.m_i;
	return result;
}

Complex::Complex(int r, int i) : m_r{new int{r}}, m_i{new int{i}}{}
Complex::Complex(int r) : Complex(r, 0){}
Complex::Complex():Complex(0,0){}
Complex::Complex(const Complex &rhs):Complex(*rhs.m_r,*rhs.m_i){}
Complex::~Complex() {
	if (!m_r) delete m_r;
	if (!m_i) delete m_i;
	m_r = m_i = nullptr;
}

void Complex::print()const {
	cout << *m_r << "\t" << *m_i << endl;
}

int main() {
	Complex c1;
	Complex c2(2, 3);
	Complex c3(4);
	Complex c4;

	c4 =  5.6+c2;
	c4.print();
	
}