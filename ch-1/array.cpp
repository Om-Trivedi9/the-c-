#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter array's size :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter arr[<< i + 1 <<]";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            cout << arr[i];
        }
    }
}
