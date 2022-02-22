#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n1 = 3, n2 = 5;
	vector<int> v{ 0, 1, 2, 3, 4 };
	auto result1 = find(begin(v), end(v), n1);
	//auto result2 = find(v.begin(), v.end(), n2);
	cout << *result1 << endl;
	if (result1 != end(v))
		cout << "v contains: " << n1 << '\n';
	else
		cout << "v does not contain: " << n2 << endl;
}