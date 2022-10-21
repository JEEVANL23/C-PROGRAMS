#include<iostream>
using namespace std;
class complex{
        public:
                int real;
                int img;
        public:
        complex(int r =0,int i=0){
                real = r;
                img = i;
        }
        complex operator+(complex x){     // c2 will be named as x
                complex temp;
                // instead of + you can use - / * to use + for  different operations
                temp.real = real+x.real;        // c1's real + c2's real = stored in temp's real - 3 + 5 = 8
                temp.img = img+x.img;           // c1's img + c2's img = stored in temp's real img -  7 + 4 = 11
                return temp;
        }
};
int main(){
        complex c1(3,7);    // c1 real is 3 and c1 imag is 7
        complex c2(5,4);    // c2 real is 5 and c2 imag is 4
        complex c3;       // c3 real is 8 and c3 imag is 11
        c3 = c1+c2;
        cout<<c3.real<<" +i "<< c3.img<<endl;
        return 0;
}


