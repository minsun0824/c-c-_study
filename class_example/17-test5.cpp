#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <memory>
#include<cstdlib>
using namespace std;

struct Task {
	int mId;
	Task(int id): mId(id){
		cout << "task: constructor " << endl;
	}
	~Task() {
		cout << "task: destructor" << endl;
	}
};

int main() {
	
	unique_ptr<Task> taskPtr(new Task(23));

	int id = taskPtr->mId;
	cout << id << endl;
	
	unique_ptr<int> ptr1;

	if (!ptr1) {
		cout << "ptr1 is empty" << endl;
	}

	if (ptr1 == nullptr) {
		cout << "ptr1 is empty" << endl;
	}
	
	//unique_ptr은 이거 안된다. 
	//std::unique_ptr<Task> taskPtr2 = new Task();
	//근데 이건 된다.
	unique_ptr<Task> taskPtr(new Task(1));
	if (taskPtr != nullptr) {
		cout << "taskPtr is not empty" << endl;
	}

	cout << "Reset the taskPtr" << endl;
	taskPtr.reset();
	
	if (taskPtr == nullptr) {
		std::cout << "taskPtr is  empty" << std::endl;
	}

	std::unique_ptr<Task> taskPtr2(new Task(55));
	if (taskPtr2 != nullptr)
		std::cout << "taskPtr2 is  not empty" << std::endl;
	
	//unique_ptr은 복사할 수 없다.
	//taskPtr = taskPtr2;
	//std::unique_ptr<Task> taskPtr3 = taskPtr2;


	{
		std::unique_ptr<Task> taskPtr4 = std::move(taskPtr2);
		if (taskPtr2 == nullptr)
			std::cout << "taskPtr2 is  empty" << std::endl;
		// ownership of taskPtr2 is transfered to taskPtr4
		if (taskPtr4 != nullptr)
			std::cout << "taskPtr4 is not empty" << std::endl;
		std::cout << taskPtr4->mId << std::endl;
	}

	std::unique_ptr<Task> taskPtr5(new Task(55));
	if (taskPtr5 != nullptr)
		std::cout << "taskPtr5 is not empty" << std::endl;
	// Release the ownership of object from raw pointer
	Task* ptr = taskPtr5.release();
	if (taskPtr5 == nullptr)
		std::cout << "taskPtr5 is empty" << std::endl;
	std::cout << ptr->mId << std::endl;
	delete ptr;

}