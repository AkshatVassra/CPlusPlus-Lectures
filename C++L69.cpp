#include <iostream>
#include <list>
using namespace std;
void display(list<int> &listn)
{
    list<int>::iterator it;
    for (it = listn.begin(); it != listn.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int> :: iterator iter;
    // iter =list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // SORTING
    list1.sort();
    display(list1);
    list1.reverse();
    display(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(1);
    // display(list1);
    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    list1.merge(list2);
    cout << "list 1 after merging ";
    display(list1);
    return 0;
}