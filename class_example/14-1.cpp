#include <iostream>
using namespace std;
template<typename T>

void Swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a = 10, b = 5;
	Swap<int>(a, b);
	cout << "a = " << a << " b = " << b;
	double c = 1.0, d = 2.0;
	Swap<double>(c, d);
	cout << "\nc = "<< c << " d = "<< d;
}