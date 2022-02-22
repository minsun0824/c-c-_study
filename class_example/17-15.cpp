#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

int main() {
	unique_ptr<int[]> x(new int[5]);
	x[0] = 1;
	x[2] = 2;
	return 0;
}
