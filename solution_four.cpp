// Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number. 
#include<iostream>
using namespace std;
int main(){
    int num, first, sec, third, fourth, fifth, sum;
    num= 12345;
    first= num/10000;  //first digit
    num= num%10000;

    sec= num/1000;  //second digit
    num= num%1000;

    third= num/100;  //third digit
    num= num%100;

    fourth= num/10;  //fourth digit
  
    fifth= num%10;   //fifth digit

    sum = first + fourth;

    cout<<"Sum of first and the second last digit of a 5 digit number: "<<sum;
   
    return 0;
}