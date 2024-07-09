#include<iostream>
using namespace std;

class India{
    public:
    void capital(){
        cout << "New Delhi" << endl;
    }    
};

class USA{
    public:
    void capital(){
        cout << "Washington D.C" << endl;
    }
};

int main(){
    India objI;
    USA objU;

    objI.capital();
    objU.capital();
}