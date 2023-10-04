#include<iostream>
#include <cstring>
#include<string.h>
using namespace std;
int main()
{
    char str[50], str1[50];
    int i;
    cout << "\nEnter any String in Lowercase :: ";
    
    strcpy(str1, str);
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << "\nThe String [ " << str1 << " ] in Uppercase = [ " << str << " ]\n";
    return 0;
}