#include <iostream>
#include <string.h>
using namespace std;

class Company
{
public:
    int comp_id;
    char comp_name[70];
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo[70];

    Company(int id, char name[], int staff, int revenue, int inport_dimond, int export_dimond, char ceo)
    {
        cout << "enter company ID:";
        cin >> comp_id;
        cout << "enter company name:";
        cin >> comp_name;
        cout << "enter company staff quantity:";
        cin >> comp_staff_quantity;
        cout << "enter company revenue:";
        cin >> comp_revenue;
        cout << "enter company import raw diamonds:";
        cin >> comp_import_raw_diamonds;
        cout << "enter company export diamonds:";
        cin >> comp_export_diamonds;
        cout << "enter company CEO name:";
        cin >> comp_ceo;
        this->comp_id = id;
        strcpy(this->comp_name, comp_name);
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;
        strcpy(this->comp_ceo, comp_ceo);
    }
    void getdata()
    {
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Company Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Company Revenue: " << comp_revenue << endl;
        cout << "Company Import Raw Diamonds: " << comp_import_raw_diamonds << endl;
        cout << "Company Export Diamonds: " << comp_export_diamonds << endl;
        cout << "Company CEO Name: " << comp_ceo << endl;
    }
};

main()
{
    int n;
    cout << "enter number of companies: ";
    cin >> n;

    class Company c[n];

     
}