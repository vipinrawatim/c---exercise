#include<iostream>
#include<string>
using namespace std;
int main () {
    string s;

    cout<<"enter the string ";
    getline(cin,s);
    cout << "the string before removing spaces " << s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            s[i]=s[i+1];
        }
    }
    cout<<"the string after removing spaces "<<s;
    return 0;
}