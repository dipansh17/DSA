#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(i%2==0)
        {
            cout<<"non-Prime";
            break;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"prime";
    }
    return 0;
}