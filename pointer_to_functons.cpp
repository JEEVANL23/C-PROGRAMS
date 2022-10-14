#include<iostream>
using namespace std;


void a(){

    cout<<"hello world"<<endl;
}

int main(){


        void(*fp)();        // ddeclaration of pointer to function 
        fp = a;             // initialization of function to pointer
        (*fp)();            //calling the function 


    return 0;
}