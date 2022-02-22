# include <iostream>
#include <stdio.h>
using namespace std;

void changeArray(int* ptr) {
	*ptr = 5;
	ptr[1] = 10;

}

int main() {
	int array[]{ 1,2,3,4,5,5,6,8 };
	cout << array[0] << endl;
	cout << array[1] << endl;

	changeArray(array);
	cout << array[0] << endl;
	cout << array[1] << endl;
}