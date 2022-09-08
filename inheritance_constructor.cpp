/*Base class constructor gets automatically called for a derived class object and 
Base class constructor will run first then derived class constructors in order.
Multiple inheritance- while derivation, first written base class will be constructed first.
Virtual base class has top priority and will get constructed before any other class.*/

#include<iostream>

using namespace std;

class Sum{
    int a,b;
    public:
    Sum(int a1, int b1){
        a = a1;
        b = b1;
        cout<<"Sum: "<<a+b<<endl;
    }
};

class Mul{
    int c,d;
    public:
    Mul(int c1, int d1){
        c = c1;
        d = d1;
        cout<<"Product: "<<c*d<<endl;
    }

};

class Sub: public Sum, virtual public Mul{      //The class written first(here Sum) will construct first if there is no virtual base class involved.
                                                //But virtual base class has top priority in any case so virtual base class will construct first.

    int x;
    public:
    //Special syntax for derived class constructor to cover arguments for all the constructors.
    Sub(int m,int n,int o,int p,int q): Sum(m,n), Mul(o,p){ 
        x = q;
        cout<<"Sub class variable: "<<x;
    }
};

int main(){
    Sub obj(3,5,4,6,7);
    return 0;
}