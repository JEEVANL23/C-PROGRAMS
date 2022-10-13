#include<iostream>
using namespace std;

int main(){

        int x = 10;
        int a;
        int &y = x;
        a = y;
        cout<<a<<endl;
        cout<<y<<endl;
        x = 25;
        cout<<x<<endl;
        




    return 0;
}