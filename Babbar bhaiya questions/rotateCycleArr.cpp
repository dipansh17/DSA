#include<bits/stdc++.h>
using namespace std;
void rotateArr(int n,int arr[]){
    // int x=arr[n-1];
    // for(int i=n-1;i>0;i--){
    //     arr[i]=arr[i-1];
    //     arr[0]=x;
    // }
    int i=0,j=n-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateArr(n,arr);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}