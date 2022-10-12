#include<iostream>
using namespace std;

int main(){

            // sum of the cubes of each number is equal to number         
        int n,r,m,sum=0;
        cout<<"enter n "<<endl;
        cin>>n;
        m=n;
        while (n>0)
        {
            /* code */
            r=n%10;
            n=n/10;
            sum=sum+r*r*r;
        }
        if (sum==m)
        {
            /* code */
            cout<<"its armstrong"<<endl;

        }
        else
        {
            cout<<"not armstrong"<<endl;
        }
        




    return 0;
}