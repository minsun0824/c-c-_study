#include <cmath> // for sqrt() function
#include <iostream>
using namespace std;

double mySqrt(double x)
{
    if (x < 0.0)
        throw "Can not take sqrt of negative number"; // throw exception of type const char*

    return sqrt(x);
}

int main()
{
    cout << "Enter a number: ";
    double x{};
    cin >> x;

    try // Look for exceptions that occur within try block and route to attached catch block(s)
    {
        double d = mySqrt(x);
        cout << "The sqrt of " << x << " is " << d << '\n';
    }
    catch (const char* exception) // catch exceptions of type const char*
    {
        cerr << "Error: " << exception << std::endl;
    }

    return 0;
}