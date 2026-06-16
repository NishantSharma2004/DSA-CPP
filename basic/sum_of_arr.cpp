#include<iostream>
using namespace std;
int main(){
    int sum = 0, i,n;
    cout<<"enter the size of array =";
    cin>>n;
    int arr[n];
    for(i = 0; i<=n-1; i++){
        cout<<"enter the value of arr=";
        cin>>arr[i];


    }
    for(i = 0; i<=n-1; i++){
        sum+=arr[i];


    }
    cout<<"sum ="<<sum;


}