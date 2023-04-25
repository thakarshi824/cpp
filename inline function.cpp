#include<iostream>
using namespace std;

inline int cube(int x);

int main(){

int num;
cout<<"enter value of num : ";
cin>>num;


cout<<"cube = "<<cube(num);
return 0;
}

inline int cube(int x){
 return x*x*x;
}