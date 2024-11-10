#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    int pal=0;
    int n=a;
    while(n!=0){
        int rem=n%10;
        pal=pal*10+rem;
        n = n/10;
    }
    if(pal==a){
        cout<<a <<" is a palindrome";

    }
    else {
        cout<<a <<" is not a palindrome";
    }
}