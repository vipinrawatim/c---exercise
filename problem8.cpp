#include <iostream>
#include <array>
using namespace std;
class student
{

public:
    int scores[5];
    void input(int x[])
    {
        for (int i = 0; i < 5; i++)
        {
            scores[i] = x[i];
        }
    }
    int calculatetotal_scores()
    {
        int d = 0;
        for (int i = 0; i < 5; i++)
        {
            d += scores[i];
        }
        return d;
    }
};
int main()
{
    int num;
    cout << "enter the number of students ";
    cin >> num;
    student obj;
    int x[5], y[5], z[5];
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "enter the 1st student number of " << j + 1 << " subject ";
                cin >> x[j];
            }
        }
        else if (i == 1)
        {
            cout << endl;
            for (int j = 0; j < 5; j++)
            {
                cout << "enter the 2nd student number of " << j + 1 << " subject ";
                cin >> y[j];
            }
        }
        else if (i == 2)
        {
            cout << endl;
            for (int j = 0; j < 5; j++)
            {
                cout << "enter the 3rd student number of " << j + 1 << " subject ";
                cin >> z[j];
            }
        }
    }
    obj.input(x);
    int s = obj.calculatetotal_scores();
    obj.input(y);

    int s1 = obj.calculatetotal_scores();
    obj.input(z);

    int s2 = obj.calculatetotal_scores();
    if (s1 > s)
    {
        cout << "1";
    }
    else if (s2 > s)
    {
        cout << "1";
    }
    else if (s1 > s && s2 > s)
    {
        cout << "2";
    }
    else if (s > s2 && s > s1)
    {
        cout << "0";
    }

    return 0;
}