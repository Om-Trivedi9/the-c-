#include <iostream>
using namespace std;

class Time
{
public:
    int hour;
    int min;
    int sec;
};

int main()
{
    int t, hour = 0, min = 0;

    cout << "enter second :";
    cin >> t;

    for (; t >= 60;)
    {
        t = t - 60;
        min = min + 1;
    }

    for (; min >= 60;)
    {
        min = min - 60;
        hour = hour + 1;
    }

    cout << hour << ":"  << min << ":" << t;
}