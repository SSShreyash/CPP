#include<iostream>
#include<map>

using namespace std;

int main(){
    //{Key, value} format of storing the elements in map. 
    map<int,string> ob;
    
    ob[3] = "kay";
    ob[5] = "True";                //This is direct method to assign map [key] = value according to parameters(here [int] = "string")
    ob[-1] = "LOL";                //This will go to beginning of map as key is integer so map is created in increasing integer order.
    
    //This method inserts the pair of key,value.
    ob.insert({{1,"value"}, {2,"nhk?"}});

    //Iterator to be created after processing the data else it will point to the previous versions of map just before iterator is created.
    map<int,string> :: iterator itr;        //Creating an iterator(acts just like a pointer).
    itr = ob.begin();                       //iterator points to the first element as we used ob.begin().
    
    //We used int,string as parameters so map is created in increasing integer order.
    cout<<(*itr).first<<" "<<(*itr).second<<endl;              //Prints the first parameter passed to map, of type 'int'.--->KEY
    cout<<(*++itr).first<<" "<<(*itr++).second<<endl;      //Prints the second parameter passed to map, of type 'string'.--->VALUE    
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
    return 0; 
}