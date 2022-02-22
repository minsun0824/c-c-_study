#include<iostream>
using namespace std;
/*https://www.learncpp.com/cpp-tutorial/exceptions-functions-and-stack-unwinding/*/

void last() {
	cout << "start last" << endl << "last throwing int exception" << endl;
	throw - 1;
	cout << "end last" << endl;
}

void third() {
	std::cout << "Start third\n";
    try{ last(); }
	
    catch (double) {
        cout << "third catch" << endl;
    }
	std::cout << "End third\n";
}

void second() // called by first()
{
    std::cout << "Start second\n";
    try
    {
        third();
    }
    catch (double)
    {
        std::cerr << "second caught double exception\n";
    }
    catch (int) {
        cout << "secound caught" << endl;
    }
    std::cout << "End second\n";
}

void first() // called by main()
{
    std::cout << "Start first\n";
    try
    {
        second();
    }
    catch (int)
    {
        std::cerr << "first caught int exception\n";
    }
    catch (double)
    {
        std::cerr << "first caught double exception\n";
    }
    std::cout << "End first\n";
}

int main()
{
    std::cout << "Start main\n";
    try
    {
        first();
    }
    catch (int)
    {
        std::cerr << "main caught int exception\n";
    }
    std::cout << "End main\n";

    return 0;
}