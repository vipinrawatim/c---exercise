#include<iostream>
using namespace std;
void swap(string &a, string &b){
    string c=a;
    a=b;
    b=c;
}
int main () {
    string a="vipin";
    string b= "rawat";
    cout<<"the string before swap is "<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"the string after swap is "<<a<<" and "<<b<<endl;

    return 0;
}