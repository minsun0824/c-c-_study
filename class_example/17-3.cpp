#include <iostream>
#include <functional>
using namespace std;

int main() {
	plus<int> iP;
	greater<int> iG;

	cout << iP(1, 2);
	cout << iG(1, 2);
	cout << minus<int>()(2, 1);
}