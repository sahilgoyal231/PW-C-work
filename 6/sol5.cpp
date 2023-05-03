#include<iostream>
using namespace std;
bool prime (int n){

    for(int i=2;i<=n;i++){

        if (n%i==0){
            return false;
        }else{
            return true;
        }
    }
}

int main(){

    int a;
    int b;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;

    for(int i=a;i<=b;i++){

        if(prime(i)){
            cout<<i<<" ";
        }
    }

}
