#include <iostream>
using namespace std;

int main() {
	double arr[3]; //3칸짜리 arr
	double* ptr; // ptr이라는 포인터

	cout << "displaying address using arrays: ";

	for (int i = 0; i < 3; i++) {
		cout << "arr[ " << i << " ]: " << &arr[i] << endl;
	}

	ptr = arr;// ptr = &arr[0]
	for (int i = 0; i < 3;i++) {
		cout << ptr + i << endl; // ptr + i = &arr[0] + i
	}
}
