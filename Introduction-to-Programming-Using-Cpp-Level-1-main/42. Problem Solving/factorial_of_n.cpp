//Made With Love By Ilyas Harou � 2025
#include <iostream>

using namespace std;

int main()
{
    int number;
    int factorial = 1;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = number; i >= 1; i--)
    {
        factorial *= number;
        number--; 
    }
    
    cout << factorial << endl;

    return 0;
}