#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n; // n must be an odd number 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=n/2 && j!=n/2){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}