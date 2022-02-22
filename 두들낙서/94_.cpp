#include <iostream>
using namespace std;

//자연수를 입력받으면 그 수의 약수를 모두 출력하는 프로그램

void func(int n) {
	for (int i = 1; i < n + 1; i++) {
		if (n % i == 0) { // ==으로 써야 함
			cout << i << ' ';
		}
	}
}

int main() {
	func(20);
}