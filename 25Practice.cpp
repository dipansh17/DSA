/*#include<iostream>
using namespace std;*/
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
////selection sort
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];n
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/
////binary search
/*
int BinarySearch(int n,int arr[],int key){
    int s=0;
    int e=n;
    while(s<=e){
    int m=(s+e/2);
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<"binary_function"<<" "<<BinarySearch(n,arr,key)<<" ";
    return 0;
}
*/
///BUBBLESOrt
/*
int main(){
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
}
*/
/////LinearSearch
/*int LinearSearch(int arr[],int n,int key){
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
        cin>>arr[n];
    }
    int key;
    cin>>key;
    cout<<LinearSearch(arr,n,key)<<" ";
    return 0;

}*/
#include <bits.std/c++>
using namespace std;
int main()
{
    int n=7;
    //cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << n << "is: " << n << endl;
    }
    return 0;
}