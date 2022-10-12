#include<iostream>
using namespace std;

int main(){

        
            int a[10],n=10;
            int i,key;
            cout<<"enter the elements of array"<<endl;
            for ( i = 0; i < n; i++)
            {
                /* code */
                cin>>a[i];
            }
            cout<<"enter key to be searched"<<endl;
            cin>>key;
            for ( i = 0; i < n; i++)
            {
                /* code */
                if (key==a[i])
                {
                    /* code */
                    cout<<"position of key is"<<endl;
                    cout<<i<<endl;
                }

                
                
            }
            cout<<"not found"<<endl;
            
            




    return 0;
}