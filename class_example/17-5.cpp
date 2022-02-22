#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> v{ 3, -4, 5, -6, 10 };
	sort(v.begin(), v.end());
	for (auto i : v) {
		cout << i << " ";
	}
}