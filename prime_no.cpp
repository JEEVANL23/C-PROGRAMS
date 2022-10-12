#include<iostream>
using namespace std;

int main(){

        int i,n,count=0;
        cout<<"enter no"<<endl;
        cin>>n;
        for ( i = 1; i <= n; i++)
        {
            /* code */
            if (n%i==0)
            {
                /* code */
                count++;
            }
            
        }
        if (count==2)
        {
            /* code */
            cout<<"prime"<<endl;
        }
        else{
            cout<<"not prime"<<endl;
        }        





    return 0;
}