#include<iostream>
using namespace std;

class rect{


    private:
            int length;
            int breadth;

    public:


            rect();
            rect(int l, int b); // constructors

            int  getlength(){return length;};
            int getbreadth(){return breadth;};   // accessors - to read the value

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
    
    int rect :: area(){
        return length * breadth;
    }

    int rect :: perimeter(){
        return 2 * (length+breadth);
    }

    rect :: ~rect(){

        cout<<"class is destoryed"<<endl;
    }

    class cuboid : public rect{
        private:
                int height;

        public:
                cuboid(int h)
                {
                    height = h;
                }
                int hetheight()
                {
                    return height;
                }
                void setheight(int h)
                {
                    height = h;
                }
                int volume()
                {
                    return getlength() * getbreadth() * height;
                }
    };
int main(){
    
    cuboid c(5);
    c.setlength(3);
    c.setbreadth(2);
    cout<<c.volume()<<endl;



    return 0;
}