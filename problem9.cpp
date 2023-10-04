#include <iostream>
using namespace std;

int main()
{
    int x, i;
    int a[5];
    for (i = 0; i < 5; i++)
    {
        cout << "enter the value at index " << i<< " ";
        cin >> a[i];
    }

    cout << "enter the number for search ";

    cin >> x;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == x)
        {
            cout << "the number is found at index " << i;
            break;
        }
    }
    if (i > 4)
    {
        cout << "the number is not found";
    }

    return 0;
}