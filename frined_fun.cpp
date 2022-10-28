#include<iostream>
using namespace std;

class yours;
class my{

    int a;

    friend yours;
};


class yours{

    public:
    my m;

    void fun(){

    cout<<m.a;

    }
};