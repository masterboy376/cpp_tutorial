#include <iostream>
#include <list>
using namespace std;

// template <class T>
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{

    list<int> list1;
    list<int> list2(3); //size of seven

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    list1.sort();
    display(list1);

    list1.reverse();
    display(list1);

    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(1); //both one will be removed
    display(list1);

    display(list1);

    list<int> :: iterator iter;
    iter = list2.begin();
    *iter=1;
    iter++;
    *iter=2;
    iter++;
    *iter=3;

    display(list2);

    list1.merge(list2);
    cout<<"list 1 after merging"<<endl;
    display(list1);



    return 0;

}