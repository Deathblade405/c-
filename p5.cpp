#include<iostream>
using namespace std;

int main(){
    int i = 50;
    int *ptr;
    int **dptr;
    int ***ddptr;
    int ****dddptr;
    ptr = &i;
    dptr = &ptr;
    ddptr = &dptr;
    dddptr = &ddptr;
    cout << *ptr << endl;
    cout << **dptr << endl;
    cout << ***ddptr << endl;
    cout << ****dddptr << endl;

}