#include<iostream>
using namespace  std;
int main(){
    int i=50;
    int *ptr;
    ptr = nullptr;
    cout << i << endl;
    cout << ptr << endl;
    cout << &i << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
}