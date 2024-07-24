#include <iostream>
#include <string>
using namespace std;

class carmlodel
{
private:
    char name[70];
    int age;

public:
    char car_name[70];
    char model[70];
    int year;
};

int main()
{
    carmlodel c1;
    int size;
    cout << "Enter the number of car's :";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        fflush(stdin);
        cout << "Enter the name of the car :";
        gets(c1.car_name);
        fflush(stdin);
        cout << "Enter the car's model :";
        gets(c1.model);
        cout << "Enter the car year :";
        cin >> c1.year;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "The car name is :" << c1.car_name << endl;
        cout << "The car's model is :" << c1.model << endl;
        cout << "The car publish year :" << c1.year << endl;
    }
}