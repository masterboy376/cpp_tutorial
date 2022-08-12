#include <iostream>

using namespace std;

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j*i)
    // Test(int i, int j) : a(i), b(j+a)
    Test(int i, int j) : a(i+b), b(j) // garbage bcoz a is decleared first
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}