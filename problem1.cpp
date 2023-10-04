#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (a > 9 && b > 9)
    {
        for (int l = a; l <= b; l++)
        {
            cout << s[l - 1] << endl;
        }
    }

    if (a >= 1 && a <= 9)
    {
        if (a <= 9 && b <= 9)
        {
            for (int k = a; k <= b; k++)
            {
                cout << s[k - 1] << endl;
            }
        }
        else
        {
            for (int i = a; i <= 9; i++)
            {
                cout << s[i - 1] << endl;
            }

            for (int j = 10; j <= b; j++)
            {

                if (j % 2 == 0)
                {
                    cout << "even" << endl;
                }
                else
                {
                    cout << "odd" << endl;
                }
            }
        }
    }

    return 0;
}