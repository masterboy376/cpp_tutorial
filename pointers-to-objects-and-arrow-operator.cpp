#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{

    // Complex c1;
    // Complex *ptr = &c1;

    // or

    Complex *ptr = new Complex;
    (*ptr).setData(1, 54);
    (*ptr).getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 4);
    ptr1->getData();
    return 0;
}
