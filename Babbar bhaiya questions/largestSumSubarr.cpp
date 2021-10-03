#include<bits/stdc++.h>
using namespace std;
int kadane(int n,int arr[]){
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<kadane(n,arr)<<endl;
    return 0;
}