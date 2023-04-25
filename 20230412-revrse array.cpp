#include<iostream>
using namespace std;

int main(){ 
 
  int i, n, j; 
  cout<<"Enter No. Of Element : ";
  cin>>n;
  int arr1[n], arr2[n]; 
  cout<<"Now Fill Your Array : "<<endl;
  for(i=0; i<n; i++) { 
  cout<<"Array["<<i<<"] : ";
   cin>>arr1[i]; 
  } 
  for(i=0, j=n-1; i<n; i++, j--) { 
  arr2[j]=arr1[i]; 
  } 
  cout<<"Your Array Reversed Successfully : "<<endl; 
  for(i=0; i<n; i++) {
  cout<<"Array["<<i<<"] : "<<arr2[i]<<endl;
  } 
  return 0;
}


