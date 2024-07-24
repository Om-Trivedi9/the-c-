#include <iostream>
using namespace std;

int main()
{

    int o, m, t = 0;

    cout << "Enter Starting year ";
    cin >> o;
    cout << "Enter Ending year : ";
    cin >> m;
    int leep[m - o];
    for (int i = o; i <= m; i++)
    {
        if (i % 4 == 0)
        {

            leep[t] = i;
            t++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << " %d\n", leep[i];
    }
}























