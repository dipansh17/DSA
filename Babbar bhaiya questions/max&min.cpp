#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mx=INT_MIN;
int mix=INT_MAX;
for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);
    mix=min(mix,arr[i]);
}
cout<<"max is :"<<mx<<"min is :"<<mix<<endl;
return 0;
}