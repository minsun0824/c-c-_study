#include <iostream>
using namespace std;
template<typename T>

class Point {
	T x; T y;
public:
	Point(T xx = 0,T yy = 0) : x(xx), y(yy) { }
	T getX() { return x; } 
	T getY() { return y; }
};
int main() {
	Point<int> pt_i{ 1, 2 };
	cout << pt_i.getX() << endl;
	Point<double> pt_d{ 1.2, 3.4 };
	cout << pt_d.getX() << endl;
}
