#include <iostream>
using namespace std;

class X
{
public:
    int a, b, c;

    void setA()
    {
        cout << "enter value of A :";
        cin >> a;
        cout << "enter the value of B :";
        cin >> b;
        cout << "enter the value of C :";
        cin >> c;
    }
};
class Y : public X
{

public:
    void getdataA()
    {
        cout << " sum of all value of : " << a << '+' << b << '+' << c << endl;
        cout << a + b + c;
        cout << endl
             << endl;
        
        cout<<"cube of all"<<endl;
        cout << "cube of A :";
        cout << a * a * a;
        cout << endl;
        cout << "cube of B :";
        cout << b * b * b;
        cout << endl;
        cout << "cube of C :";
        cout << c * c * c;
        cout << endl;
    }
};

int main()
{
    Y y1;

    y1.setA();
    y1.getdataA();
}
