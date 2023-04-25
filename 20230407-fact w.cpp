//factorial using while loop
#include<iostream>
using namespace std;


int main(){

int n,fact=1,i=1;
cout<<"enter a number : ";
cin>>n;
while(i<=n){
 fact=fact*i;
 i++;
}

cout<<"factorial of given number is : "<<fact;
return 0;
}