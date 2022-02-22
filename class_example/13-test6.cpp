#include<iostream>
using namespace std;

class A
{
private:
	int m_x;
public:
	A() { cout << "A" << endl; }
	~A() { cout << "~A" << endl; }
	A(int x) : m_x{ x }
	{
		cout << "A(int)" << endl;
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	B() { cout << "B" << endl; }
	B(int x) : A{ x }
	{
		cout << "B(int)" << endl;
		// What happens if creation of A fails and we want to handle it here?
	}
	~B() { cout << "~B" << endl; }
};

int main()
{
	try
	{
		B b{ 0 };
	}
	catch (int)
	{
		std::cout << "Oops\n";
	}
}