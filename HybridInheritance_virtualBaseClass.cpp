#include<iostream>

using namespace std;

class SuperBase{
    public:
    int a =1;
};

class Base1 : virtual public SuperBase{     //virtual inheritance
    //a inherited to Base1
};

class Base2 : virtual public SuperBase{     //virtual inheritance
    // a inherited to Base2
};

class Sub : public Base1, public Base2{
};

int main(){
    Sub obj;
    cout<<obj.a;            //a is Ambiguous if Base1,Base2 are not inherited virtually.
    return 0;
}

//So for hierarchial inheritance virtual inheritance is preferred as 
//only a copy of the public variables declared in base class is passed to the subclasses.
//Hence,the SuperBase class here, will be the virtual base class.