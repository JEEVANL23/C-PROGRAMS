#include<iostream>
using namespace std;

class base{
    private:
    int a;

    protected:
    int b;

    public:
    int c;

    void fuc(){
        a = 10;
        b = 20;
        c = 30;
        
    }
};

class derieved : public base{
    public:
    fun_d()
    a = 1;
    b = 2;
    c = 3;
};

int main(){
    base x;

    x.a = 15;
    x.b = 30;
    x.c = 90;

    return 0;

}

