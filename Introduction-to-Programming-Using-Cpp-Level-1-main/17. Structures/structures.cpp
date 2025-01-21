//Made With Love By Ilyas Harou © 2025
#include <iostream>
using namespace std;

struct stOwner
{
    string full_name;
    string phone;
};

struct Car
{
    string brand;
    string model;
    int year;
    stOwner owner;      // structure into structure
};

int main()
{
    Car mycar1, mycar2;
    mycar1.brand = "Awdi";
    mycar1.model = "Awdi A6 e-tron";
    mycar1.year = 2024;
    mycar1.owner.full_name = "Ilyas Harou";
    mycar1.owner.phone = "17436738383";

    mycar2.brand = "Mercdes";
    mycar2.model = "CLA";
    mycar2.year = 2022;
    mycar2.owner.full_name = "Ilyas Harou";
    mycar2.owner.phone = "10550905420";

    cout << mycar1.brand << " " << mycar1.model << " " << mycar1.year << " " << mycar1.owner.full_name << " " << mycar1.owner.phone << endl;
    cout << mycar2.brand << " " << mycar2.model << " " << mycar2.year << " " << mycar2.owner.full_name << " " << mycar2.owner.phone << endl;

    return 0;
}