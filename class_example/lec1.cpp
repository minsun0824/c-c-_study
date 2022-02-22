#include <iostream>

using namespace std;

class Message {
private:
	int num1, num2;

public:
	void display(int num1,int num2) {
		cout << "hello object world" << endl;
		cout << num1 << '+' << num2 << '=' << num1 + num2;
	}
};

int main() {
	Message min;
	min.display(2,3);

}