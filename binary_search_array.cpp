#include<iostream>
using namespace std;

int main(){

        int a[10] = {2,4,6,8,10,12,14,16,18,20};
        int l=0,h=9,mid,key;
        cout<<"enter no to be searched"<<endl;
        cin>>key;
        while (l<=h)
        {
            /* code */
            mid=(l+h)/2;
            if(a[mid]==key){
                cout<<mid<<" ";
                return 0;

            }
            else if (key < a[mid])
            {
                /* code */
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
        
        }
        cout<<"not found"<<endl;
           





    return 0;
}