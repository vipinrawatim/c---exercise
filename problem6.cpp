#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.size();
    int l2 = s2.size();
    cout << l1 << " " << l2 << endl;
    cout << s1 + s2 << endl;
    char c = s1[0];
    s1[0] = s2[0];
    s2[0] = c;
    cout << s1 << " " << s2 << endl;

    return 0;
}