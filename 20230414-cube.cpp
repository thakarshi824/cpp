#include<iostream>
using namespace std;


int cube(int a);

int main(){

int n;
cout<<"enter value of n : ";
cin>>n;

cout<<"cube of  "<<n<<" is " <<cube(n);
return 0;
}
int cube(int a){
 return a*a*a;
}