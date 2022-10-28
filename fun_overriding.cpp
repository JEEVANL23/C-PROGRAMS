#include<iostream>
using namespace std;

class parent{

    public:
    void display(){

        cout<<"parent class"<<endl;
    }
};

class child : public parent{


    public:
    void display(){
        cout<<"child class"<<endl;
    }
};

int main(){


    parent p;
    p.display();

    child c;
    c.display();
}