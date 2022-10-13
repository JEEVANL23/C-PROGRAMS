#include<iostream>
using namespace std;

int main(){

        int x = 10;
        
        int *p;     //declaring pointers
        p = &x;     // initializating pointers

        cout<<x<<endl; // display data of x

        cout<<&x<<endl; // display address of x

        cout<<p<<endl; // displays address of x

        cout<<&p<<endl; // display address of p

        cout<<*p<<endl; // displays data present in p's pointing the address 
        // dereferencing pointers = accessing the data of that location
        




    return 0;
}