#include<iostream>
using namespace std;


    int fun(int a,int b){
            return a+b;

    }


    int fun(int a,int b, int c){

            
            return a+b+c;
    }


int main(){

        int y,z;
        y = fun(5,6);
        z  = fun(5,6,7);

        cout<<y<<endl;
        cout<<z<<endl;




    return 0;
}