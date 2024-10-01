#include <iostream>
using namespace std;

class Shape
{

private:
    virtual void displayarea()
    {
        cout << "Area of shape is not defined" << endl;
    }
};

class Circle : public Shape
{
protected:
    double area, a, radius;
    char color[20];

public:
    void setcircledata()
    {
        cout << "Enter the color of rectangle: ";
        cin >> color;
        cout << "Enter the radius of circal: ";
        cin >> radius;
        a = radius * radius;
        area = 3.14 * a;
    }

    void getcircledata()
    {
        cout << "Color of rectangle: " << color << endl;
        cout << "radiua of circal: " << radius << endl;
        cout << "area of recrtangle :" << area << endl;
    }
};

class Rectangel : public Shape
{
protected:
    int length;
    int width;
    char color[30];

public:
    void setRectangeldata()
    {
        cout << "Enter the color of rectangle: ";
        cin >> color;
        cout << "Enter the length of rectangle: ";
        cin >> length;
        cout << "Enter the width of rectangle: ";
        cin >> width;
    }

    void getRectangeldata()
    {
        cout << "Color of rectangle: " << color << endl;
        cout << "Length of rectangle: " << length << endl;
        cout << "width of rectangle:" << width << endl;
        cout << "area of recrtangle :" << length * width;
    }
};

int main()
{
    Circle c1;
    Rectangel r2;
    int choice;

    cout << "1 -> circal" << endl;
    cout << "2 -> rectangle" << endl;
    cout <<"enter your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        c1.setcircledata();
        c1.getcircledata();
        break;
    case 2:
        r2.setRectangeldata();
        r2.getRectangeldata();
        break;
    default:
         cout <<"invalid choies..........."; 
        break;
    }
}