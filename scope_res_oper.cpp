#include<iostream>
using namespace std;

class rect{


    private:
            int length;
            int breadth;

    public:


            rect();
            rect(int l, int b); // constructors

            int  getlength();
            int getbreadth();   // accessors - to read the value

            void setlength(int l);
            void setbreadth(int b);       // mutators - to write value

            int area();
            int perimeter();     // intentionally left blank to access using scope resolution  outside the class 

            ~rect();
};


    // declaring outside the functions using scope resolution operator

    rect :: rect(){
        length = 1;
        breadth = 1;
    }
    rect :: rect(int l, int b){
        length = l;
        breadth = b;
    }

    void rect :: setlength(int l){
        length = l;
        
    }
    void rect :: setbreadth(int b){

            breadth = b;
    }
    
    rect :: ~rect(){

        cout<<"class is destoryed"<<endl;
    }

    int rect :: area(){
        return length * breadth;
    }

    int rect :: perimeter(){
        return 2 * (length+breadth);
    }
int main(){
    
    rect r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;


    return 0;
}