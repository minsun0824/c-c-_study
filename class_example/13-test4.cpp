#include<iostream>
using namespace std;

class Member
{
public:
	Member()
	{
		std::cerr << "Member allocated some resources\n";
	}

	~Member()
	{
		std::cerr << "Member cleaned up\n";
	}
};

class A
{


public:
	~A()
	{
		std::cerr << "~A\n"; // should not be called
	}
	A(int x) : m_x{ x }
	{
		cout << "A" << endl;
		if (x <= 0)
			throw 1;
	}

	int m_x{};
	Member m_member;
};


int main()
{
	try
	{
		A a{ 0 };
	}
	catch (int)
	{
		std::cerr << "Oops\n";
	}

	return 0;
}