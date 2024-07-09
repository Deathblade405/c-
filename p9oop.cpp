//OOP code without creating Constructor or Without having objects
#include<iostream>
using namespace std;

class Hello{
    public:
    static void printHello(){
        cout << "Hello" << endl;
    }
};

int main(){
    //Hello obj;
    Hello::printHello();
    //obj.printHello();
}