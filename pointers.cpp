#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int* p = &a;
    int** pp = &p;

    cout<<"address of a is "<<p<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<*p<<endl;
    cout<<"value of a is "<<**pp<<endl;
    cout<<"address of p is "<<pp<<endl;

    return 0;

}