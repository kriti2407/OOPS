
//PATTERN 1
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"ENTER THE NUMBER OF ROWS :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>1&&i<n&&j>1&&j<n)
            cout<<" ";
            else if(i==1 || i==n)
            cout<<"*";
            else
            cout<<"*";

        }
        cout<<"\n";
    }
}
