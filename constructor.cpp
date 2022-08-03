#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

    friend void printDis(Point p1, Point p2);

public:
    // constructor must have same name as of class
    Point(int a, int b); // we cannot refer to address of any variable in constructors
    Point(int a);
    Point(void);

    void getNum(void)
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// constructor overloading
Point ::Point(int a, int b)
{
    x = a;
    y = b;
}
Point ::Point(int a)
{
    x = a;
    y = 0;
}
Point ::Point(void)
{
    x = 0;
    y = 0;
}
// Point(int a, int b=0);// default values are also possible in constructor

void printDis(Point p1, Point p2)
{
    float dis = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    cout << dis << endl;
}

int main()
{

    Point p1(1, 2), p2(3), p3;
    p1.getNum();
    p2.getNum();
    p3.getNum();
    printDis(p1, p2);
    return 0;
}