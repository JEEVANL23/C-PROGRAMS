#include<iostream>
using namespace std;

void swap(int *x, int *y)       // formal parameters - should be declared as pointers
{
        int temp;
        temp = *x;          // dereferencing - accessing the data of that location where the pointer is pointing
        *x = *y;
        *y = temp;

}                           // any changes in formal parameters is affected on actual parameters

int main(){



    int a = 10, b = 20;
    swap(&a,&b);        //actual parameters - it should be decalred as address

    cout <<a<<endl;
    cout<< b << endl; 

}