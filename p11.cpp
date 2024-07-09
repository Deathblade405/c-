//calling default constructor instead of typing ur own constructor.
//when obj is created a default constructor is automatically called.
#include<iostream>
using namespace std;

class Demo{
    public:
    Demo(){ //default constructor
        cout << "iam a constructor !!";
    }
    ~ Demo(){ //default destructor
        cout << "iam a destructor !!";
    }
};

int main(){
    Demo obj;
    Demo obj1;
    Demo obj2;
}