#include<iostream>
using namespace std;

class car{

    public:
    virtual void start()=0; // pure virtual function

    // class car is abstract class - atleast one pure virtual function
};

class innova:public car{    // when derieved class inherits from base class which is abstract it also becomes abstract class

    void start(){
        cout<<"innova started"<<endl;
    }
};

class swift : public car{


    void start(){
        cout<<"swift started"<<endl;
    }
};


int main(){

        car *p; // pointer can be created for a  abstract class
        p = new innova();

        p-> start();

        p = new swift();

        p->start();


    return 0;
}