#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
    char name[20];
    char designation[40];
    int salary;

    public:
    void setdata()
    {
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"Enter Employee Designation: ";
        cin>>designation;
        cout<<"Enter Employee Salary: ";
        cin>>salary;
    }

    void getdata()
    {
        cout <<"employee name :"<<name<<endl;
        cout <<"employee designation :"<<designation<<endl;
        cout <<"employee salary :"<<salary<<endl;
    }
};




int main()
{
    Employee e1;
    e1.setdata();
    e1.getdata();
    return 0;
}