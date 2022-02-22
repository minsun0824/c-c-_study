#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

int main() {
	shared_ptr<int> x(new int(10));
	cout << "ref count: " << x.use_count() << endl;
	// temporary inner scope (!)
	{
		shared_ptr<int> y = x; // ref count: 
		cout << *y << endl;
		cout << "ref count: " << x.use_count() << endl;
	}
	cout << *x << endl; // ref count:
	cout << "ref count: " << x.use_count() << endl;
	return 0;
} //scope 벗어나면 y사라짐.