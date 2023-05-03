#include<iostream>
using namespace std;
int main()
{
    int num, i, j;
    int x=1 , y=1, z=0;
    cout<<"Enter a +ve Integer : ";
    cin>>num;
    i=3 ;
    do
    {   
        x=1;
        y=1;
        j=2;
        do
        {
            if(i%j==0)
            {
                x=0;
                j=i;
            }
            j=2;
            do
            {
                if((num-i)%j==0)
                {
                    y=0;
                    j=num-i;
                }
                j++;
            }
            while(j<num-i );
            if(x==1 && y==1)
            {
                cout<<num <<" = "<<i<<" + "<<num-i<<endl;
                z=1;
            }
            j++;
        }
        while(j<i);
        i++;
    }
    while(i<=num/2);
    if(z==0)
    {
        cout<<num<<" can not be expressed as sum of two prime numbers.";
    }
}