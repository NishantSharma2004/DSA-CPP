#include<iostream>
using namespace std;
int main(){
    int a , b, op;
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Enter the operator (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): "; 
    cin>>op;

    switch(op){
        case 1:
            cout<<"Result ="<<a + b;
            break;
        case 2:
            cout<<"Result ="<<a - b;
            break;
        case 3:
            cout<<"Result ="<<a * b;
            break;
        case 4:
            if(b != 0){
                cout<<"Result ="<<a / b;
            } else{
                cout<<"Error: Division by zero is not allowed.";
            }
            break;
        default:
            cout<<"Invalid operator.";
        
            
    }
}