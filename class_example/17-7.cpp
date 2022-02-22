#include <iostream>
#include <functional>
using namespace std;

void print(function<int()> func) {
	cout << func() << endl;
}
int main() {
	int x = 10;
	int y = 7;
	//auto lambda_function = [=]() { return x; };
	auto lambda_function = [x, &y]() {y = 3; return x; };
	print(lambda_function);
	cout << x << endl << y << endl;
}