#include<iostream>
using namespace std;

int main(){

        int i,n;
        cout<<"enter number to get its multiplication table"<<endl;
        cin>>n;
        for (i=1;i<n;i++)
        {
            /* code */
            cout<<n<<" * "<<i<<" = "<<i*n<<endl;
            if (i>=10)
            {
                /* code */
                break;
            }
            
        }
        
        





    return 0;
}