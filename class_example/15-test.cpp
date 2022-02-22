#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
void print_2D(const vector<vector<T>>&);

int main() {
	vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };

	print_2D<int>(matrix);
	
	return 0;
}

template<class T>

void print_2D(const vector<vector<T>>& vect) {
	/*
	for (auto& row : vect) {
		for (auto& col : row) {
			cout << col << " ";
		}
		cout << endl;
	}
	*/

	/*
	for (auto row = begin(vect); row != end(vect); row++) {
		for (auto col = row->begin(); col != row->end(); col++) {
			cout << *col << " ";
		}
		cout << endl;
	}
	*/

	for (size_t i = 0; i < vect.size(); i++) {
		for (size_t j = 0; j < vect[i].size(); j++) {
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}
}
