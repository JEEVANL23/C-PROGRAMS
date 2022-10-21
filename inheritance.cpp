#include<iostream>
using namespace std;

class base{

        public:
            int x;
        void show(){

            cout<<x<<endl;
        }

};

class derieved : public base{
    public:
            int y;
        void display(){     // display and show 2 functions are available in this derieved class
            cout<<x<<endl;       // x is inherited from the base class
            cout<<y<<endl;
        }

        };

int main(){

        base b;     // object will be having variable x
        b.x = 35;
        b.show();   // x = 35

        derieved d;
        d.x = 10;
        d.y = 20;
        d.display();        //x = 10 , y = 20




    return 0;
}