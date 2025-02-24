#include<iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    void set_Brand(string brand)
    {
        this->brand = brand;
    }
    void set_Model(string model)
    {
        this->model = model;
    }
    void set_Year(int year)
    {
        this->year = year;
    }

    string get_Brand();
    string get_Model();
    int get_Year();
};



