#include<bits/stdc++.h>
using namespace std;
int kandane(int arr[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<=0){
            currsum=0;
        }
        maxsum=max(currsum,maxsum);
        
    }
    return maxsum;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapSum;
    int nonwrapSum;
     nonwrapSum=kandane(arr,n);
     int totalSum=0;
     for(int i=0;i<n;i++){
         totalSum+=arr[i];
         arr[i]=-arr[i];
     }
     wrapSum=totalSum + kandane(arr,n);
     cout<<max(wrapSum,nonwrapSum)<<" "<<endl;
    return 0;
}