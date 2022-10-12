#include<iostream>
using namespace std;

int main(){

    int i,n,fact=1;
    cout<<"enter number to get its factorial"<<endl;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        /* code */
        fact=fact*i;


    }
        cout<<fact<<endl;


    return 0;
}