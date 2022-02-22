#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

int main() {
	unique_ptr<int> x(new int(5)); //x가 5를 가리킨다.
	cout << "x: " << x.get() << endl;

	unique_ptr<int> y = move(x); // 5를 가리키는 역할을 y에게 넘긴다. 자기자신은 nullptr가 된다.
	cout << "x: " << x.get() << endl;
	cout << "y: " << y.get() << endl;
	
	cout << *y << endl;

	unique_ptr<int> z(new int(10));
	// y transfers ownership of its pointer to z.
	// z's old pointer was delete'd in the process.
	z = move(y);  //5를 가리키는 역할을 z에게 넘긴다.
	cout << y << endl;
	cout << z << endl;
	return 0;
}