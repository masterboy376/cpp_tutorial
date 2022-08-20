#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> vec1(size); --> sizing vector
    // vector<int> vec2(vec1); --> creating vector from another vector
    // vector<int> vec2(6,3); --> vector of length 6 filled with 3s
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    vec1.pop_back();

    display(vec1);

    // insert at begin 
    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,566);

    display(vec1);

    // insert 5 copies from 2nd position
    vec1.insert(iter+1, 5, 566);

    display(vec1);
    return 0;
}
