#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){

    int arr[] = {21,9,1,13,15,0};

    sort(arr,arr+6);      //Imported from algorithm header. Sorts from (first argument) to (last argument - 1).
                                                            //here from (arr[0]) to (arr[5]) 
    for(int i= 0; i<6;i++)
    cout<<arr[i]<<endl;

    sort(arr,arr+6,greater <int> ());       //greater <int> () is a functor here imported from functional header
                                            //which sorts the following in descending order.
    cout<<endl;
    for(int i= 0; i<6;i++)
    cout<<arr[i]<<endl;
    return 0;
}