#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

int main() {
	vector<shared_ptr<int> > vec;
	vec.push_back(shared_ptr<int>(new int(9)));
	vec.push_back(shared_ptr<int>(new int(5)));
	vec.push_back(shared_ptr<int>(new int(7)));
	int& z = *vec[1];
	cout << "*vec[1] is : " << *vec[1] << " addr of *vec[1]" << vec[1] << endl;
	cout << "z is : " << z << " addr of z is " << &z << endl;

	cout << "ref count of vec[1]: " << vec[1].use_count() << endl;
	shared_ptr<int> copied = vec[1]; //works;
	cout << "*copied: " << *copied << " vec[1].get() after copied " << vec[1].get() << endl;
	cout << "ref count of vec[1]: " << vec[1].use_count() << endl;
	shared_ptr<int> moved = move(vec[1]); //works;
	cout << "*moved: " << *moved << " addr of *moved: " << moved << endl;
	cout << "vec[1].get(): " << vec[1].get() << endl;
	cout << "now z is : " << z << " addr of z is : " << &z << endl;
	cout << "ref count of vec[1]: " << vec[1].use_count() << endl;
	cout << "ref count of moved: " << moved.use_count() << endl;
	return 0;
}
