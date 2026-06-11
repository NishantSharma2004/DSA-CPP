#include<iostream>
using namespace std;
int main(){
    int fact , i, n;
    cout<<"enter the number =";
    cin>>n;
    fact = 1;
    for(i = 1 ; i<=n; i++){
        fact*=i;

    }
    cout<<fact;
}