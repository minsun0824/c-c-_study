#include <iostream>
using namespace std;

/*
template<typename T>
T Plus(T n1, T n2) {
	return n1 + n2;
}


int main() {
	cout << Plus<int>(10, 20);

}
*/


template<typename T>
class Plus {
public:
	T operator()(T n1, T n2) {
		return n1 + n2;
	}
};

int main() {
	Plus<int> p;
	cout << p.operator()(10, 20);
	cout << p(10, 20);
	cout << Plus<int>()(10, 20);

}