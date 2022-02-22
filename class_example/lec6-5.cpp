#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int foo() {
	return 5;
}

double goo() {
	return 6;
}

int hoo(int n) {
	return n;
}

int main() {
	int (*f_ptr)() { &foo };
	double (*g_ptr)();
	int(*h_ptr)(int);
	g_ptr = &goo;
	h_ptr = &hoo;
	cout << f_ptr() << endl;
	cout << g_ptr() << endl;
	cout << h_ptr(8) << endl;
	return 0;
}