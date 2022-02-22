#include<iostream>
#include <stdexcept>
using namespace std;

template <typename T>

class Vector {
private:
	T* data_;
	size_t size_;
public:
	Vector(size_t size) :size_(size) {
		data_ = new T[size_];
		for (int i = 0; i < size_; i++) {
			data_[i] = 3;
		}
	}

	const T& at(size_t index) const {
		if (index >= size_) {
			throw out_of_range("vector의 index가 범위를 초과하셨습니다.");
		}
		return data_[index];
	}
	~Vector() { delete[] data_; }
};

int main() {
	Vector<int> vec(3);
	int index, data = 0;
	cin >> index;

	try {
		data = vec.at(index);
	}
	catch (out_of_range& e) {
		cout << "예외 발생!" << e.what() << endl;
	}

	cout << "읽은 데이터:" << data << endl;
}