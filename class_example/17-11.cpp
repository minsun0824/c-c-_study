#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include<cstdlib>
using namespace std;

int main() {
	unique_ptr<int> x(new int(5)); //
	//unique_ptr<int> y(x); // uniquㄷ pointer는 복제가 안된다.
	unique_ptr<int> z; //
	//z = x; // assignment도 안된다.
	return 0;
}
