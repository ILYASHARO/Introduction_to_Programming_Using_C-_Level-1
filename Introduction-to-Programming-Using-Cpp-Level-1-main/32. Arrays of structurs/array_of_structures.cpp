//Made With Love By Ilyas Harou © 2025
#include <iostream>

using namespace std;

struct stInfo
{
    string first_name;
    string last_name;
    int age;
    string phone;
};

int main()
{
    stInfo person[2];

    person[0].first_name = "Ilyas";
    person[0].last_name = "Harou";
    person[0].age = 23;
    person[0].phone = "1543572538";

    person[1].first_name = "Ilyas";
    person[1].last_name = "Harou";
    person[1].age = 29;
    person[1].phone = "1043092320";

    cout << person[1].first_name << endl;

    return 0;
}