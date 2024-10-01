#include <iostream>
using namespace std;

class Rectangel
{
private:
    int length;
    int width;

public:
    void setdata()
    {
        cout << "Enter the length of rectangle: ";
        cin >> length;
        cout << "Enter the width of rectangle: ";
        cin >> width;
    }

    void getdata()
    {
        cout << "Length of rectangle: " << length << endl;
        cout << "width of rectangle:" << width << endl;
        cout << "area of recrtangle :" << length * width;
    }
};

int main()
{
    Rectangel r1;

    r1.setdata();
    r1.getdata();
}