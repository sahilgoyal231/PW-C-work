#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int Rows,Columns,i,j;
    
    cout<<"Please Enter the number of Rows: ";
    cin>>Rows;

    cout<<"Please Enter the number of Columns: ";
    cin>>Columns;

    for(i=1; i<=Rows; i++){
        for (j=1; j<=Columns; j++){
        cout<<"*";
        }
        cout<<"\n";
    }
    getch();

    return 0;
}