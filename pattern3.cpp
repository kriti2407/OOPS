//PATTERN 3

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter Number of rows :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            cout<<"*";
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(i=1;i<=2*n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j==n)
            cout<<"*";
            else
            {
            cout<<" ";
            }
        }
        cout<<"\n";
    }
}
