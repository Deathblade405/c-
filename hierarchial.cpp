#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "....eating....";
    }
      void run(){
        cout << "....running....";
    }
};

class Dog : Animal{

    public:
    void bark(){
        cout <<  "....Bow Bow....";
    }
};
class BabyDog : Dog{
    public:
    void cry(){
        cout <<  "....cry....";
    }
};

class Cat : public Animal{
    public:
    void meow(){
        cout << "...meow meow..";
    }
};

int main(){
    Animal a;
    a.eat();
    a.run();
    Dog d;
    d.bark();
    BabyDog b;
    b.cry();
    Cat c;
    c.meow();
}