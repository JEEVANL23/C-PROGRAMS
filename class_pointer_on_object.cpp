#include<iostream>
using namespace std;

// classes are type of data types that are used for defining user defined data types

class rect{

    public:     // by default data members will be private, we have to write public

    int length ;        // data members - DM are data variables, these will occupy memory space
    int breadth;

    int area(){
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);// member functions - MF are functions used to manipulate these variables(DM)
        // functins will not occupy memory space
    }
};

int main(){


    rect r;     // r1 and r2 are variables
    rect *p;
    p = &r;

    r.length = 10;      // . dot operator is used to accessing the members of an object using variable name 
    p->length = 10;     // -> arrow operator is used to access members of an object using pointer
    p->breadth = 5;
    cout<<p->area()<<endl;
 

    return 0;
}

// . dot operator is used to access data members and members functions

