#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v){                       //using reference variables, change in local variable brings change to main() variable.
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
            }
    cout<<endl;
}


int main(){
    //Creating vectors using STL:
    vector<int> v1;             //Zero length vector.

    v1.push_back(2);             //Adds to the last position in vector.
   // v.pop_back();              //Deletes last element.
    vector<int> :: iterator itr;
    itr = v1.begin();

    // We need iterator for using insert in case of vectors.
//    v1.insert(itr,8);              //Inserts single 8 at position where itr points(here at beginning - 0th index).
//----Use insert() only once per iterator.----(If we run both insert above and below together, the vector won't print any values.)
      v1.insert(itr+1,3,5);            //Inserts 3 copies of 5 at position next to where itr points(here (0+1)=1st index).

    display(v1);

    vector<char> v2(4);         //Creating a vector of size 4.
    v2.push_back('1'); // As the size is already passed as 4, index 0 to 3 will be empty(until assigned) and this will be at index 4 created after increasing size.
    display(v2);

    vector<char> v3(v2);        //Creating a vector v3 using vector v2 of size 4.(Exact copy of v2)
    display(v3);
    
    vector<float> v4(3,4.2);    //3-element float vector with '4.2' as its elements.
    display(v4);

    return 0;
}