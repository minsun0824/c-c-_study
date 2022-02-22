# include <iostream>
#include <stdio.h>
using namespace std;

void printSize(int array[]) {  //== printSize(int *array)
	cout << sizeof(array) << endl;
}

int main() {
	int array[] = { 1,3,5,6,7,9 };
	cout << sizeof(array) << endl;

	printSize(array); // 포인터로 array가 감
}