#include<bits/stdc++.h>
using namespace std;
int kSmallest(int arr[],int size,int k){
    sort(arr,arr+size);
    return arr[k-1];
}
int klargest(int arr[],int size,int k){
    sort(arr,arr+size);
    return arr[size-k];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<klargest(arr,n,3)<<endl;
    cout<<kSmallest(arr,n,2)<<endl;
    return 0;
}