#include<iostream>
using namespace std;
int main(){

    int CP,SP,amount; //CP is cost price , SP is selling price 
    cout<<"Cost price : "<<endl;
    cin>>CP;
    cout<<"Selling price : "<<endl;
    cin>>SP;

    if(SP>CP){
        amount = SP-CP;
        cout<<"Profit = "<<amount<<endl;
    }
    else if(CP>SP){
        amount = CP-SP;
        cout<<"Loss = "<<amount<<endl;
    }
    else{
        cout<<"No profit No loss"<<endl;
    }

    return 0;
}
