#include<iostream>
using namespace std;

#define pi 3.145

#ifndef pi
#define pi 3    // this value is taken when pi is not defined
#endif

#define c cout

#define sq(x) (x*x)

#define msg(y) #y

int main(){

    int x;
    cin>>x;
    c<<pi<<endl;

    c<<sq(x)<<endl;

    c<<msg(hello)<<endl;

    return 0;
}