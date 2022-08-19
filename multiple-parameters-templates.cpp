#include <iostream>

using namespace std;

template<class T1=char, class T2=float>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<this->data1<<" "<<this->data2<<endl;
    }
};

int main()
{
    myClass<int, char> obj(1, 'c');// custom params
    obj.display();

    myClass<> obj1('c', 1.2);// default params
    obj1.display();

    return 0;
}
