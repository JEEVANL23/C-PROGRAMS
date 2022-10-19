#include<iostream>
using namespace std;

void fun(){

    static int x = 0;       // SV acts as global variable but is accessed only inside the function 
    //  but it is stored in code section will be there through out program
    // x will be incrementing as how many times the fucntion is called 
    // a will be 5 thorugh out the program

    int a = 5; 
    x++;
    cout<<a<<" "<<x<<endl;
}
int main(){

        fun();
        fun();
        fun();



    return 0;
}