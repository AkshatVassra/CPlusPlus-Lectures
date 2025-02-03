#include <iostream>
using namespace std;

 typedef struct employee
{
    int eID;
    char favchar;
    float salary;

} ep;
union money   //memory sharing one at a time.
{
    int rice;  //4    //Only highest memory will be allocated.
    char car;  //1
    float pounds;  //4
};

int main()
{
    enum meal{breakfast,lunch,dinner};
    meal m1 =lunch;
    cout<<m1<<endl;
    cout<<(m1==3)<<endl;
    //cout<<breakfast;
   // cout<<lunch;
   // cout<<dinner;
   //ep Akshat;
   //union money m1;
   //m1.rice =34;
   //m1.car ='c';
   //cout<<m1.car;
   // struct employee Shubham;
    //Akshat.eID=1;
   // Akshat.favchar='c';
   // Akshat.salary=12000;
   // cout<<Akshat.salary<<endl;
   // //cout<<Akshat.favchar<<endl;
    //cout<<Akshat.eID<<endl;
  
return 0;
}



