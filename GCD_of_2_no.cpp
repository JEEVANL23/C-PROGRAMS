#include<iostream>
using namespace std;

int main(){

        int m,n;
        cout<<"enter 2 no"<<endl;
        cin>>m;
        cin>>n;
        while (m!=n)
        {
            /* code */
            if (m>n)
            {
                /* code */
                m=m-n;
            }
            else if (n>m)
            {
                /* code */
                n=n-m;
            }
            
            
        }
        cout<<m<<endl;





    return 0;
}