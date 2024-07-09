#include<iostream>
using namespace std;

class Addition{
    public:
    int add(int a, int b){
        return a+b;
    }
    float add(float a, float b){
        return a+b;
        //int add(int a, int b, int c){  <-- u can either use this or the above 2 lines
        //return a+b+c;
    }
};

int main(){
    Addition obj;
    cout << obj.add(1,2);
    cout << obj.add(1,2);
    //cout << obj.add(1,2,3);
    
}