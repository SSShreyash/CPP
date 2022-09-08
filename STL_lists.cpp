#include<iostream>
#include<list>              //Doubly linked list.
using namespace std;

/*This display function won't work for list as it did for vectors as we cannot access the list elements with [] operator.
template<class T>
void display(list<T> l){
    for(int i = 0; i<l.size();i++){
        cout<<l[i]<<" ";            
    }
}
*/
//In vectors we compulsorily need iterator only for functions like insert().
//In list we have to compulsorily use iterator even for accessing the elements as we can't use [] operator.

//template<class T>
void dispList(list<int> L){
    list<int> :: iterator iter;
    for(iter = L.begin(); iter!=L.end();(iter)++){             //L.end() gives a reference to end of list that is after reading the last element. 
        cout<<(*iter)<<" ";
    }
    cout<<endl;
}

int main(){
    list <int> l1;
    l1.push_back(21);
    l1.push_front(13);
    
    list<int> :: iterator iter;         //Iterator 'iter'.
    
    iter = l1.begin();
    l1.insert(iter,3);                  //insert() at where iter points.
    //dispList(l1);

    list <int> l2(3);       //List of size 3. 0 to 2 index here are assigned to 0 by default. In vectors they were empty.
                            //Can be resized.
    
    l2.push_back(4);        // resizes the list and 1 will be pushed to newly created index 3 leaving first 3 index 0 until assigned.
    iter = l2.begin();      // using iter declared above for multiple different lists.
    *iter = 1;              //assigning the values using iterator.
    *(++iter) = 2;          //iterator acts like pointer but it is an object so we can't use iter+1 we have to use ++ or --.
    
    dispList(l2);

    list <int> l3(l2);      //copy of list l2.
    l3.pop_front();         //deletes the first element of l3.
    l3.remove(0);           //deletes the element with value 0 from l3.
    
    dispList(l3);           //Output: 2 4

    //Reverse,merge and sort.
    l1.reverse();
    //dispList(l1);

    l2.merge(l3);           //Merges l3 into l2. (l2 is updated l3 becomes empty.)
    dispList(l2);           //Output: 1 2 0 2 4 4       as push_back(4) is called once for each list, both 4 will be at last.

    l1.sort();              //Sorts l1.
    //dispList(l1);

    return 0;
}