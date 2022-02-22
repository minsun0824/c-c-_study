#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
    A() { cout << "A's constructor called" << endl; }
    ~A() { cout << "A destructor" << endl; }
};

class B
{
public:
    B() { cout << "B's constructor called" << endl; }
    ~B() { cout << "b destructor" << endl; }
};

class C : public B, public A  // Note the order
{
public:
    C() { cout << "C's constructor called" << endl; }
    ~C() { cout << "c destructor" << endl; }
};

int main()
{
    C c; //b con, a con, c con, c des, a des, b des
    return 0;
}

//The destructors are called in reverse order of constructors.