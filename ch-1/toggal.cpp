#include <iostream>
using namespace std;

int main()
{
    char name[70];
    cout << "enter the string :";
    cin >> name;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }

        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }

    cout << name;
}
