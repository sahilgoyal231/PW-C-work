#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Number is : "<<endl;
    cin>>num;

    if(num<0){
        
        num = num*(-1);
    }
    cout<<"Absolute value of number is : "<<num<<endl;


    return 0;
}