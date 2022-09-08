#include<iostream>

using namespace std;

int count = 0;
class Num{
    public:
    //Constructor
    Num(){
        count++;
        cout<<"Constructor called for object "<<count<<endl;
    }

    /*Destructor(Cannot have arguments or return value.)
    Launched by compiler by default to destroy the part in blocks from memory 
    after a block of code exits.*/
    ~Num(){
        cout<<"Destructor called for object "<<count<<endl;
        count--;
    }
};

int main(){
    Num o1;
    {
        Num o2,o3;              //separate block for which our destructor will execute once the block is closed.
    }
    exit(0);            //Program exits here so main block will not complete
                        // so destructor ~Num() won't be invoked for o1 created in main.
    return 0;
}