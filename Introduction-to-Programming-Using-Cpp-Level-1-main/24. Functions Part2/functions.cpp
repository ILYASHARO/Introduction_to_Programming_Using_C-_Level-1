//Made With Love By Ilyas Harou � 2025
#include <iostream>

using namespace std;

void my_procedure()
{
    cout << "This is my first procedure. Doestn't return value." << endl;
}

string my_function()
{
    return "This my first function returning string value.";
}

int my_int_function()
{
    int x = 10, y = 20;
    return x * y;
}

int main()
{
    my_procedure();
    cout << my_function() << endl;

    int result = my_int_function();
    cout << result << endl;

    return 0;
}