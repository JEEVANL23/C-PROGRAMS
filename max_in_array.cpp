#include<iostream>
using namespace std;

int main(){

        int a[10],n=10;
        int i,max;
        cout<<"enter the elements of array"<<endl;
        for ( i = 0; i < n; i++)
        {
                /* code */
            cin>>a[i];
        }
        
        max=a[0];
        for ( i = 0; i <=n; i++)
        {
            /* code */
            if (a[i]>max)
            {
                /* code */
                
                max=a[i];
            }
            
            
        }
        cout<<"max element is : "<<endl;
        cout<<max<<endl;
        





    return 0;
}