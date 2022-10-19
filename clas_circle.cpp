#include<iostream>
using namespace std;

class circ{

    private:
    int dia;

    public:
    void setD(int d) {
        if(d>=0){
            dia=d;
        }
        else{
            dia = 0;
        }
    }
        int getD(){
            return dia;
        }
    int areaa(){
            return 2 * dia;
        }
    };

    int main(){
        circ c,c1,c2;

        c.setD(10);

        c1.setD(20);
        
        c2.setD(30);

        cout<<c.areaa()<<endl;

        cout<<c1.areaa()<<endl;

        cout<<c2.areaa()<<endl;

return 0;
}