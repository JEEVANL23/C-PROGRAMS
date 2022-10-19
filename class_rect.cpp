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
    rect r1,r2,r3;     // r1 and r2 are objects

    r1.length = 10; // accessing data from the class using object
    r1.breadth = 5;

    r2.length = 10;
    r2.breadth = 8;

    r3.length = 110;
    r3.breadth = 117;


    
    cout<< r2.perimeter() << endl;
    cout<< r1.area() << endl;

    cout<<r1.perimeter() << endl;
    cout<<r2.area() << endl;

    cout<<r3.perimeter() << endl;
    cout<<r3.area() << endl;

    return 0;
}

// . dot operator is used to access data members and members functions