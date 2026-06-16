#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,rev="";
    cout<<"enter the string =";
    getline(cin, s);   // 👈 space bhi read karega
    for(int i = s.length()-1; i>=0; i--){
        rev += s[i];
    }
    cout<<rev;

}