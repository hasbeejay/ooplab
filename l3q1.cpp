#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
};

int main(){
    Car carob1;
    carob1.brand = "Ford";
    carob1.model = "Mustang";
    carob1.year = 1969;
    Car carob2;
    carob2.brand = "Chevrolet";
    carob2.model = "Camaro";
    carob2.year = 1967;
    cout<<carob1.brand<<" "<<carob1.model<<" "<<carob1.year<<endl;
    cout<<carob2.brand<<" "<<carob2.model<<" "<<carob2.year<<endl;
    return 0;
}