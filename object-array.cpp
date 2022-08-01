#include <iostream>
using namespace std;


class Employee
{
    int id;

public:
    void setData(void)
    {
        cin>>id;
    }
    // object as arg
    void setDataByObject(Employee e){
        id=e.id;
    }
    void getData(void){
        cout<<"id : "<<id<<endl;
    }
};

int main()
{
    Employee com[10];
    com[0].setData();
    com[0].getData();
    // object as arg
    com[1].setDataByObject(com[0]);
    com[1].getData();
    return 0;

}