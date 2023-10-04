#include<iostream>
using namespace std;
int main () {
    int n;
    int size;
    int t;
    cout<<"enter the size of an array ";
    cin>>n;
    size=n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element at index "<<i<<" ";
        cin>>arr[i];
    }
    cout<<"the array before reverse ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" , ";
        
    }
    cout<<endl;
    for (int i = 0; i<n; i++)
    {
       if(i!=n/2){
        t=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=t;
        n--;
       }
    }
    cout<<"the array after reversed ";
    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " , ";
    }

    return 0;
}