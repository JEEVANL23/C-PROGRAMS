#include<iostream>
using namespace std;

int main(){

        //perfect num is factors should be equal to 2 times of same number 6=1+2+3+6=12, 6x2=12
        int i,n,sum=0;
        cout<<"enter n"<<endl;
        cin>>n;
        for ( i = 1; i <= n; i++)
        {
            /* code */
            if (n%i==0)
            {
                /* code */
                sum+=i;
            }
            
        }
        if (2*n==sum)
        {
            /* code */
            cout<<"perfect no"<<endl;
        }
        else
        {
            cout<<"not perfect"<<endl;
        }
        





    return 0;
}