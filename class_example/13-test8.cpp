#include <iostream>
#include <stdexcept>
using namespace std;

class Resource {
public:
    Resource(int id) : id_(id) { cout << "리소스 생성" <<id_<< endl; }
    ~Resource() { std::cout << "리소스 해제 : " << id_ << std::endl; }

private:
    int id_;
};

int func3() {
    Resource r(3);
    throw std::runtime_error("Exception from 3!\n");
}
int func2() {
    Resource r(2);
    func3();
    std::cout << "실행 안됨!" << std::endl;
    return 0;
}
int func1() {
    Resource r(1);
    func2();
    std::cout << "실행 안됨!" << std::endl;
    return 0;
}

int main() {
    try {
        func1();// 예외가 발생하게 되면 가장 가까운 catch에서 예외를 받는다.
    }
    catch (std::exception& e) {
        std::cout << "Exception : " << e.what();
    }
}