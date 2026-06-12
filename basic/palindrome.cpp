#include<iostream>
using namespace std;
int main(){
    int n,rev=0, last_digit;
    cout<<"enter the number =";
    cin>>n;
    int original = n;
    while(n>0){
        last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n /= 10;

    }
    if (original == rev ){
        cout<<"It is palindrome";

    }else{
        cout<<"not palindrome";
    }

}