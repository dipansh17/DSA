#include<bits/stdc++.h>
using namespace std;
/*
bool pairSum(int n,int arr[],int k){
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                    cout<<i<<" "<<j<<endl;
                    return true;
                }


            }
        }
        return false;
        }
*/
////optimised sol.
bool pairSum(int n,int arr[],int k){
    int high=n-1;
    int low=0;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else {
            low++;
        }
    }
    return false;
}
int main(){
    int arr[]={2,3,4,5,6,7,8,9,11,20,44};
    int k=64;
     cout<<pairSum(11,arr,k)<<endl;
}