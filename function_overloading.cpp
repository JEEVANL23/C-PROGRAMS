#include<iostream>
using namespace std;

int add(int x,int y) 
{ return x+y; 
}
int add(int x, int y, int z) {
     return x+y+z; 
}
int main(){


    int a = 10,b = 5,c,d;
    c = add(a,b);

    // we can write like below
    
   // cout<<add(10,12);
    cout << c << endl;
    d = add(a,b,c);
    cout << d << endl;
    





    return 0;
}