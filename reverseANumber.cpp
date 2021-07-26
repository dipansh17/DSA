#include<bits/stdc++.h>
using namespace std;
void printArr(int n,int arr[]){
for(int i=0;i<n;i++){
    cout<<arr[i];
}
cout<<endl;
}
void reverseArr(int arr[],int start,int end){
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr{1,2,3,4};
    int N=sizeof(arr)/sizeof(arr[0]);
    printArr(n,arr);
    reverseArr(arr,0,n-1);
    cout<<"reverseArray"<<endl;
    printArr(arr,n);
    return 0;
}