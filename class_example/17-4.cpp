#include <iostream>
#include <algorithm>
using namespace std;

void Abs(int& n) { //call by reference. &꼭해줘야 결과 반영함
	if (n < 0) n *= -1;
}
void Print(int& n) {
	cout << n << " ";
}
int main() {
	int arr[] = { 3, -4, 5, -6, 10 };
	for_each(arr, arr + 5, Abs);  //arr+5-> 마지막 바로 다음 주소
	for (auto i : arr) {
		cout << i << " ";
	}
	for_each(arr, arr + 5, Print);
}
