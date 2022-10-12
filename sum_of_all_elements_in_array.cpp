#include<iostream>
using namespace std;

int main(){

        int a[]={4,8,6,9,5,2,7};
        int i,n,sum=0;
        cout<<"enter total no of elements to be added"<<endl;
        cin>>n;
        for ( i = 0; i <= n; i++)
        {
            /* code */
            //for displaying sum of each elements 
          sum+=a[i];
           // cout<<sum<<endl;
        }
        //for one total 
        cout<<sum;





    return 0;
}