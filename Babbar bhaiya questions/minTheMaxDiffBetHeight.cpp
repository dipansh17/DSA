#include<bits/stdc++.h>
using namespace  std;
int MinTheDiff(int n,int arr[],int k){
sort(arr,arr+n);
int ans=arr[n-1]-arr[0];
int smal=arr[0]+k;
int big=arr[n-1]-k;
int ma,mi;
for(int i=0;i<n;i++){
    mi=min(smal,arr[i+1]-k);
    ma=max(big,arr[i]+k);
    if(mi<0)
    continue;
    ans=min(ans,ma-mi);
}
return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<MinTheDiff(n,arr,k)<<endl;

}