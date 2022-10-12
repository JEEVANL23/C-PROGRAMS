#include<iostream>
using namespace std;

int main(){

            int a[2][3]= {{2,4,6},{3,6,9}};
            int b[2][3]= {{2,4,6},{3,6,9}};
            int c[2][3];
            int i,j;
            for ( i = 0; i < 2; i++)
            {
                /* code */
                for ( j = 0; j < 3; j++)
                {
                    /* code */
                    c[i][j]=a[i][j]+b[i][j];  // use - * / for the respective operation in place of +
                }
                
                
            }
              for ( i = 0; i < 2; i++)
              {
                /* code */
                for ( j = 0; j < 3; j++)
                {
                    /* code */
                    cout<<c[i][j]<<" ";
                }
                cout<<endl;
                
              }
              





    return 0;
}