#include<iostream>
using namespace std;
int main(){

    int n,first,second,third; // n must be a 3 digit number only
    cout<<"n:";
    cin>>n;

    first = n/100; //first digit
    n = n%100;

    second = n/10; //second digit

    third = n%10; //third digit

    int sum;
    sum = first + second + third;
    cout<<"Sum of all 3 digits is : "<<sum<<endl;
    return 0;
}