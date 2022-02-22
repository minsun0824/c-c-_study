#include <iostream>
using namespace std;

//포인터를 이용해서 arr에 집어넣는 방법
int main() {
	double arr[5];

	for (int i = 0; i < 5; i++) {
		cin >> *(arr + i); // &arr[0] +1
	}

	for (int i = 0; i < 5; i++) {
		cout << *(arr + i);
	}

}