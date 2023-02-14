#include <iostream>

using namespace std;

int a = 10;
class A
{
public:
    void myFun()
    {
        a =11;
    }

};

class B
{
public:
    void myFun()
    {
        a =11;
    }

};




int main()
{
int b =5;

#if b == 1
    cout << "Hello !" << endl;
#endif
    cout << "Hello World!" << endl;
    return 0;
}
