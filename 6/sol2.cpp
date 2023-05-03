#include<iostream>
using namespace std;
double circum (int r){

    double cir = 2 * 3.14 * r;
    return cir;
}

double area (int r){

    double ar = 3.14 * r * r;
    return ar;
}
int main(){

    cout<<"Radius of circle is : ";
    int r;
    cin>>r;
    cout<<"Area is : "<<area(r)<<endl;
    cout<<"Circumference is : "<<circum(r);

}
