#include<iostream>
using namespace std;
//Templates are used to set the class members' data type while creating it's object.
//We can use T1 as custom data type which will be set according to the parameter passed when object is created. 
template<class T1, class T2 = int>              //T2 is passed with a default parameter 'int' so just like functions,
                                                // if there is no parameter passed during object creation default value(here 'int') will be set to T2.
class Vector{
    public:
    T1* arr;
    T1 d;
    T2 size;

    Vector(T2 size){
        this->size = size;
        arr = new T1[size];
    }

    T1 dotProduct(Vector v){                    //Template parameter can be set as return type for methods as well.
        for(T2 i=0; i<size; i++){
        d +=  this->arr[i]*v.arr[i];
        }
        return d;
    }
};                            //So, T1 and T2 will be replaced by parameters passed while creating objects for class.

int main(){
    Vector<float> ob1(3);                    //float set for T1 variables in class and default parameter(here int) set for T2.
    ob1.arr[0] = 3.1;
    ob1.arr[1] = 2.8;
    ob1.arr[2] = 4.5;                                        
    
    Vector<float,int> ob2(3);              //float passed for both so default parameter will be ignored.
                                          //parameter here Can be different from default parameter.
                                          //Pass the values in constructor according to parameters passed in <>.
    ob2.arr[0] = 2.9;
    ob2.arr[1] = 5.8;
    ob2.arr[2] = 1.4;

    int d = ob1.dotProduct(ob2);
    cout<<d;

  //  Vector<> ob3();               If both are set default just like functions we can create object with empty <>
    return 0;
}