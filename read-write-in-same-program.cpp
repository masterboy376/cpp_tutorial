#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // connecting our file with fout stream
    ofstream fout("sample.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // writing a string to the file
    fout << name + " is my name";

    // disconnecting our file
    fout.close();
    // connecting our file with fin stream
    ifstream fin("sample.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    getline(fin, content);
    cout << "The content of the file is: " << content << endl;

    // disconnecting our file
    fin.close();
    return 0;
}
