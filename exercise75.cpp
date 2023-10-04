#include<iostream>
#include<string>
using namespace std;
int main () {
    string n;
    cout<<"enter the string ";
    getline(cin,n);
    cout << "the string before removing vowel " << n<<"\n";
    for (int i=0;i<n.size()-1; i++)
    {
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u')
        {
            n[i]=n[i+1];
            n[i+1]=n[i+2];
        }
    }
    cout<<"the string after removing vowel "<<n;
    

    return 0;
}