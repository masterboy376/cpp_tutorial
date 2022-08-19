#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // string st = "super sam";
    // // Opening files using constructor and writing it
    // ofstream out("sample.txt"); // Write operation
    // out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample.txt"); // Read operation
    // in>>st2;
    getline(in, st2);  
    cout<<st2<<endl;

    return 0;
}
