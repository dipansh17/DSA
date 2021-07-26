#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;

        }cout<<endl;
    }
    return 0;
}
    
 /*   cin>>n;
    for(int i=1;i<=n;i++){
        space=2*n-2*i;
        for( j=1;j<=i;j++)
        {
         cout<<"*";   
        }
        
        for( j=1;i<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        }
        for(int i=n;i>=1;i--)
        {
            space=2*n-2*i;
            for(j=i;j=i;j++)
            {
                cout<<"*";
            }
            for(j=1;i<=space;j++)
            {
                cout<<" ";
            }
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }*/