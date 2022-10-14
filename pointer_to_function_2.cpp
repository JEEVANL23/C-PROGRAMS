#include<iostream>
using namespace std;


int max(int x, int y){
        if (x>y)
        {
            /* code */
            return x;
        }
        else
        {
            return y;
        }
        
}

int min(int x, int y){

    if (x<y)
    {
        /* code */
        return x;
    }
    else
    {
        return y;
    }
    
}

int main(){


     int a = 10,b = 5,c,d;
     c = max(a,b);
     cout<<c<<endl;
     d = min(a,b);
     cout<<d<<endl;
     
    
    



    return 0;
}