#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	int* ptr = new int (123);
	cout << ptr << ' ' << * ptr << endl;
	delete ptr;
}

