#include<bits/stdc++.h>
using namespace std;
int main(){
    // nt main(){
int n=5;
// cin>>n;
cout<<endl;
for(int i=n;i>=0;i--)
{
	for(int j=n;j>=i;j--)
	{
	cout<<j<<" ";
	}
	for(int space=2*i-1;space>=1;space--)
	{
	cout<<"  ";
	}
	for(int j=i;j<=n;j++)
	{
		if(j!=0)
			cout<<j<<" ";                   
	}
	cout<<endl;
}
for(int i=1;i<=n;i++)
{
    for(int j=n;j>=i;j--)
    {
        cout<<j<<" ";
    }
    for(int space=1;space<=2*i-1;space++)
    {
        cout<<"  ";
    }
   for(int j=i;j<=n;j++)
   {
       cout<<j<<" ";
   }
	cout<<endl;
}

    return 0;
}
/*
             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5
*/