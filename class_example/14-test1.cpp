#include<iostream>
#include<cassert>
using namespace std;


#define ARRAY_H

#include <cassert>

template <typename T> // added
class Array
{
private:
    int m_length{};
    T* m_data{}; // changed type to T

public:

    Array(int length)
    {
        assert(length > 0);
        m_data = new T[length]{}; // allocated an array of objects of type T
        m_length = length;
    }

    Array(const Array&) = delete;
    Array& operator=(const Array&) = delete;

    ~Array()
    {
        delete[] m_data;
    }

    void erase()
    {
        delete[] m_data;
        // We need to make sure we set m_data to 0 here, otherwise it will
        // be left pointing at deallocated memory!
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](int index) // now returns a T&
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    // templated getLength() function defined below
    int getLength() const;
};


// member functions defined outside the class need their own template declaration
template <typename T>
int Array<T>::getLength() const // note class name is Array<T>, not Array
{
    return m_length;
}

int main() {
	Array<int> intArray{ 12 };
	Array<double> doubleArray{ 12 };

	for (int i = 0; i < intArray.getLength(); i++) {
		intArray[i] = i;
		doubleArray[i] = i + 0.5;
	}
	for (int j = intArray.getLength() - 1; j >= 0; j--) {
		std::cout << intArray[count] << '\t' << doubleArray[count] << '\n';
	}
}
