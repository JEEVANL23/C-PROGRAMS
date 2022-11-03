#include<iostream>
using namespace std;

class demo{
    public:
    demo(){

        cout<<"const"<<endl;
    }

    ~demo(){

        cout<<"dest"<<endl;
    }
};

void fun(){

    demo d;
}

int main(){

    fun();
    return 0;
}