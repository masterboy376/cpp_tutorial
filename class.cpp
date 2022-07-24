#include <iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d=4, e=5;
        void setData(int a1, int b1, int c1);// declaration
        void getData(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{

    Employee sam;
    // sam.a = 6;// private
    // sam.b = 8;// private
    // sam.c = 7;// private
    sam.d = 4;// public
    sam.e = 5;// public
    sam.setData(1,2,3);
    sam.getData();
    return 0;

}