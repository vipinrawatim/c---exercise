#include<iostream>
using namespace std;
int main () {
    int max=0;
    int arr[5]={22,33,54,1,599};
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"the max value in an array is "<<max;

    return 0;
}