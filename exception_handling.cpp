#include<iostream>
using namespace std;

int main(){

        int x;
        int y,z;
        cin>>x;
        cin>>y;

        try
        {
            if(y==0)
            throw 1;
            z = x/y;
            cout<<z<<endl;
        }
        catch(int e)
        {
            cout<<"division by 0"<<endl;
        }
        


        





    return 0;
}