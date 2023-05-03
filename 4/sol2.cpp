#include<iostream>
using namespace std;
int main()
{
        for(int i=0;i<500;i++)
    {
        int sum = 0;
        int n = i;
        while(n!=0)
        {
            sum = sum+((n%10)*(n%10)*(n%10));
            n = n/10;
        }
        if(sum == i)
        {
            cout << i <<endl;
        }
    }
        return 0;

}        