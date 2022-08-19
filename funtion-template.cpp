#include <iostream>

using namespace std;

template <class T>
void swapp(T &a, T &b){
    cout<<"i am templatized"<<endl;
    T temp = a;
    a = b;
    b = temp;
}

void swapp(int &a, int &b){
    cout<<"i am original"<<endl;
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    float x = 4.0;
    float y = 7.6;
    swapp(x, y);// exact function  is always given the first priority
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;

    return 0;

}
