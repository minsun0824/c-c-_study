#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

int main() {
	vector<unique_ptr<int>> vec;
	vec.push_back(unique_ptr<int>(new int(9)));
	vec.push_back(unique_ptr<int>(new int(5)));
	vec.push_back(unique_ptr<int>(new int(7))); //vector에 unique pointer가 저장된다.
	int z = *vec[1]; //?? pointer를 copy에서 z에 할당하는 것이 아니므로 괜찮다.
	cout << "z is: " << z << " "<< & z << endl;
	//unique_ptr<int> copied = vec[1]; //?? 그러나 pointer를 copy하는 것은 불가
	
	cout << vec[1].get() << endl;
	unique_ptr<int> moved = move(vec[1]); //??
	cout << moved.get() << endl;
	cout << "*moved: " << *moved << endl;
	cout << "z is: " << z << " " << &z << endl;
	cout << "vec[1].get(): " << vec[1].get() << endl; //move로 옮김과 동시에 nullptr
	return 0;
}
