// program to take a input of age , name and brach as input 

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int age;
//     string name;
//     string branch;
//     cout<<"Enter your age = ";
//     cin>>age;
//     cout<<"\n Enter your name =";
//     cin>>name;
//     cout<<"\n Enter the branch =";
//     cin>>branch;
//     cout<<"your age is "<<age<<" and "<<"your name is "<<name<<" and "<<"your branch is "<<branch<<endl;
// // }

// #include<iostream>
// using namespace std;

// int main() {
//     int a, b, c, n;
//     cout << "Enter the value of n = ";
//     cin >> n;

//     a = 0;
//     b = 1;

//     for (int i = 0; i < n; i++) {
//         cout << a << " ";
//         c = a + b;
//         a = b;
//         b = c;
//     }
// }

// write a program to swap two number without using third number
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the value of a =";
//     cin>> a;
//     cout<<"enter the value of b = ";
//     cin >> b;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout<<"the value of a = "<<a <<" "<<"the value of b = "<<b<<endl;

// }
// area of circle
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     double area;
//     float pie = 3.14;
//     cout<<"enter the value of r";
//     cin>>r;
//     area = pie * (r*r);
//     cout<<"area"<<area<<endl;

// }

// write a program to check whether a number is positive , negative or zero.
// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"enter the number";
//     cin>>number;
//     if (number > 0) {
//         cout<<"Given number is positive ";
//     } else if(number<0){
//         cout<<"Given number is negative ";

//     }else{
//         cout<<"Given number zero";
//     }

// }


// Write a program to print first 10 natural numbers using a loop.
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n;
//     cout<<"enter the value of n = ";
//     cin>>n;
//     i = 0;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;

//     }

// }   
//write a program to find some of digits of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     int last_digit;
//     int digit;
//     cout<<"enter the value of digit";
//     cin>>digit;
//     while(digit != 0){
//         last_digit = digit % 10;
//         sum = sum + last_digit;
//         digit = digit / 10;
//     }
//     cout<<"the sum of digit is "<<sum<<endl;
// }

// write a program to find factorial of a number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int factorial = 1;
//     cout<<"enter the value of n ";
//     cin>>n;
//     for(int i =1; i<=n; i++){
//         factorial = factorial * i;
        
//     }
//     cout<<"factorial ="<<factorial<<" of n "<<n;
// }

//  Write a function to find maximum of two numbers.
//  Write a function to check even or odd.
//  
// #include<iostream>
// using namespace std;
// int maxnum (int a , int b){
//         if (a > b){
//             cout<<"a is grater than b";
//         }else if(a==b){
//             cout<<"a is equal  b";

//         }else{
//             cout<<"b is greater than a ";
//         }
//     }
// int main(){

//     int a , b;
//     cout<<"enter the value of a :";
//     cin>>a;
//     cout<<"enter the value of b";
//     cin>>b;
//     maxnum( a , b);
// }

// // Write a function to check even or odd.
// #include<iostream>
// using namespace std;
// int even_odd(int a){
//     if (a != 0){
//          if (a % 2 == 0){

//         cout<<"this is even ";
//     }else{
//         cout<<"this is odd";
//     }

//     }
   
// }

// int main(){
//     int a;
//     cout<<"enter the value of a =";
//     cin>>a;
//     even_odd(a);
// }

// Write a function that returns factorial of a number.
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     int i;
//     for(i = 1; i <= n; i++){
//         fact = fact * i;

//     }
//     cout<<"factorial = "<<fact;
// }
// int main(){
//     int n;
//     cout<<"enter the value of factorial ";
//     cin>>n;
//     factorial(n);

// }

//                                                                                      array

//Write a program to calculate sum of all elements in an array

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int a[n];
//     for(int i = 0; i <= n; i++){
//         cout<<"enter the value of a["<<i<<"] : ";
//         cin>>a[i];
//     }
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += a[i];
//     }
//     cout<<"Sum of all elements in the array is: "<<sum<<endl;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter the value of a: ";
//     cin >> a;

//     cout << "Enter the value of b: ";
//     cin >> b;

//     c = a + b;   // Correct place
  
//     cout << "a++ = " << a++ << endl;
//     cout << "Now a = " << a << endl;
//     cout << "Again a = " << a << endl;

//     cout << "c = " << c << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the value of n";
// cin>>n;
// if (n >=100 && n <=999){
//     cout<<"this is a three digit number";
// }else{
//     cout<<"this is not a three digit number";

// }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value to check whether it is divisible by 5 and 3 ";
//     cin>>n;
//     if (n % 5 == 0){
//         cout<<"this number is divisible by 5"<<endl;
//     }else if(n % 3 ==0){
//         cout<<"this number is divisible by 3"<<endl;
    
//     }
//     else {
//         cout<<"this number is not divisible by 5 and 3"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a , b , c;
//     cout<<"enter the value of a ";
//     cin>>a;
//     cout<<"enter the value of b ";  
//     cin>>b;
//     cout<<"enter the value of c ";
//     cin>>c;
//     if (a>b && a>c){
//         cout<<"a is the greatest number"<<endl;
//     }else if(b>c){
//         cout<<"b is greater "<<endl;

//     }else{
//         cout<<"c is greater number";
//     }
// }


// #include<iostream> 
// #include<string> 
// using namespace std; 
// int main() { 
    // int year; // Renamed variable 'a' to 'year' for better readability
    // cout << "Enter the year you want to check: "; 
    // cin >> year; 
    
    // // Corrected leap year logic using modulo operator (%) and the correct boolean operators (&&, ||)
    // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { 
    //     cout << year << " is a leap year."; 
    // } else { 
    //     cout << year << " is not a leap year."; 
    // } 
    
    // return 0; // Added return statement
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, choice;

//     cout << "Enter value of a: ";
//     cin >> a;

//     cout << "Enter value of b: ";
//     cin >> b;

//     cout << "Select operation:\n";
//     cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             cout << "Addition = " << a + b;
//             break;

//         case 2:
//             cout << "Subtraction = " << a - b;
//             break;

//         case 3:
//             cout << "Multiplication = " << a * b;
//             break;

//         case 4:
//             cout << "Division = " << a / b;
//             break;

//         default:
//             cout << "Invalid choice";
//     }

//     return 0;
// }
//  write a program to print the day acc to number in a week
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter the value =";
//     cin>>n;
//     int count = 0;
//     while (n != 0){
//         n /= 10;
//         count++;

//     }
//     cout<<"total count = "<<count<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     i = 1;
//     do{
//         cout<<i<< " ";
//         i++;

//     }while(i<=5);
//         return 0;
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number =";
//     cin>>n;
//     if (n<0 || n==0 || n==1){
//         cout<<"this is not a prime number"<<endl;
//     }else {
//         for (int i = 2; i <= n/2; i++){
//             if (n % i == 0){
//                 cout<<"this is not a prime number"<<endl;
//                 return 0;
//             }
//         }
//         cout<<"this is a prime number"<<endl;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n =";
//     cin>>n;
//     int fact = 1;
//     if (n == 0 || n ==1){
//         return 1;
//     }else{
//         for(int i = 1; i <=n; i++){
//             fact *= i;

//         }
//         cout<<"factorial = "<<fact;
//     }
// }
// 
#include <iostream>
using namespace std;

int main() {
    string s, rev = "";

    cout << "Enter a string: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--) {
        rev = rev + s[i];
    }

    if (s == rev) {
        cout << "Palindrome string";
    } else {
        cout << "Not a palindrome string";
    }

    return 0;
}
