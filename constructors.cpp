#include<iostream>
using namespace std;

// classes are type of data types that are used for defining user defined data types

class rect{

    private:    // by default data members will be private, we have to write public

    int length ;        // data members - DM are data variables, these will occupy memory space
    int breadth;

    public:

    // default or non parameterized constructor
    rect(){
        length = 1;
        breadth = 1;    
    }

    // constructor with parameters
    rect(int l, int b)
    {
            setLength(l);
            setBreadth(b);

    }

    // copy constructor
    rect(rect &r1)
    {
        length = r1.length;
        breadth = r1.breadth;
    }


    void setLength(int l){
        
        if(l>0){
            length=l;
        }
        else
        {
            length= 1;
        }
    }

    void setBreadth(int b){
        if (b>0)
        {       /* code */
            breadth=b;
        }
        else
        {
            breadth=1;
        }
    }
    int getLength(){

        return length;
    }
    int getBreadth(){

        return breadth;
    }
    int area(){
        return length * breadth;
    }
    int perimeter() {
        return 2 * ( length + breadth );
    }
};

int main(){
    rect r;         // default or non parameterized constructor
    cout<<r.area()<<endl;

    rect r1(10,6); // parameterized constructor
    rect r2(r1);    // copy constructor - calling parameterized constructor with an reference
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;


}

// . dot operator is used to access data members and members functions