#include<iostream>
using namespace std;


class Car{
    public:
    string BrandName;
    int manuDate;

    //Car(string BrandName, int manuDate){
        //this->BrandName=BrandName;
        //this->manuDate =  manuDate; 

    Car(string BName, int mDate){
        BrandName=BName;
        manuDate = mDate ; 
    }
    void printDetails(){
        cout << "car name is :" << BrandName << endl;
        cout << "car manufacturing date is : " << manuDate << endl;
    }

};



int main(){
    Car c1("BMW",1995);
    Car c2("ambassdor",1992);
    c1.printDetails();
    c2.printDetails();
}