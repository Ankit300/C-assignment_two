// Q5 - Write a program to calculate the sum of digits of a 3 digit number. 

#include<iostream>
using namespace std;
int main(){
     int num, first, second, third, sum;
     cout<<"Enter the number of 3 digits: ";
     cin>>num;

     first = num/100; //first digit
     num = num%100;

     second = num/10; //second digit
     third = num%10;    //third digit
    
    sum = first + second + third;

    cout<<"sum of digits of a 3 digit number: "<<sum;
    return 0;
}