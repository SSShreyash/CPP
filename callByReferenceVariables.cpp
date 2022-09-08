#include<iostream>

using namespace std;

int & swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a,b;
}
int main(){
    int x = 4,y = 9;
    cout<<x<<" "<<y<<endl;
    swap(x,y) = 89;                 /*changing the return type to reference variable like in this case 'int*' and assigning the function to some value. 
                                      The last returned value gets updated to the assigned value in this case '89'.*/
    cout<<x<<" "<<y;

//Reference variables:
// x = 4;
// &y = x;
// Changing the value of reference variable y will also change the value of x.