#include<iostream>
#include<string>
using namespace std;
int main(){
    string s , rev="";
    cout<<"enter string =";
    cin>>s;
    for(int i = s.length()-1; i>=0; i--){
        rev+= s[i];

    }
    if (s == rev ){
        cout<<"string is palindrome";
    }else{
        cout<<"string is not palindrome";
    }

}