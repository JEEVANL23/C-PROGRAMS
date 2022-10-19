#include<iostream>
using namespace std;

int g = 0;     // global variable // g becomes 15 and then it becomes 20  then 21

void fun(){

    int a = 5;      // local variable to the fun function 
    g+=a;       // g becomes 20
    cout<<g<<endl;      // 20 is printed
}

int main(){
    int x =  10;        // local variable to the main function 
    g = 15;
    fun();
    g++;            // g becomes 21
    cout<<g<<endl;      //  21 is printed
}

// local variables are not accessible to the other function, they are accessible only to function where they are declared
// local variables remains in the memory as long as function runs, once functions ends they get terminated

// global variable are accessbile in all the functions of the programs
// as long as programs run , global variable is stored in the memory
