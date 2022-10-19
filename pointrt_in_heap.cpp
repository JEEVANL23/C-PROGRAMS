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

    // rect r;     to create memory in stack
   //  rect *p = new rect();  to create memory in heap

    rect *p;

    p = new rect();     // heap memory constructor
    
    rect *q = new rect();
    
    p->length = 10;
    p->breadth = 2;
    cout<<p->area()<<endl;
 

    return 0;
}

// . dot operator is used to access data members and members functions

