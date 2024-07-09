#include<iostream>
#include<string.h>
using namespace std;
union student{
    char name[10];
    int usn;

 }s1,s2;

 int main(){
    strcpy(s1.name, "ajith");
    cout << "Student 1 Name : " << s1.name << endl;
    s1.usn = 123;
    cout << "Student 1 USN : " << s1.usn << endl;

    strcpy(s2.name, "ajii");
    cout << "Student 2 Name : " << s2.name << endl;
    s2.usn = 456;
    cout << "Student 2 USN : " << s2.usn << endl;
 }


 //in union print output after initializing itself and in structure its not needed u can print after everything is initialized