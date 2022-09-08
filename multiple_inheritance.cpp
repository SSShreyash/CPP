#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalc
{
    int a, b;
    char s;

public:
    string o = "Hello";                                         //String variable named 'o'. 
    void utility1(int a1,char c, int b1)
    {
        a = a1;
        s = c;
        b = b1;
    }
    
    void simple()
    {
        int a1,b1;
        char c;
        cout<<"Simple Calculator:"<<endl;
        cin>>a1>>c>>b1;
        utility1(a1,c,b1);
        
        if(s == '+')
        cout<<(a + b)<<endl;
        else if(s == '-')
        cout<<(a - b)<<endl;
        else if(s == '*')
        cout<<(a * b)<<endl;
        else if(s == '/')
        cout<<((float)(a) / float(b))<<endl;
    }
};

class ScientificCalc
{
    int x, y;
    char s;                //Private variable can have same names in multiple inheritance as they are not inherited.
public:                                                     //For public variables and methods:-    
    string o = "Domo";                                      //String has same name 'o' as another base class so, ambiguity created.
    void utility2(int x1, char c, int y1){                  //If same methodname 'utility' was set for both the classes,
                                                            // it will create an ambiguity for derived class HybridCalc.
        x = x1;
        s = c;
        y = y1;
    }

    void scientific(){
        int x1,y1;
        char c;
        cout<<"\nScientific Calculator:"<<endl;
        cin>>x1>>c>>y1;
        utility2(x1,c,y1);

        if(s == '^')
        cout<<pow(x,y);
    }

};

class HybridCalc : public SimpleCalc, public ScientificCalc
{
    public:
    ScientificCalc :: o;                           //Ambiguity resolved using ::    

    /*                                               Ambiguity resolution using :: for a method, if 'utility' was used for both class.
    void utility(){
        SimpleCalc :: utility()                      To set the hybridcalc object's utility() to SimpleCalc's utility()
        or
        ScientificCalc :: utility()                  To set the hybridcalc object's utility() to ScientificCalc's utility()

    }
    */
};

int main()
{
    HybridCalc ob;
    //ob.simple();
    //ob.scientific();
    cout<<ob.o;              
    return 0;
}