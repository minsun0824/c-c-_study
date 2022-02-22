#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Vector {
	int* m_data;
	int m_size;
public:
	Vector() :m_data(new int[100]{ 0, }), m_size(100) {};
	~Vector() { delete[] m_data; }
	int& operator[](int);
};

int& Vector::operator[](int index) {
	if (index >= m_size) {
		cout << "error";
		exit(0);
	}
	return m_data[index];
}

int main() {
	Vector v;
	cout << v[1] << endl;
	v[99] = 20;
	cout << v[99] << endl;
	v[100];
	
}