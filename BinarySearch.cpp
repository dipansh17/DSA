#include<bits/stdc++.h>
using namespace std;
//should be ascending order arr
int BinarySearchArr(int n,int arr[],int key){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>=key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearchArr(n,arr,key)<<endl;
    return 0;
    
} 
