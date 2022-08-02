#include <iostream>

using namespace std;

class Complex{
    int a, b;
    public:
        // constructor  same name as class
        Complex(void); // we cannot refer to there address in con structors
        void getNum(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(void){
    int x, y;
    cin>>x;
    a = x;
    cin>>y;
    b = y;
}


int main()
{

    Complex c1;
    c1.getNum();
    return 0;

}