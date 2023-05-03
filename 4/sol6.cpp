#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    //LOOP FOR UPPER TRIANGLE
    for(int i=1;i<=n;i++){
        //below loop is to print spaces 
        int no_of_spaces = (n-i);
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";
        }

        //below loop is to print characters for each line
        int no_of_char = 2*i - 1;
        for(int j=0;j<no_of_char;j++){
            char ch = (char)('A' + j);
            cout<<ch; 
        }
        cout<<endl;
    }

    //LOOP FOR LOWER TRIANGLE
    for(int i=n+1;i<=2*n-1;i++){
        //below loop is to print spaces 
        int no_of_spaces = i-n;
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";
        }

        //below loop is to print characters for each line
        int no_of_char = 2*(2*n - i) - 1;
        for(int j=0;j<no_of_char;j++){
            cout<<(char)('A' + j);
        }
        cout<<endl;
    }

    return 0;
}