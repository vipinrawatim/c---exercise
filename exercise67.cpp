#include<iostream>
#include<string>
using namespace std;
int main () {
 string s;
 int v,c,d,space;
 v=c=d=space=0;
 cout<<"enter the string "<<endl;
getline(cin,s);

 for(int i=0; i<s.size();i++){
     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
        v++;
     }
    //  else if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '10'){
    //     d++;
    //  }
    else if(s[i]>='0' && s[i]<='9'){
        d++;
    }
 
 else if(s[i]==' '){
    space++;
 }
 else{
    c++;
 }
}
cout<<"the vowels in "<<s<<" is "<<v<<endl;
cout<<"the consonants in "<<s<<" is "<<c<<endl;
cout<<"the digit in "<<s<<" is "<<d<<endl;
cout<<"the spaces in "<<s<<" is "<<space<<endl;

}