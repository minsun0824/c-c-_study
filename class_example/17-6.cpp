#include <functional>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v{ 3, -4, 5, -6, 10 };
	greater<int> iG;
	//sort(v.begin(), v.end(), iG);
	sort(v.begin(), v.end(), greater<int>());
	for (auto i : v) {
		cout << i << " ";
	}
}
