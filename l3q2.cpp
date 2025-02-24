#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;

public:
    void set_brand(string brand)
    {
        this->brand = brand;
    }
    void set_model(string model)
    {
        this->model = model;
    }
    void set_year(int year)
    {
        this->year = year;
    }

    string get_brand()
    {
        return brand;
    }
    string get_model()
    {
        return model;
    }
    int get_year()
    {
        return year;
    }
};

int main()
{
    Car car1;
    car1.set_brand("Ford");
    car1.set_model("Mustang");
    car1.set_year(1969);

    cout << car1.get_brand() << endl;
    cout << car1.get_model() << endl;
    cout << car1.get_year() << endl;

    Car car2;
    car2.set_brand("BMW");
    car2.set_model("X5");
    car2.set_year(1999);

    cout << car2.get_brand() << endl;
    cout << car2.get_model() << endl;
    cout << car2.get_year() << endl;
}