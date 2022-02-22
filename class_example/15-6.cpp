#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> v{ 3, -4, 5, -6, 2 };
	sort(v.begin() + 1, v.end() - 1);
	//sort(v.begin(), v.end());
	for (auto i : v) {
		cout << i << " ";
	}
}
