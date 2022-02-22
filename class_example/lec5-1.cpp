#include <iostream>
using namespace std;

void swap1(int a,int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 1; int b = 2;
	cout << a << b << endl;
	swap1(a, b);
	cout << a << b << endl;
	swap2(&a, &b);
	cout << a << b << endl;
}