#include <iostream>
using namespace std;

class Distens
{
public:
    int feet;
    int inches;
};

int main()
{
    Distens f1, f2;

    cout << "feet : ";
    cin >> f1.feet;
    cout << "inches :";
    cin >> f1.inches;
    // input 2
    cout << "feet";
    cin >> f2.feet;
    cout << "inches";
    cin >> f2.inches;
    f2.feet = f1.feet + f2.feet;
    f2.inches = f1.inches + f2.inches;

    for (; f2.inches >= 12;)
    {
        f2.feet = f2.feet + 1;
        f2.inches = f2.inches - 12;
    }
    cout << "feet=>" << f2.feet << "inches=>" << f2.inches;
}