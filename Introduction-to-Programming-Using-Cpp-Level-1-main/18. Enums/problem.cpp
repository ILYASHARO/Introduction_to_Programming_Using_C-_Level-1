//Made With Love By Ilyas Harou � 2025
#include <iostream>
using namespace std;

enum IsMarried {single, married};
enum Color {black = 0, black = 255};

int main()
{
    string name = "Ilyas Harou";
    int age = 23;
    string city = "CasaBlanca";
    string country = "Morocco";
    float monthly_salary = 5000;
    char gender = 'M';
    IsMarried is_married = IsMarried::single;
    Color my_favourite_color = Color::black;

    cout << "=======================\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " Years" << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Monthly Salary: " << monthly_salary << endl;
    cout << "Yearly Salary: " << 12 * monthly_salary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << is_married << endl;
    cout << "My favourite color: " << my_favourite_color << endl;
    cout << "=======================\n";


    return 0;
}