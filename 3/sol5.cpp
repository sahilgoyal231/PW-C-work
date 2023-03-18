#include<iostream>
using namespace std;
int main(){

    char oper;
    int num1 , num2;
    cout<<"Enter an operator (+ , - , * , /) :"<<endl;
    cin>>oper;
    cout<<"Enter two numbers : "<<endl;
    cin>>num1>>num2;

    switch(oper){
        case '+':
        cout<< num1 << " + " << num2 << " = " << num1 + num2<<endl;
        break;

        case '-':
        cout<< num1 << " - " << num2 << " = " <<num1 - num2<<endl;
        break;

        case '*':
        cout<<num1 << " * " << num2 << " = " <<num1 * num2<<endl;
        break;

        case '/':
        cout<<num1 << " / " << num2 << " = " <<num1 / num2<<endl;
        break;

        default :
        cout<<"Error! The operator is not correct . "<<endl;
        break;
    }


    return 0;
}