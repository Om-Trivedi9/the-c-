#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>

class Employ
{
public:
    int id;
    int age;
    char name[70];
    char roal[70];
    int salery;
    char city[70];
    char expirianc[70];
    char company_name[70];
};

int main()
{
    int size;

    cout << "enter number of employ :";
    cin >> size;

    Employ e1[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter your id :";
        cin >> e1[i].id;
        cout << "enter your age :";
        cin >> e1[i].age;
        fflush(stdin);
        cout << "enter your name :";
        gets(e1[i].name);
        fflush(stdin);
        cout << "enter your roal for company :";
        gets(e1[i].roal);
        cout << "enter your salery:";
        cin >> e1->salery;
        fflush(stdin);
        cout << "enter your expirianc :";
        gets(e1[i].expirianc);
        fflush(stdin);
        cout << "enter your city :";
        gets(e1[i].city);
        cout << "enter your company name :";
        gets(e1[i].company_name);
    }

    system("cls");

    cout << "\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << "employ delails output\n\n";

        cout << "employ ID : " << e1[i].id << endl;
        cout << "employ Age : " << e1[i].age << endl;
        cout << "employ name : " << e1[i].name << endl;
        cout << "employ roal : " << e1[i].roal << endl;
        cout << "employ salery :" << e1[i].salery << endl;
        cout << "employ city : " << e1[i].city << endl;
        cout << "employ expirianc : " << e1[i].expirianc << endl;
        cout << "employ company name : " << e1[i].company_name << endl;

        printf("\n\n\n\n");
    }
}
