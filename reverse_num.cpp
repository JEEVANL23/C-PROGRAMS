#include<iostream>
using namespace std;

int main(){


        int n,r,m,rev=0;
        cout<<"enter n"<<endl;
        cin>>n;
        m=n;
        while (n>0)
        {
            /* code */
            r=n%10;
            n=n/10;
            rev=rev*10+r;


        }
        cout<<rev<<endl;
        
        //palindrome
        
        if (rev==m)
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