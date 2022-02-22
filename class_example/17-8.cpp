#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v1{ 1,2,3,4 }, v2{ 4,5,6,7 };
	// merge
	vector<int> dst(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), dst.begin());
	for_each(dst.begin(), dst.end(),
		[](auto& v) {
			cout << v << endl;
		}
	);
}