#include<iostream>
using namespace std;
int main(){
int a=123;
 int rev=0;
 while (a !=0)
 {
    
   int l = a%10;
     rev = rev*10 +l;
    a = a/10;
 }
 
cout<<"reversed number:"<<rev<<endl;
return 0;

}

