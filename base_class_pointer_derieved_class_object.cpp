#include<iostream>
using namespace std;

class base{

    public:
    void fun1();
    void fun2();
    void fun3();
};

class derieved : public base{

    public:
    void fun4();
    void fun5();
};

int main(){

    base *p;
    p = new derieved();

    p->fun1();
    p->fun2();
    p->fun3();
    
    // only we can call base class functions using pointer
    // not the derieved class
    return 0;
}