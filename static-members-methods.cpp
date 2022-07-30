#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"id : "<<id<<endl;
        cout<<"count : "<<count<<endl;
    }
    static void getCount(void){// it can not access normal members
        cout<<count<<endl;
    }
};

int Employee::count=0; // default 0 

int main()
{
    Employee e1;
    e1.setData();
    e1.getData();
    Employee e2;
    e2.setData();
    e2.getData();
    Employee::
    getCount();
    return 0;
}