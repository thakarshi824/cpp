#include<iostream>

using namespace std; 
int main() 
{ 
 int n,temp,reverse=0; 
 
 cout<<"Cheak Entered Number Is Palindrom Or Not..."<<endl;
 cout<<"Enter any integer : "; 
 cin>>n; 
 temp=n;
 while(temp!=0){ 
  reverse=reverse*10;
  reverse=reverse+(temp%10); 
  temp=temp/10; 
  } if(n==reverse) 
  { cout<<n<<" is Palindrom-Number.";
  } else 
  { cout<<n<<" isn't Palindrom-Number."; 
  } 
 
  return 0; 
} 





    