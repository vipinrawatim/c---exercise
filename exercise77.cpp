#include<iostream>
using namespace std;
int main () {
    int size;
    cout<<"enter the size of an array ";
    cin>>size;
    int arr[size];
     for(int i=0; i<size;i++){
        cout<<"enter the element at index : ";
        cin>>arr[i];
     }
     for(int i=0;i<size;i++){
        if(i==0){
            cout<<"the first element is "<<arr[i]<<endl;
        }
        else if(i==size-1){
            cout<<"the last element is "<<arr[i];
        }
     }
    return 0;
}