#include<iostream>
using namespace std;

int main(){

        int x = 10;
        int &y = x;     // refering y as x
        cout<<x<<endl;      // x = 10
        cout<<y<<endl;      // y = 10
 

       
        
        cout<<&x<<endl;     // address of both x and y will be same
        cout<<&y<<endl;

         // if x++ or y++ then it changes the both x and y values

        y++;
        cout<<x<<endl;      //x = 11
        cout<<y<<endl;      // y = 11

    return 0;
}