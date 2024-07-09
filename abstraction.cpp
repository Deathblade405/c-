#include<iostream>
using namespace std;

class Student{
    private:
    int marks;


    public:
    string name;
    int usn;

    public:
    Student(string n, int u, int m){
        name = n;
        usn = u;
        marks = m;
    }
};

    int main(){
        Student s1("ajith",123,456);
}

