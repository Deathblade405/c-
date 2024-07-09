#include<iostream>
using namespace std;

class vacation{
    public:
    string  Place;
    int cost;


    vacation(string Place, int cost){
        this->Place = Place;
        this->cost = cost;
    }
    void printDetails(){
        cout << "Place is : " << Place << endl;
        cout << "Cost is : " << cost << endl;
    }
};

int main(){
    vacation v1("maldives", 400000);
    vacation v2("paris", 500000);
    v1.printDetails();
    v2.printDetails();
    }