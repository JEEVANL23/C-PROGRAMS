#include<iostream>
using namespace std;

class base{

    public:
   virtual void fun(){      // without virtual keyword base class will be called

        cout<<"fun of base"<<endl;
    }
};


class derieved : public base{

    public:
    void fun(){

        cout<<"fun of derieved"<<endl;
    }
};

int main(){

    base *p;
    p = new derieved;

    p->fun();   



    return 0;
}