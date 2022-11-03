#include<iostream>
using namespace std;

namespace one{

    void fun(){

        cout<<"one"<<endl;
    }
}

namespace two{

    void fun(){

        cout<<"two"<<endl;
    }
}

int main(){

        one::fun();
        two::fun();

    return 0;
}