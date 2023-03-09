// Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*)

#include<iostream>
using namespace std;
int main(){
    float num1, num2, sum, product, sub, div;
    cout<<"Enter one numbers: "<<endl;
    cin>>num1;
    cout<<"Enter second numbers: "<<endl;
    cin>>num2;

    sum = num1+num2;
    cout<<"Sum = "<<sum<<endl;
    sub = num1-num2;
    cout<<"Difference = "<<sub<<endl;
    product = num1*num2;
    cout<<"Product = "<<product<<endl;
    div = num1/num2;
    cout<<"Division = "<<div<<endl;
}