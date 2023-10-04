#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    int a[n];
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    j = i - 1;

    for (j; j >= 0; j--)
    {
        cout << a[j] << " ";
    }

    return 0;
}