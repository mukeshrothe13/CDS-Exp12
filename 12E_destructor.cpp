//Mukesh Rothe 23070123089 EXP12
#include<iostream>
using namespace std;
class MyClass{
    public:
    ~MyClass(){
        cout<<"Destructor called!"<< endl;
    }
    MyClass(){
        cout<<"Constructor called!"<<endl;
    }
    };
    int main(){
        MyClass obj;
        return 0;
    }
