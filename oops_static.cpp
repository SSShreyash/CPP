#include<iostream>

using namespace std;

class Employee{
    static int count;
    
    public:
    int c = 0;
    void incData();
    static void getData(){              //static method can access only static variables.
        cout<<"\nStatic variable will retain it's value and the increment for one object will be stored for another object as well."<<endl;
        cout<<count;
        }          
    
    };

void Employee:: incData(){
    c++;
    count++;
    cout<<"\nNon static variable will reset to 1 for every object created. "<<endl;
    cout<<c;
}

/*We need to define static variable outside class in this format.
'variable_type' 'classname' :: 'variable_name'*/
int Employee:: count;         //By default this line sets the value for static variable to 0.
                              //Any change in static variable can be made only from this line by assigning.

int main(){
    Employee ob1;
    ob1.incData();              //count incremented to 1
    Employee::getData();        //Static method can be accessed directly from classname without any class object.

    Employee ob2;
    ob2.incData();
    Employee::getData();        //count incremented to 2
}