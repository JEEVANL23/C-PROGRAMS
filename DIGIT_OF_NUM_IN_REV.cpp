#include<iostream>
using namespace std;

int main(){

        // 1724%10 = 4 last digit
        // 1724 / 10  int division = 172
        // again mod by 10
        // again divide by 10

        int n,m,r;
        cout<<"enter n"<<endl;
        cin>>n;
        m=n;
        while (n>0)
        {
            /* code */
            r=n%10;
            n=n/10;
            cout<<r;
            
        }
        if (m==r)
        {
            /* code */
            cout<<"palindrome"<<endl;
        }
        else
        {
            cout<<"not"<<endl;
        }
        
        
        





    return 0;
}