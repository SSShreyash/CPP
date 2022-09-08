#include<iostream>
using namespace std;
#include<fstream>

/* fstream header has 3 classes with fstream as a base class and 
    1. ifstream
    2. ofstream 
    as 2 derived classes.
    So, we can create objects of derived class and use 
    ofstream object to write and 
    ifstream object to read.
    */

//Important to use object_name.close() for both read/open and write else we can not run both in same program.

int main(){

//Writing to file.               //Creates a file if filename doesn't exist.  
    string str = "Gomein Kudasai";
    ofstream out("f1.txt");       //The constructor takes filename as argument.
    out<<str;                    //Deletes the file content and writes only the str to file. 

    out.close();                //Important to close the file.
//Open and read the file.         //This will work only if a file already exists. 
                                  //Only 'writing' to a non-existing file can create a new file. 
    string str2;          //File reading would return a string to be stored here.

    ifstream in("f1.txt");         //Constructor takes filename as argument.
//For single word file.
    // in>>str2;             //stores only the first string upto whitespace into str2.
    
//For file with multiple words.
    getline(in,str2);     //to store one line into str2 including spaces.
    cout<<str2<<endl;
    getline(in,str2);     //invoking 2nd time will store the 2nd line in str2.       
    cout<<str2;           //will print the first line once again if only one line present in file.
    in.close();                 //Closes the file after use.
    return 0;
}