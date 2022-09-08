#include<iostream>

using namespace std;


int func(int a){
    int a = a;
    cout<<"First func"<<endl;
    return a;
}

template<class T>                   //Function template with parameter T
T func(T a){
    T a = a;
    cout<<"function with a template."<<endl;
    return a;
}
int main(){
    int a,b;
    
    /*For function call if a function corresponding to parameter passed to function exists, it will run that function  
      else it will try to find a function with template.*/
    
    a = func(4);            // function named 'func' for integer parameter "already exists" so that function will get priority.
    b = func(4.0);          // this will invoke function with template as 'func' with float or double parameter doesn't already exist.
    return 0;
}