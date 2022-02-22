#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <cstdlib>
using namespace std;

void Leaky() {
	int* x = new int(5); // heap-allocated
	(*x)++;
	cout << *x << endl;
} // never used delete, therefore leak
void NotLeaky() {
	unique_ptr<int> x(new int(5)); // wrapped, heap-allocated
	(*x)++;
	cout << *x << endl;
} // never used delete, but no leak
int main() {
	Leaky();
	NotLeaky(); //return되는 동시에 deallocation
	return 0;
}
