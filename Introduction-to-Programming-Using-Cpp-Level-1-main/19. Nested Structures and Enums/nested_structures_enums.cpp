//Made With Love By Ilyas Harou © 2025
#include <iostream>
using namespace std;

enum enStatus {single, married};

struct stAddress
{
    string street_name;
    string build_no;
    string zipcode;
};


struct stContactInfo
{
    string phone;
    string email;
    stAddress address;
};


struct stPerson
{
    string first_name;
    string last_name;
    stContactInfo contact_info;
    enStatus status;
};

int main()
{
    stPerson person;

    person.first_name = "Ilyas";
    person.last_name = "Harou";
    person.status = enStatus::single;
    person.contact_info.phone = "1556414758";
    person.contact_info.email = "harouilyas2@gmail.com";
    person.contact_info.address.build_no = "1";
    person.contact_info.address.street_name = "Tahway";
    person.contact_info.address.zipcode = "20000";

    cout << person.first_name << " " << person.last_name << endl;
    cout << "Contact Info: " << person.contact_info.phone << endl;

    return 0;
}