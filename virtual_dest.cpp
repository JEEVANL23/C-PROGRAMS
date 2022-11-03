#include<iostream>
using namespace std;

class base{
    public:
    
  virtual  ~base(){     // virtual is used to call the fun of both derieved and base class... if you remove virtual only base class fun is called
        cout<<"D of base"<<endl;
}
};

class derieved : public base{

    public:
    
    ~derieved(){

        cout<<"D of derieved"<<endl;
    }
};
void fun(){

    base *p = new derieved();
    delete p;
}
int main(){

    fun();
    return 0;
}