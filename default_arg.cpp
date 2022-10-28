#include<iostream>
using namespace std;



int add(int x,int y, int z=0){
     return x+y+z;
}

int main(){

    int c = add(2,5);   // x = 2, y = 5, z = 0
    int d = add(2,4,6); // x = 2, y = 4, z = 6
    int f = add(2,6,0); // x = 2, y = 6, z = 0
    cout << c << endl;
    cout << d << endl;
    cout << f << endl;


    return 0;
}
