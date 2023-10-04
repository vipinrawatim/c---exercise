#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s{};
    cout << "enter the string ";
    getline(cin, s);
    int w = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            w++;
        }
    }
    cout << "te words in above string is : " << w;

    return 0;
}