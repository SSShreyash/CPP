#include<iostream>
using namespace std;

class Sum{
    int a,b;

public:
    void setData(){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }

    void getSum(){
        cout<<"The sum is: "<<a+b<<endl;
    }
};

int main(){
    Sum* ptr = new Sum[4];      //Complex Objects array using pointer.
                                //ptr points to first object.(ptr+1) to next and so on. 
    /*ptr->setData();
    ptr->getSum();

    (ptr+1)->setData();         //2nd object from object array.(ptr+1)
    (ptr+1)->getSum();
    */
    Sum* temp = ptr;             //storing the address 'ptr' in a pointer 'temp'.
    int i;
    
    for(i = 0; i<4; i++){       //4 is the size of our object array so we traverse upto 4.
        (ptr)->setData();
        (ptr)++;                //ptr incremented to ptr+3 at the end of loop.
    }

    ptr = temp;                 //set 'ptr' back to original address using the temp created above.

    for(i = 0; i<4; i++){
        ptr->getSum();
        ptr++;
    }

    return 0;
}