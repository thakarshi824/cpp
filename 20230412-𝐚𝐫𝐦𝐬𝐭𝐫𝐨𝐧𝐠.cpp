//𝐀𝐫𝐦𝐬𝐭𝐫𝐨𝐧𝐠
#include<iostream>
using namespace std;
 int main(){
 int num, sum = 0, temp, rem, digit = 0; 
 
 cout << "Check Entered Number Is Armstrong Or Not..." << endl; 
 cout << "Enter any integer: "; 
 cin >> num; temp = num; // count the number of digits in the input number 
 while (temp != 0) { 
  temp /= 10; 
  digit++;
 } temp = num; 
 while (temp != 0) { 
 rem = temp % 10; // calculate the sum of nth power of each digit 
 int power = 1;
 for (int i = 1; i <= digit; i++) {
  power *= rem;
  } 
 sum += power; temp /= 10; 
 } // check if the input number is equal to the sum of nth power of each digit
 if (sum == num) { 
 cout << num << " is an Armstrong number."; 
 }
 else {
 cout << num << " is not an Armstrong number."; 
 } 
return 0;
}




    