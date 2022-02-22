#include <iostream>
using namespace std;

// 자연수를 입력받으면 1부터 n까지의 자연수를 순서대로 출력하되, 3 6 9 이면 별표를 출력하는 프로그램

int main() {
	int n;
	cout << "write number: ";
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		if (i % 3 == 0) {
			cout << "*" << ' ';
		}
		else {
			cout << i << ' ';
		}
	}
}