#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Complex {
	int* m_r = nullptr;
	int* m_i = nullptr;
public:
	Complex();
	Complex(int, int);
	Complex(int);
	~Complex();
	Complex(const Complex& rhs);
	void print() const;

	//operation overloading +
	Complex operator+(const Complex& c2);
	// overloading2
	Complex operator +(int r);
	Complex operator+ (double r);  //compex+double

	//double+comeplex
	friend Complex operator+ (double r, const Complex& c);
	
	//==,+=
	bool operator == (const Complex&);
	void operator +=(const Complex&);

	//prefix postfix
	Complex operator++();
	Complex operator++ (int dummy);

	//operator overloading<<
	friend ostream& operator<<(ostream& o, Complex c);

	//operator overloading=
	Complex& operator=(const Complex& c);
};

Complex& operator=(const Complex& c) {
	if (this == &c)
		return *this;
	delete m_r;
	delete m_i;
	m_r = new int(*c.m_r);
	m_i = new int(*c.m_i);
	return *this;
}

ostream& operator << (ostream& o, Complex c) {
	o << *c.m_r << (*c.m_i < 0 ? "" : "+") << *c.m_i << "j";
	return o;
}

/*Complex& Complex::operator++() {
	*(m_r)++;
	return *this;
}*/

Complex Complex::operator++(int dummy) {
	Complex ret(*this);
	(*m_r)++;
	return ret;
}

bool Complex::operator==(const Complex& rhs) {
	if ((*m_r == *(rhs.m_r)) && (*m_i == *(rhs.m_i))) {
		return true;
	}

	else {
		return false;
	}
}

void Complex::operator+=(const Complex& rhs) {
	*m_r += *rhs.m_r;
	*m_i += *rhs.m_i;
}



Complex operator + (double r, const Complex & c) {
	Complex result((static_cast<int>(r)) + *(c.m_r), *(c.m_i));
	return result;
}

Complex Complex::operator+(int r){
	Complex result;
	*(result.m_r) = *(m_r)+r;
	*(result.m_i) = *(m_i);
	return result;
	}

Complex Complex::operator+(double r) {
	return Complex((static_cast<int>(r)) + *(m_r), *m_i);
}
Complex Complex::operator+(const Complex& c2) {
	Complex result;
	*(result.m_i) = *(m_i)+*(c2.m_i);
	*(result.m_r) = *(m_r)+*(c2.m_r);
	return result;
}

void Complex::print() const {
	cout << *m_r << (*m_i < 0 ? "" : "+") << *m_i << "j" << endl;
}

Complex::Complex(int r, int i) {
	m_r = new int(r);
	m_i = new int(i);
}

Complex::~Complex() {
	if (!m_r) delete m_r;
	if (!m_i) delete m_i;
	m_r = m_i = nullptr;
}

Complex::Complex(): Complex(0,0){}
Complex::Complex(int r):m_r{new int(r)}, m_i{new int(0)}{}

Complex::Complex(const Complex& rhs) : Complex(*(rhs.m_r), *(rhs.m_i)) {}

int main() {
	Complex c1(1, 1111);
	Complex c2(2, 2222);
	Complex c3;
	c3 = c1 + c2;
	
	cout << Complex(23, 7) << endl;
	cout << c3 << endl;

	/*
	//+
	Complex c4(c1); //c4를 c1으로 초기화
	c4 = c4 + 5;  //int
	c4.print();
	//
	Complex c5(c2);
	c5 = c5 + 5.5;		//douele
	c5.print();

	//
	Complex c6(c2);
	c6 = 3.3 + c6;
	c6.print();

	//==
	Complex c7(c1);
	if (c2 == c7) {
		cout << "same" << endl;
	}
	else {
		cout << "different" << endl;
	}

	//+=
	Complex c8(c1);
	c8 += c2;
	c8.print();

	//
	Complex c9(c1);
	Complex c10;
	//c10=++c9;
	//c10.print();

	//
	Complex c11(c1);
	Complex c12;
	c12 = c11++;
	c12.print();
	*/
}