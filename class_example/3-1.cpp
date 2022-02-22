#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define PI 3.14;

int main() {
	int x = 1, y = 2;
	cout << (++x > 2 && ++y > 2);
	cout << "x=" << x << ", y=" << y << endl;
	cout << (++x > 2 || ++y > 2);
	cout << "x=" << x << ", y=" << y << endl;
}