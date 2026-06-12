#include<iostream>
using namespace std;
int main(){
    int base , expo, power = 1;
    cout<<"enter the base =";
    cin>>base;
    cout<<"enter the expo = ";
    cin>>expo;
    for(int i = 1; i<=expo; i++){
        power *= base;

    }
    cout<< power<<endl;
}