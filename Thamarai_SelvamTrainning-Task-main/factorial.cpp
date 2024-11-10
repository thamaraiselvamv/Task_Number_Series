#include<iostream>
using namespace std;
int main(){
  int a,fact=1;
  cout<<"Enter a number: ";
  cin>>a;
  if(a < 0){
    cout<<"Factorial does not exist for negative numbers.";
  }
  else{
  for(int i=1;i<=a;i++)
  {
    fact=fact*i;
    }
  }
    cout<<"Factorial of "<<a<<" is "<<fact;



    return 0;
}