#include<iostream>
using namespace std;
int main () {
    string s,f;
    int l=0,x,y;
    cout<<"enter the string : "<<endl;
    getline(cin,s);
    cout<<"enter the deleting word : "<<endl;
    getline(cin,f);
    string b=s;
    for(int i=0;i<s.length();i++){
        x=i;
        for (int k = 0; k < f.length(); k++)
        {
           
            if(s[i]==f[k]){
                l++;
                i++;
            }
        }
y=x+l;
        if(l==f.length()){
            for(x; x<y;x++){
                s[x]=' ';
            }
        }
    }
    cout<<"the string before deleting word "<<b<<endl;
    cout<<"the string after the deleting word "<<s<<endl;
    
    return 0;
}