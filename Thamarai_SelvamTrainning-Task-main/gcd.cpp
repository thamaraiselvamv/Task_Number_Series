#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b){
   
     while(b!=0){
        int gcd=b;
        b=a%b;
        a=gcd;
    }
    return a;
}

int main(){
    int a,b;
    cout<<"enter the number:";
    cin>>a;
    cout<<"enter the number:";
    cin>>b;
    cout<<"the gcd of"<<a<<"and"<<b<<"is:"<<gcd(a,b)<<endl;
   return 0;
}