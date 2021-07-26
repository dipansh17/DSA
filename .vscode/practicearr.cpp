#include <bits/stdc++.h>
using namespace std;
//MAX tILL I
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//      cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//      mx=max(mx,arr[i]);
//      cout<<mx<<endl;
//     }

// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int curr = 0;
//     for (int i = 0; i < n; i++)
//     {
//         curr = 0;
//         for (int j = i; j < n; j++)
//         {
//             curr += arr[j];
//             cout << curr << endl;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }
//input
//agr humme array kuch search krna h toh kaise karengy
//linear search
// int linearSearch(int n,int arr[],int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(n,arr,key);
//     return 0;
// }
//binary search(array must be sorted)
// int binarySearch(int n,int arr[],int key){
//     int s=0;
//     int e=n;
//     while(s<e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<binarySearch(n,arr,key)<<endl;
//     return 0;
// }