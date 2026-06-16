// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value =";
//     cin>>n;
//     for (int i = 1; i<= 2*n-1; i+=2){
//         cout<<i<<",";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter the value =";
    cin>>n;
    for(i=n; i>=0; i-=3){
        cout<<i<<endl;
    }
}
