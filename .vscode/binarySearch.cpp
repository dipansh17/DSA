#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]>=key){       
                              e=m-1;
        }
        else{
            e=m+1;
        }

    }
    return -1;

}
int main(){
    int n,arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<"BinarySearch"<<binarySearch(arr,n,key);
    return 0;
}