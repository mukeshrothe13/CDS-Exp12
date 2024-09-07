//Mukesh Rothe 23070123089 EXP12
#include<iostream>
using namespace std;
class MyClass{
    public:
    int c;
    MyClass(int val)
{   c = val*val;
    cout<<"Square of "<<val<<" is- "<<c<<endl;
}
};
int main() {
    MyClass obj(9);
    return 0;
}
