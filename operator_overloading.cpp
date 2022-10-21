#include<iostream>
using namespace std;

class sum{
        public:
                int n1;
                int n2;  
        void getdata(int a , int b){
            n1 = a;
            n2 = b;
        }
        void display(){
            cout<<n1<<endl;
            cout<<n2<<endl;
        }
        void operator*(sum &);      // 1   
};    
        void sum :: operator*(sum &ob){     // 2

            n1 = n1+ob.n1;
            n2 = n2+ob.n2;
            display();
        }
int main(){
    sum ob1,ob2;
    ob1.getdata(100,150);
    ob2.getdata(120,240);
    ob1*ob2;    // 3
    return 0;
}

// use any operator in place of 1 2 3