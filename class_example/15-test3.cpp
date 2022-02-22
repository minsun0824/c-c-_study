#include <iostream>
#include <vector>
#include <algorithm>  // sort algorithm
#include <functional> // greater<>

using namespace std;

template<class T>

void print(vector<T>& vect) {
	for (auto val : vect) {
		cout << val << " ";

	}
	cout << endl;
}

int main() {
	vector<int> numbers{};
	for (int i = 60; i >= 10; i -= 10) {
		numbers.push_back(i);
	}

	vector<int>::iterator itr;
	itr = find(numbers.begin(), numbers.end(), 30);
	cout << "Element " << *itr << " found at index " << itr - numbers.begin() << endl;


	print<int>(numbers);
	sort(numbers.begin(), numbers.end() ,greater<>());
	print<int>(numbers);
	return 0;

}