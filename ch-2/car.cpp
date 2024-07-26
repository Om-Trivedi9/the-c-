#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>

class car
{
public:
    int id;
    char company_name[70];
    char car_color[70];
    char car_model[70];
    int release_year;
};

int main()
{
    int size;

    cout << "enter number of car :";
    cin >> size;

    car c1[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter your car id :";
        cin >> c1[i].id;
        cout << "enter car release year :";
        cin >> c1[i].release_year;
        fflush(stdin);
        cout << "enter your company name :";
        gets(c1[i].company_name);
        fflush(stdin);
        cout << "enter car color :";
        gets(c1[i].car_color);
        fflush(stdin);
        cout << "enter car model:";
        gets(c1[i].car_model);
    }

    system("cls");

    cout << "\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << "employ delails output\n\n";

        cout << "car ID : " << c1[i].id << endl;
        cout << "car company name : " << c1[i].company_name << endl;
        cout << "car color : " << c1[i].car_color << endl;
        cout << "car model : " << c1[i].car_model << endl;
        cout << "car release year :" << c1[i].release_year << endl;

        printf("\n\n\n\n");
    }
}
