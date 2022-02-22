#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int* ptr = new int[10];

	ptr[0] = 0;

	*(ptr + 1) = 1;

	cout << ptr[0] << *ptr << ptr[1] << *(ptr + 1);
}