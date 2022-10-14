#include<iostream>
using namespace std;

void swap(int &x, int &y)     //formal parameters - should be declared as references
{
        int temp;
        temp = x;
        x = y;
        y = temp;

}

int main(){



    int a = 10, b = 20;
    swap(a,b);      // actual parameters

    cout <<a<<endl;
    cout<< b << endl; 

}

// any changes in formal parameters is affected on actual parameters
