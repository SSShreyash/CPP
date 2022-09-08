#include<iostream>

using namespace std;

int sum(int a, int b){
    cout<<"Integer addition: ";
    return a + b;
}
//Same function name with different return type plus different argument type.
float sum(float a, int b){
    cout<<"Float plus int: ";
    return a + b;
}
//Same function name with same return type as first but different no. of arguments.
int sum(int a, int b, int c){
    cout<<"3 arguments: ";
    return a + b + c;
}
int main(){
    cout<<sum(2,4)<<endl;
    cout<<sum(3.1f,6)<<endl;
    cout<<sum(2,4,6)<<endl;
    return 0;
}