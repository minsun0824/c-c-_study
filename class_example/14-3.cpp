#include <iostream>
using namespace std;


template<typename T1, typename T2>
class Student {
	T1 id;
	T2 name;
public:
	Student(T1 id, T2 name) : id(id), name(name) {}
	void Print() { cout << "id: " << id << " name: " << name; }
};
int main() {
	Student<int, const char*> st1{ 201911000, "Alice" };
	Student<const char*, const char*> st2{ "A001", "Carol" };
	st1.Print();
	st2.Print();
}
