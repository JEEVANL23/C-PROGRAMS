#include<iostream>
using namespace std;

int x = 10;          // global variable
int main(){

        int x = 20;      // local variable to the main function
        {
            int x = 30;     // local variable to the block level
            cout<<x<<endl;  // 30 is printed because 30 is the nearest value
        }
        cout<<x<<endl;          // 20 is printed because 20 is the nearest value
        

        cout<<::x<<endl;        // accessing the global variable





    return 0;
}