#include<iostream>

using namespace std;

class X{
    int p,q;            //p is declared first so, p will be initialised first.
                        //So, we can use p for initialising q after initialising p.
    public:
    X(int a, int b) : p(a),q(b){        //The order of p(a) and q(b) here, doesn't matter only the order of declaration decides which value to initialise first.
        cout<<p<<endl<<q<<endl;
    } 
};

int main(){
    X ob(2,4);
return 0;
}