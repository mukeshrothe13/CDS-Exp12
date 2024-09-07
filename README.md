## AIM

To learn about constructors and destructors in C++.

## Software Used

- VS Code

## Problem Statements

1. **Constructor Definition**: Write a C++ program to define a constructor.
2. **Parameterized Constructor**: Write a C++ program using a parameterized constructor.
3. **Copy Constructor**: Write a C++ program using a copy constructor.
4. **Default Argument**: Write a C++ program demonstrating default arguments in constructors.
5. **Rectangle Area Calculation**: Write a C++ program to calculate the area of a rectangle using a class.
6. **Destructor**: Write a C++ program using a destructor.

## Theory

### Constructor

A constructor is a special member function of a class that has the same name as the class itself. It is used to initialize objects of the class and allocate memory. Constructors can be parameterized or non-parameterized and can be overloaded but not inherited or virtual. They are automatically called when an object is created.

### Destructor

A destructor is a special member function of a class that has the same name as the class, preceded by a tilde (`~`) symbol. It is used to deallocate memory and clean up resources when an object is destroyed. Unlike constructors, there can only be one destructor in a class, and it cannot take parameters or be overloaded. Destructors are invoked in the reverse order of constructors. When a class is inherited, the child class's destructor is called first, followed by the base class's destructor.

## Program Codes

```javascript
//Mukesh Rothe  23070123089 EXP12
#include<iostream>
using namespace std;
class MyClass{
    private:
    int l;
    int b;
    public:
int x,y;
void getinput()
         { 
            cout<<"Enter the length and breadth respectively-"<<endl;
            cin>>x>>y;
         }
         void display()
         { int a;
         l=x;
         b=y;
         a = l*b;
         cout<<"Area of the rectangle is: "<< a<< endl;
         }
};
int main(){    
    MyClass obj1;
    obj1.getinput();
    obj1.display();
    return 0;
}
```
```javascript
//Mukesh Rothe 23070123089  EXP12
#include<iostream>
using namespace std;
class MyClass{
    public:
    string a;
MyClass(){
    cout<<"Enter your name: "<<endl;
    cin>>a;
    cout<<"Hello "<<a<< ", from Constructor!"<<endl;
}
};
int main(){
    MyClass obj;
    return 0;
}
```
```javascript
//Mukesh Rothe 23070123089 EXP12
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Pink Floyd were established in the year- "<<value<<endl;
    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<"Second Indo-Pak war happened in the year- "<<value<<endl;
    }
};
int main(){
    MyClass obj1(1965);
    MyClass obj2 = obj1 ;
    return 0;
          }
```
```javascript
//Mukesh Rothe 23070123089 EXP12
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value1;
    int value2;
    string str1;
    public:   
    MyClass( int val1= 0, int val2= 0, string a = "none"){
        str1 = a;
        value1= val1;
        value2 = val2;
        cout<<str1<<" played "<<value1<<" ODI matches."<<endl;
        cout<<"He scored "<< value2 << " centuries."<<endl;
    }
};
int main(){
    MyClass obj1(463,49, "Sachin Tendulkar");
    return 0;
    }
```
```javascript
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
```
```javascript
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
```

## Output
Area-

![Screenshot 2024-09-07 215658](https://github.com/user-attachments/assets/7dade227-cba1-485e-a563-4a604da25b73)

Constructor-

![Screenshot 2024-09-07 215727](https://github.com/user-attachments/assets/8e18a5f7-9d66-45e6-b3ca-ab37eef6db68)

Copy Constructor-

![Screenshot 2024-09-07 215948](https://github.com/user-attachments/assets/26ce9037-8cf7-4907-8656-42fa8752be61)

Default Arguments-

![Screenshot 2024-09-07 220211](https://github.com/user-attachments/assets/619db6e2-be11-4456-865e-09779df11abe)

Destructor-

![Screenshot 2024-09-07 220358](https://github.com/user-attachments/assets/2ed13fcf-4be4-4bb2-bacd-b3e36f32e4b2)

Parameterized Constructor-

![Screenshot 2024-09-07 220602](https://github.com/user-attachments/assets/a3e0a6c5-147a-484d-a6df-03e43ef0b94d)

## Conclusion

- **Constructor**: We learned to define and use constructors, including parameterized constructors.
- **Copy Constructor**: We explored the concept of copy constructors.
- **Default Arguments**: We learned to use default arguments in constructors.
- **Destructor**: We studied the role and usage of destructors in managing object lifecycle.
