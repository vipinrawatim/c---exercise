#include<iostream>
#include<string>
using namespace std;
int main () {
    string n;
    cout<<"enter the string "<<endl;
    getline(cin,n);
    for(int i=0;i<n.size();i++){
        if((n[i]>='a' || n[i]>='A' ) && (n[i]<='z' || n[i]<='Z')){

        }
        else{
            n[i]=' ';
        }
    }
    cout<<"the remaining string is "<<n;
    return 0;
}