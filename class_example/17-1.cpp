#include <iostream>
using namespace std;

int Add(int i, int j) {
	return i + j;
}
int Sub(int i, int j) {
	return i - j;
}


int main() {
	int iMenu{ 0 };
	int iNum1{ 1 }, iNum2{ 2 };
	int (*func_ptr) (int, int);
	cin >> iMenu;
	func_ptr = (iMenu == 1) ? Add : Sub;
	cout << "Result : " << func_ptr(iNum1, iNum2);
}