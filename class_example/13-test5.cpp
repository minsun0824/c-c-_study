#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "base constructor" << endl; }
    virtual void print() { std::cout << "Base"; }
    ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "derived constructor" << endl; }
    void print() { std::cout << "Derived"; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main()
{
    try
    {
        try
        {
            throw Derived{};
        }
        catch (Base& b)
        {
            std::cout << "1. Caught Base b, which is actually a ";
            b.print();
            std::cout << "\n";
            throw b; // the Derived object gets sliced here
        }
    }
    catch (Base& b)
    {
        std::cout << "2. Caught Base b, which is actually a ";
        b.print();
        std::cout << "\n";
    }

    return 0;
}