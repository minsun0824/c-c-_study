#include <iostream>
#include <memory>

using namespace std;

class house
{
public:
    house(int window, int door)
        : m_window(window)
        , m_door(door)
    { }

    int window() const { return m_window; }
    int door() const { return m_door; }

private:
    int m_window;
    int m_door;
};

int main() {
    unique_ptr<house> home(new house(4, 1));
    cout << home->window() << endl;
    cout << home->door() << endl;
}