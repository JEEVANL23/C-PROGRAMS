#include<iostream>
using namespace std;

class rect{

    private:

    int length;
    int breadth;

    public:

    rect(){         // default constructor
        length = 0;
        breadth = 0;
    }

    rect(rect &r){          // copy const
        length = r.length;
        breadth = r.breadth;
    }
    


    };

    int main(){
        
        rect r;

        
        rect r2(r);

return 0;
}