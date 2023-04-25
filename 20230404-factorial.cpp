#include<iostream>
using namespace std;

int main(){

int i,n,fact=1;
cout<<"enter value for n :";
cin>>n;
for(i=1;i<=n;i++){
fact=fact*i;
}
cout<<"factorial is ="<<fact<<endl;
return 0;
}