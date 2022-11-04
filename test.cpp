#include<iostream>
using namespace std;


    int fun(int a,int b){
            int c;
            c = a+b;
            cout<<c<<endl;
            return 0;
    }
    int fun(int a,int b, int c){
       
            return a+b+c;
    }
int main(){

        int y,z;

        y = fun(5,6);
        z  = fun(5,6,7);

        cout<<z<<endl;
    return 0;
}