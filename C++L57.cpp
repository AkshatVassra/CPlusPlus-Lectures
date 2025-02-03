#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Yo  bhai";
    // Opening files using constructor and writing it
    ofstream out("akshat.text"); // Write operation
    out<<st;

    return 0;
}
