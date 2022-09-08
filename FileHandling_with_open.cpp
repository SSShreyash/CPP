#include<iostream>
using namespace std;

#include<fstream>

//Important to use object_name.close() for both read/open and write else we can not run both in same program.

int main(){

//Writing to file.                
    string str = "Gomein Kudasai\nSenpai";
    ofstream out;
    out.open("f1.txt");                 //alternative to constructor call.
    out<<str;         
    out.close();            
//Open and read the file.

    string str2;      
    ifstream in("f1.txt");              //using constructor so close() needs to be invoked after use.
    // in>>str2;             //stores only the first string upto whitespace into str2.
    
    //eof() is end of file method.
    while(in.eof() == 0){           //will run for every string as they will end with 0.            
        getline(in,str2);           //to exclude space from terminating characters and print a line with spaces.
        cout<<str2<<endl;           //endl after printing one line.
    }
    in.close();
    return 0;
}