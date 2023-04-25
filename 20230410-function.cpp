#include<iostream>
using namespace std;

int sub(int a,int b);//function declaration

int main(){
int a,b;
cout<<"enter value of a = ";
cin>>a;
cout<<"enter value of b = ";
cin>>b;
cout<<"the sub of a & b is : "<<sub(a,b);//function call

return 0;
}
//function definition
int sub(int x,int y){
 int z=x-y;
 return z;
}
    