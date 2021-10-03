#include<bits/stdc++.h>
using namespace std;
void MergeArr(int m,int arr[],int n,int arr1[],int arr2[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        //check that the first element of arr is small than in second arr if true then store and increment 
        if(arr[i]<arr1[j]){
            arr2[k++]=arr[i++];
        }
        else{
            arr2[k++]=arr1[j++];
        }
        while (i<m)
        {
            arr2[k++]=arr[i++];
        }
        while (j<n)
        {
           arr2[k++]=arr1[j++];
        }
        
        
    }
}
int main(){
    int n,m;
    cin>>m>>n;
    int arr[m],arr1[n];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr1[j];
    }
    int arr2[m+n];
    MergeArr(m,arr,n,arr1,arr2);
    for(int i=0;i<m+n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}