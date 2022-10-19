#include<iostream>
using namespace std;

// classes are type of data types that are used for defining user defined data types

class rect{

    private:    // by default data members will be private, we have to write public

    int length ;        // data members - DM are data variables, these will occupy memory space
    int breadth;

    public:

    void mains(int l){
        
        if(l>=0){
            length=l;
        }
        else
        {
            length= 0;
        }
    }
    void mainss(int b){
        if (b>=0)
        {       /* code */
            breadth=b;
        }
        else
        {
            breadth=0;
        }
    }
    int getLength(){

        return length;
    }
    int getBreadth(){

        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};

int main(){
    rect r;

    r.mains(10);
    r.mainss(5);
    
    cout << "r.getLength() = " << r.getLength() << endl;
    cout << "r.getBreadth() = " << r.getBreadth() <<endl;


    cout<<r.area() << endl;
    cout<<r.perimeter() << endl;







    return 0;
}

// . dot operator is used to access data members and members functions