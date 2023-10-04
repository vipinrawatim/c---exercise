#include <iostream>
using namespace std;
int main()
{
    int n;
    string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n;
    if (n >= 1 && n <= 9)
    {
        cout << s[n - 1];
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}