#include<bits/stdc++.h>
using namespace std;
//METHOD-2
// void PairSum(int n,int arr[],int k){
//     sort(arr,arr+n);
//     int s=0;
//     int e=n-1;
//     while (s<e)
//     {
//         if(arr[s]+arr[e]==k){
//             cout<<arr[s]<<" "<<arr[e]<<endl;
//             return;
//         }
//         else if(arr[s]+arr[e]>k){
//             e--;
//         }
//         else if(arr[s]+arr[e]<k){
//             s++;
//         }
//         else{
//             cout<<"pair Not found"<<endl;
//         }
//     }
    
// }
// void PairSum(int n,int arr[],int k){
//     //creating a empty map;
//     unordered_map<int,int> map;
// //do's for each element
// for(int i=0;i<n;i++){
//     if(map.find(k-arr[i])!=map.end()){
//         cout<<arr[i]<<" "<<arr[map[k-arr[i]]]; 
//             }
//             map[arr[i]]=i;
// }
// cout<<"pair Not Faound "<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     PairSum(n,arr,k);
//     // sort(arr,arr+n);

// //METHOD-1
//     // for(int i=0;i<n;i++){

//     //  for(int j=i+1;j<n;j++){
//     //      if(arr[i]+arr[j]==k){
//     //          cout<<arr[i]<<" "<<arr[j]<<endl;
//     //      }
//     //  }   
//     // }
//     return 0;
// }
bool findNum(int num,vector<int> &arr){
    for(int  a:arr){
        if(a==num){
            return true;
        }
        
    }
    return false;
}
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int ans=0;
    for(int i=0;i<n;i++){
    int st=arr[i];
    // Write your code here
   while(findNum(st,arr)){
       st++;
   }
        ans=max(ans,st-arr[i]);
        }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    lengthOfLongestConsecutiveSequence(arr,n);
}
///Method:2
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
sort(arr.begin(),arr.end());
    int maxLen=1;
    int seqLen=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]+1){
            seqLen++;
        }
        else if(arr[i]==arr[i-1]){
            continue;
        }
        else{
            seqLen=1;
        }
        maxLen=max(maxLen,seqLen);
    }
    return maxLen;
}
//method-3
#include<bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> box;
    int ans=0;
    for(int i=0;i<n;i++){ 
        box.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        int start=arr[i];
        if(box.find(start-1)!=box.end()) continue;
        while(box.find(start)!=box.end()){
            start++;
        }
        ans=max(ans,start-arr[i]);
    }
    return ans;
}
//mores voting algo
