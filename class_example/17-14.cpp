#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

bool sortfunction(const unique_ptr<int>& x,const unique_ptr<int>& y) {
	//&를 지우면 error가 난다. unique ptr는 copy가 안된다. 그러나 
	//reference는 원래 있는 공간에 새로운 memory를 할당해주기 때문에 가능
	return *x < *y;
}
void printfunction(unique_ptr<int>& x)
{
	cout << *x << endl;
}
int main() {
	vector<unique_ptr<int> > vec;
	vec.push_back(unique_ptr<int>(new int(9)));
	vec.push_back(unique_ptr<int>(new int(5)));
	vec.push_back(unique_ptr<int>(new int(7)));

	// buggy: sorts based on the values of the ptrs
	//기본 sort함수는 range에 있는 값 자체 비교하기 때문에 pointer끼리 비교하여 sort가 안된다.
	sort(vec.begin(), vec.end());
	cout << "Sorted:" << endl;
	for_each(vec.begin(), vec.end(), &printfunction);

	// correct: sorts based on the pointed-to values
	sort(vec.begin(), vec.end(), &sortfunction);
	cout << "Sorted:" << endl;
	for_each(vec.begin(), vec.end(), &printfunction);
	return 0;
}
