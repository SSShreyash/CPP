#include<iostream>

using namespace std;

class Num{
    private:
    int a;                  //private keyword can be omitted here.

    public:
    int b;
    void setData(int);      //Declaring a public function inside class.
    void getData(){         
        cout<<a<<endl;
        cout<<b<<endl;
    };
};

//This function is needed to set private data.
void Num :: setData(int a1){         //accessing a function declared in class and defining it.
        a = a1;
    }

int main(){
    Num o;
    o.setData(5);
    o.b = 4;
    o.getData();
    return 0;
}

//By default C++ class members are private.So, to call methods in main() or any other function, declare methods in public.