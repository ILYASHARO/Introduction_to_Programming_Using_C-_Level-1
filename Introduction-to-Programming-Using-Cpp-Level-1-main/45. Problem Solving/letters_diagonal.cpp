//Made With Love By Ilyas Harou � 2025
#include <iostream>

using namespace std;

int main()
{
    for (int i = 65; i <= 70; i++)
    {
        int counter = 1;
        for (int j = 65; j <= i; j++)
        {
            cout << char(j) << " ";
        }

        cout << endl;
    }
    return 0;
}