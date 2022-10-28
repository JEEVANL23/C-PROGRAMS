#include<iostream>
using namespace std;

class base{

    public:
    virtual void fun1()=0;
    virtual void fun2()=0;
};

class derieved : public base{

    public:
    void fun1(){

        cout<<"1 derieved"<<endl;
    }

    void fun2(){

        cout<<"2 derieved"<<endl;
    }
};


int main(){

    base *p;

    p = new derieved();

    p->fun1();
    p->fun2();



return 0;
}