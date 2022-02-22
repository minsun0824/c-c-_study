#include <memory>    //for shared_ptr/weak_ptr
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    // strong refCount = 1
    shared_ptr<int> sp1(new int(5));
    cout << sp1.use_count() << endl; 

    // shared_ptr sp1으로부터 복사 생성
    weak_ptr<int> wp1 = sp1;
    weak_ptr<int> wp2 = sp1;
    cout << sp1.use_count() << endl; 
    cout << wp1.use_count() << endl; 
    cout << wp2.use_count() << endl; 

    
       
    shared_ptr<int> sp2 = wp1.lock();
    cout << sp1.use_count() << endl; //
    cout << wp1.use_count() << endl; //
        
    cout << sp2.use_count() << endl; 
    if (sp2)
    {
        //여기 문장은 실행이 될까요??
    }
    

    
    sp1.reset();

    
    shared_ptr<int> sp3 = wp1.lock();
    cout << sp3.use_count() << endl;
    if (sp3)
    {
        // 여기 문장은 실행이 될까요?
    }

    return 0;
}