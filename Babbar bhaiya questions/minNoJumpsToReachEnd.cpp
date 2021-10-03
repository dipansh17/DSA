#include<bits/stdc++.h>
using namespace std;
int MinJumps(int n,int arr[]){
    int maxR=arr[0];
    int step=arr[0];
    int jump=1;
    if(n==1)
    return 0;
    else if( arr[0]==0){
        return -1;
    }
    else{
        for(int i=0;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxR=max(maxR,arr[i]+i);
            step--;
            if(step==0){
                jump++;
            }
            if(i>=maxR){
                return -1;
            }
            step=maxR-1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<MinJumps(n,arr)<<endl;
    return 0;
}