#include <iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
   
};
template <class T>
void Harry<T> :: display(){
    cout<<data;
}
void func(int a){
    cout<<" I am first "<<a<<endl;

}
template<class T>
void func(T a){
    cout<<" I am templated "<<a<<endl;

}
template<class T>
void func1(T a){
    cout<<" I am templated "<<a<<endl;

}
int main()
{
    // Harry<float> h(5.7);
    // cout << h.data << endl;
    // h.display();
    func(4);//exact match takes the highest priority
    func1(4); 
    return 0;
}
