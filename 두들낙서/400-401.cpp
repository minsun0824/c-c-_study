# include <iostream>
#include <stdio.h>
using namespace std;

class Base {
public:
	void bFunc() {
		cout << "hello from base!" << endl;
	}
	int bNum;
};

class Derived :public Base {
public:
	void dFunc() {
		cout << "hello from derived!!" << endl;
	}
	int dNum;
};

int main() {
	Base b;
	Derived d;
	b.bFunc();
	b.bNum;

	d.bFunc(); // 부모 클래스에 있는 변수와 함수들을 사용할 수 있다.
	d.bNum;
	d.dFunc();
	d.dNum;
}