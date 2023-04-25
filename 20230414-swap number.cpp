#include<iostream>
using namespace std;


int swap(int *a,int *b);

int main(){

int x,y;
cout<<"enter value of x : ";
cin>>x;
cout<<"enter value of y : ";
cin>>y;
cout<<"value of x is "<<x<<" & value of y is "<<y<<endl;
swap(&x,&y);
cout<<"value of x is "<<x<<" & value of y is "<<y;
return 0;
}
int swap(int *a, int *b){
int temp=*a;
      *a=*b;
      *b=temp;
 return 0;
}