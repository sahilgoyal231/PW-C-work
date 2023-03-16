#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;

    cout<<((a<50)&&(a<b)) ? 1:0;

    return 0;
}