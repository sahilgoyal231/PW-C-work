#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Number is : "<<endl;
    cin>>num;

    if(num>0){
        cout<<num<<endl;
    }
    else{
        cout<<"The number is negative and skipped . "<<endl;
    }

    return 0;
}