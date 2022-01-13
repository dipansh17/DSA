#include<bits/stdc++.h>
using namespace std;
int KadaneAlgo(int *arr,int n){
    int flag=0;
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            flag++;
        }
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        ans=max(sum,ans);
    }

    return ans;
}
int main(){
    int arr[]={1,2,3,-1};
    cout<<KadaneAlgo(arr,4)<<endl;
    return 0;
}