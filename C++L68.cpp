#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cut<<"displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
       // cout<<v.at(i)<< " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; //zero length vector 
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> v(6,3);
    display(vec2);

    int element,size=5;
    // cout<<"enter the size of vector"<<endl;
    // cin>>size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter teh element to add to this vector";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    vector<int> vec2;
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,5,566);
    display(vec1);
    return 0;
}