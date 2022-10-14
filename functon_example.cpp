#include<iostream>
using namespace std;

int add(int a,int b){

            int c;
            c = a+b;
            return c;
}

int main(){


            int x = 10,y=15,z;
            
            z = add(x,y);
            cout<<z<<endl;



    return 0;
}