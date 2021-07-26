#include<iostream>
#include<cmath>
using namespace std;
/*int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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
    cout<<linearSearch(arr,n,key);
    return 0;
}*/
/*int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            e=mid+1;
        }
        else{
            e=mid-1;
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
    cout<<binarySearch(arr,n,key);
    return 0;
}*/
///SELECTION SORT   
/*int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}
*/
///bubble sort
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
///bubble sort
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}*/
//////max till I
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=-199999;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx<<" ";
    return 0;
}*/
///sum of sub array
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int current=0;
    for(int i=0;i<n;i++){
        current=0;
    for(int j=i;j<n ;j++){
        current=current+arr[j];
        cout<<current<<" ";
    }
    }
    
        return 0;
}*/
////longest arithmatic subarray
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int j=2;
    int ans=2;
    int curr=2;
    while (j<=n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<" ";
    

        return 0;
}