#include<iostream>

using namespace std;

//If a class has at least one "pure virtual function" it can be called an Abstract Class.
//Pure virtual function is a virtual function that has to mandatorily have it's versions in derived classes.
class Channel{
    protected:
    int rating;
    string title;

    public:
    Channel(int rating,string t){
        this->rating = rating;          //This pointer to use the memeber variable and local variable with same name.
        title = t;
    }
    
    virtual void display(){             //virtual keyword to allow runtime polymorphism for this method.
        //Method to be overriden so left empty.
    }
    /* For Abstract class:
    virtual void display() = 0;   //To make virtual function pure.So, after assigning to 0,
                                  // program will throw an error if derived class doesn't override the method display.
                                  */
                                
};

class VideoContent: public Channel{
    protected:
    int like_count;
    float runtime; 
    
    public:
    VideoContent(int rating,string t,int lc, float rt): Channel(rating,t){
        like_count = lc;
        runtime = rt;
    }

    void display(){
        cout<<"No. of likes = "<<like_count<<endl;
        cout<<"Video Length: "<<runtime<<" minutes"<<endl; 
    }
};

class TextContent: public Channel{
    protected:
    int word_count;

    public:
    TextContent(int rating,string t,int wc): Channel(rating,t){
        word_count = wc;
    }

    void display(){
        cout<<"The content has "<<word_count<<" words"<<endl;
    }
};

int main(){
    int rating = 4;
    string title = "Lmao";
    Channel Chob(rating,title);             
    Chob.display();                  //no overriding directly runs base class method.
//If display() is made pure virtual function,Channel will be an abstract class 
//and this object creation above, for abstract class is not possible.
//So,we would directly move to creating 'pointer objects' for base class Channel.

//Derived class methods can be accessed only through the class' objects directly OR
//through the base class pointer objects using runtime polymorphism(for overriding).
    Channel* ptrobj[2];         //creates 2 pointer objects of Channel.
    
    int lc = 240;
    float rt = 35;
    VideoContent Vidob(rating,title,lc,rt);

    int wc = 180;
    TextContent Textob(rating,title,wc);
    
    //If display() is not virtual,the code below won't bring any overriding and only base class display() method will invoke.
    
    ptrobj[0]=&Vidob;        //First pointer object points to address of derived class VideoContent's object 'Vidob'.
    ptrobj[1]=&Textob;       //Second pointer object points to address of derived class TextContent's object 'Textob'.
    //So, now above two pointer objects are 'the pointers to derived class'.
    
    ptrobj[0]->display();
    ptrobj[1]->display();
    return 0;
}

//Virtual Function should not be static.