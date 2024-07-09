#include<iostream>
using namespace std;

class Mom{
    public:
    void cook(){
        cout << "....cooking....";
    }
};

class Dad{

    public:
    void drive(){
        cout <<  "....driving....";
    }
       void cook(){
        cout <<  "....cooking....";
    }
};



class child : public Mom, public Dad{
    public:
    void study(){
        cout <<  "....studying....";
    }
};



int main(){
    Mom m;
    m.cook();

    Dad d;
    d.drive();
    d.cook();

    child c;
    c.Mom::cook();    //ambiguity resolution!!(when there are same 2 class name u use scope resolution operator)
    c.Dad::cook();    //ambiguity resolution!!
    c.drive();
    c.study();
}