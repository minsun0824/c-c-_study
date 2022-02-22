#include <iostream>
#include <memory>
/// <summary>
/// weak pointer는 cyclic dependency between shared_ptr
/// 을 다루는 데 좋다.
/// 
/// </summary>
/// <returns></returns>
int main()
{
    auto sharedPtr = std::make_shared<int>(100);
    std::weak_ptr<int> weakPtr(sharedPtr);

    std::cout << "weakPtr.use count(): " << weakPtr.use_count() << std::endl;
    std::cout << "sharedPtr.use count(): " << sharedPtr.use_count() << std::endl;
    std::cout << "weakPtr.expired(): " << weakPtr.expired() << std::endl;

    if (std::shared_ptr<int> sharedPtr1 = weakPtr.lock()) {
        std::cout << "sharedPtr: " << *sharedPtr << std::endl;
        std::cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << std::endl;

    }
    else
    {
        std::cout << "Don't get the resource!" << std::endl;
    }

    //std::cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << std::endl;
    // shared.use_count 1->2(if)->1
    std::cout << "sharedPtr.use_count() : " << sharedPtr.use_count() << std::endl;

    weakPtr.reset();
    if (std::shared_ptr<int> sharedPtr1 = weakPtr.lock())
    {
        std::cout << "*sharedPtr: " << *sharedPtr << std::endl;
        std::cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << std::endl;
    }
    else
    {
        std::cout << "Don't get the resource! " << std::endl;
    }
}
