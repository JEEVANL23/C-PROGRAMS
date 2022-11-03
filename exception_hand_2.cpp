#include<iostream>
using namespace std;

int division(float x,float y){

    cin>>x;
    cin>>y;
    if (y==0)
    throw 1;
    return x/y;
}
int main(){
        float a,b;
        float c;
    
        try
        {
            c = division(a,b);
            cout<<c<<endl;
        }
        catch(int e)
        {
            cout<<"division by 0"<<endl;
        }
    
    return 0;
}