#include<iostream>
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
    cout<<linearSearch(arr,n,key)<<endl;
        return 0;
}*/
//////binarySearch
/*int binarySearch(int n,int arr[],int key){
    int s=0;
    int e=n;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]>key){
            e=m-1;

        }
        else{
            e=m+1;
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
    cout<<binarySearch(n,arr,key)<<endl;
    return 0;
    }*/
    ////binary searchII
/*    int binarySearch(int n,int arr[],int key){
        int s=0;
        int e=n;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]=key){
                return mid;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else{
                e=mid+1;
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
        cout<<binarySearch(n,arr,key)<<endl;
        return 0;
            }*/
            ////binarySearchII
            int binarySearch(int n,int arr[], int key){
                int s=0;
                int e=n;
                while(s<=e){
                    int mid=(s+e)/2;
                    if(arr[mid]==key){
                        return mid;
                    }
                    else if(arr[mid]>=key){
                        e=mid-1;
                    }
                    else{
                        e=mid+1;
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
                cout<<binarySearch(n,arr,key)<<endl;
                return 0;
            }