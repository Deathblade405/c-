#include<iostream>
using namespace std;

//malloc and calloc
int main(){
    int *ptr = new int;
     

     free(ptr);
     ptr=NULL;
}