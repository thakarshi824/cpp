#include<iostream>
using namespace std;

void callbyvalue(int x);
void callbyrefrence(int &x);

int main(){

int num;
cout<<"enter value of num : ";
cin>>num;
callbyvalue(num);
cout<<"call by value : a = "<<num<<endl;
callbyrefrence(num);
cout<<"call by refrence : a = "<<num;
return 0;
}
//call by value in c++
void  callbyvalue(int x){
 x=x+10;
 cout<<"call by value : x = "<<x<<endl;
}
//call by refrence in c++
void  callbyrefrence(int &x){
 x=x+10;
cout<<"call by refrence  : x = "<<x<<endl;
}