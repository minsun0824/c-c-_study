#include <iostream>
#include <stdio.h>
#include <string.h>
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
	void print()const;
	//operator+ complex+complex
	Complex operator+ (const Complex& c2);

	//operator+ complex+int
	Complex operator+(int r);

	//operator+ complex+double
	Complex operator+ (double r);

	//double+Complex
	friend Complex operator+(double r, const Complex& c);

	//==
	bool operator==(const Complex&);

	//+=
	void operator+=(const Complex&);

	
	Complex operator++(int dummy);
};

/*Complex& Complex::operator++() {
	(*m_r)++;
	return *this;
}*/

Complex Compelx : operator++(int dummy) {
	Complex ret(*this);
	(*m_r)++;
	return ret;
}

//---------operator+----------
Complex Complex::operator+(const Complex& c2) {
	Complex result;
	*(result.m_i) = *(m_i)+*(c2.m_i);
	*(result.m_r) = *(m_r)+*(c2.m_r);
	return result;
}

Complex Complex::operator+(int r) {
	Complex result;
	*(result.m_r) = *(this->m_r) + r;
	*(result.m_i) = *(this->m_i);
	return result;
}

Complex Complex::operator+(double r) {
	return Complex((static_cast<int>(r)) + *(m_r), *(m_i));
}

Complex operator+(double r,const Complex& c){
	Complex result((static_cast<int>(r)) + *(c.m_r),*(c.m_i));
	return result;
}
//------  ==  ------
bool Complex::operator==(const Complex& rhs) {
	if ((*(m_r) == *rhs.m_r) && (*m_i == *rhs.m_i)) {
		return true;
	}
	else {
		return false;
	}
}
// -------   +=  ------
void Complex::operator+=(const Complex& rhs) {
	*m_r += *rhs.m_r;
	*m_i += *rhs.m_i;
}


Complex::Complex(int r, int i ) {
	m_r = new int(r);
	m_i = new int(i);
	
}

Complex::~Complex() {
	if (!m_r) delete m_r;
	if (!m_i)  delete m_i ;
	m_r = m_i = nullptr;
}

Complex::Complex() :Complex(0, 0) {};
Complex::Complex(int r) : m_r{ new int(r) }, m_i{ new int(0) }{};
Complex::Complex(const Complex& rhs) :Complex(*rhs.m_r, *rhs.m_i) {};

void Complex::print()const {
	cout << *m_r << "\t" << *m_i << endl;
}

int main() {
	Complex c1(1,1);
	Complex c2(2,2);

	//+
	Complex c3;
	c3 = c1 + c2;
	c3.print();
	

	Complex c4;
	c4 = c1 + 3;
	c4.print();

	Complex c5;
	c5 = c1 + 5.6;
	c5.print();

	Complex c6;
	c6 = 5.6 + c1;
	c6.print();

	Complex c7(c1);
	c7 += c2;
	c7.print();

	return 0;
}