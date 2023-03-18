#include<iostream>
using namespace std;
int main(){

    int length,breadth;
    cout<<"Length : "<<length<<endl;
    cin>>length;
    cout<<"Breadth : "<<breadth<<endl;
    cin>>breadth;

    if(length==breadth){
        cout<<"It is a square . "<<endl;
    }
    else{
        cout<<"It is a rectangle . "<<endl;
    }
    return 0;
}