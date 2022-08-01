#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public: 
        void setNum(int n1, int n2){
            a=n1;
            b=n2;
        }
        void getNum(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        
        // static Complex sumComplex(Complex c1, Complex c2){
        //     Complex c3;
        //     c3.setNum((c1.a + c2.a), (c1.b + c2.b));
        //     return c3;
        // }

        //or

        friend Complex sumComplex(Complex c1, Complex c2);
};

Complex sumComplex(Complex c1, Complex c2){// this is not a member function just a friend function.
            Complex c3;
            c3.setNum((c1.a + c2.a), (c1.b + c2.b));
            return c3;
        }

int main()
{
    Complex c1, c2, c3;
    c1.setNum(1, 4);
    c2.setNum(5, 8);
    c1.getNum();
    c2.getNum();

    c3 = sumComplex(c1,c2);
    c3.getNum();

    return 0;
}