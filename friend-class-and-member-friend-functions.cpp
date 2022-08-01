#include <iostream>
using namespace std;

class Complex;

class Calcu{
    public:
        int add(int a, int b){
            return a+b;
        }
        int sumRealComplex(Complex c1, Complex c2);
};

class Complex{
    int a, b;

    // friend int Calcu::sumRealComplex(Complex c1, Complex c2);// individually
    //or
    friend class Calcu;// entire Calcu is friend

    public: 
        void setNum(int n1, int n2){
            a=n1;
            b=n2;
        }
        void getNum(void){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calcu::sumRealComplex(Complex c1, Complex c2){// this is not a member function just a friend function.
            return (c1.a+c2.a);
        }

int main()
{

    Complex c1, c2;
    Calcu a;

    c1.setNum(1, 4);
    c2.setNum(5, 8);

    int sum = a.add(1,2);
    cout<<sum<<endl;

    int sumComplexReal = a.sumRealComplex(c1, c2);
    cout<<sumComplexReal<<endl;

    return 0;

}