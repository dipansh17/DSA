// cb-10.cpp
// subarry with given sum
#include <bits/stdc++.h>
using namespace std;
// int main(){
//   int n,ans=0,sum;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int k;
//   cin>>k;
//   for(int i=0;i<n;i++){
//      sum=0;
//     for(int j=i;j<n;j++){
//     //     for(int k=i;k<=j;k++)//for printing sub array
//     //   cout<<arr[k]<<endl;
//     sum+=arr[j];
//     if(sum==k){
//         ans++;
//     }
//     }

//   }
//   cout<<ans<<endl;
//   return 0;
// }
// find the missing number in the aaray
// int main(){
// int n=5,sum=0;
// int arr[]={0,1,4,5,2};
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int realSum=0;
//     realSum=(n*(n+1))/2;
//     cout<<realSum-sum<<endl;
//     return 0;
// }
/// 2nd approch
// int main(){
//      int n=5,sum=0;
//     int arr[]={0,1,4,5,2};
//     int x=0;
//     for(int i=0;i<=n;i++){
//         x^=i;
//     }
//     for(int i=0;i<n;i++){
//         x^=arr[i];
//     }
//     cout<<x;
//     return 0;
// }
// target.cpp
// int main(){
//     int arr[]={1,2,4,5,1000};
//     int target=3;
//     int n=5;
//     if(arr[n-1]<target){
//         cout<<n<<endl;
//         return 0;
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>=target){
//             cout<<i<<endl;
//             break;
//         }
//         // else if(arr[i]>target){
//         //     cout<<i<<endl;
//         //     break;
//         // }
//     }
//     return 0;
// }
// NEW YEEAR CHAOS
/*
It is New Year's Day and people are in line for the Wonderland rollercoaster ride. Each person wears a sticker indicating their initial position in the queue from  to . Any person can bribe the person directly in front of them to swap positions, but they still wear their original sticker. One person can bribe at most two others.

Determine the minimum number of bribes that took place to get to a given queue order. Print the number of bribes, or, if anyone has bribed more than two people, print Too chaotic.
*/
// void solve(int *arr,int n){
//   for(int i=n;i>=2;i--){
//         if(arr[i-1]!=i){
//             if(arr[i-2-1]==i){
//                 swap(arr[i-2-1],arr[i-1-1]);
//                 swap(arr[i-1-1],arr[i-1]);
//                 bribe+=2;
//             }
//             else if(arr[i-1-1]==i){
//                 swap(arr[i-1-1],arr[i-1]);
//                 bribe+=1;
//             }
//             else{
//                 cout<<"Too chaotic"<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<bribe<<endl;
// }
// int main(){
//     int arr[]={2,1,5,3,4};
//     int n=5;
//     int bribe=0;
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         cin>>arr[i];
//         solve(n,arr);
//     }
  
//     return 0;
// }
//stock price
int main(){
    int  arr[]={7,5,6,1,5,9};
    int n=6;
    int profit=0;
    int min_price=INT_MAX;
    for(int day=0;day<n;day++){
        // if(min_price>arr[day]){
        //     min_price=arr[day];
        // }
        // else{
        //     profit=max(profit,arr[day]-min_price);
        // }
    min_price=min(min_price,arr[day]);
    profit=max(profit,arr[day]-min_price);
    
    }
    cout<<profit<<endl;
    return 0;
}