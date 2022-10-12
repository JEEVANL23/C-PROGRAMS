#include<iostream>
using namespace std;

int main(){

        int n,i;
        cout<<"enter n "<<endl;
        cin>>n;
        // i is counter
        // n is the total number
        // if mod is equal to zero then it is factor of the number
        for ( i = 1; i < n; i++)
        {
            /* code */
            if (n%i==0)
            {
                /* code */
                cout<<i<<endl;

            }
            
        }
        






    return 0;
}