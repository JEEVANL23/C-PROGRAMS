#include<iostream>
using namespace std;

class test{

        int a;
        int b;

        public:
        static int count;

        test(){

            a = 10;
            b = 20;
            count++;
        }


        static int getcount(){      // static member fun can access only static data members

            return count;
        }

};


int test ::count = 0;

int main(){

        test t1;    // tt1 is having own a and b
        test t2;    // t2 is having own a and b

        // but count is shared by both t1 and t2

        cout<<t1.count<<endl;
        cout<<t2.count<<endl;
    


    return 0;
}