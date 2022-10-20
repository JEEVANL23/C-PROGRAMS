#include<iostream>
using namespace std;

int add(int x,int y)        // formal parameters
{ 
    return x+y; 
}

int main(){


    int a,b,c;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    c = add(a,b);       // actual parameters
    cout<<c<<endl;
    





    return 0;
}

// call by value is used only to return the result without any changes to actual parameters

// any changes done in formal parameters will not be affected on the actual parameters 