#include<bits/stdc++.h>
using namespace std;
///reverse array
// // void reverseArr(int n,int arr[]){
// //     int s=0;
// //     int e=n-1;
// //     while(s<e){
// //         int temp=arr[s];
// //         arr[s]=arr[e];
// //         arr[e]=temp;
// //         s++;
// //         e--;
// //     }
// // }
// void reverseArr(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int temp=arr[s];
//     arr[s]=arr[e];
//     arr[e]=temp;
//     reverseArr(arr,s+1,e-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     reverseArr(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
////MIN AND MAX
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxN=INT_MIN;
//     int minN=INT_MAX;
//     for(int i=0;i<n;i++){
//         maxN=max(maxN,arr[i]);
//         minN=min(minN,arr[i]);
//     }
//     cout<<"MAx Number is :"<<" "<<maxN<<"   "<<"Min Number is :"<<" "<<minN<<endl;
//     return 0;
// }
//kth max and min
// int ksmall(int arr[],int size,int k){
//     sort(arr,arr+size);
//     return arr[k-1];
// }
// int klarge(int arr[],int size,int k){
//     sort(arr,arr+size);
//     return arr[size-k];
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
   
//    cout<< ksmall(arr,n,1)<<endl;
//      cout<<klarge(arr,n,5)<<endl;
//      return 0;
// }
//sort 012
// void sort012(int arr[],int n){
//     int c0=0;
//     int c1=0;
//     int c2=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             c0++;
//         }
//         if(arr[i]==1){
//             c1++;
//         }
//         if(arr[i]==2){
//             c2++;
//         }
//     }
//         int k=0;
//         for(int i=0;i<c0;i++){
//             arr[k++]=0;
//         }
        
//         for(int i=0;i<c1;i++){
//             arr[k++]=1;
//         }
        
//         for(int i=0;i<c2;i++){
//             arr[k++]=2;
//         }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort012(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
//move all negative to one side
// void shiftNegative(int n,int arr[]){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             if(i!=j){
//                 swap(arr[i],arr[j]);
//             }
//             j++;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// shiftNegative(n,arr);
// for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// union and intersection

// int main(){
//     int m,n;
//     cin>>m>>n;
//     unordered_map<int,int> map;
//     int arr1[m],arr2[n];
//     for(int i=0;i<m;i++){
//         cin>>arr1[i];
//         map[arr1[i]]++;
//     }
//   for(int i=0;i<n;i++){
//         cin>>arr2[i];
//         map[arr2[i]]++;
//     }
//     cout<<map.size()<<endl;
//     return 0;
// }//rotateCycle
// void rotateArr(int n,int arr[]){
//     int i=0,j=n-1;
//     while(i!=j){
//         swap(arr[i],arr[j]);
//         i++;
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     rotateArr(n,arr);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

///largest sum of contigous subarr
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int Sum=0;
//             for(int k=i;k<=j;k++){
//                 Sum+=arr[k];
//             }
//             maxSum=max(maxSum,Sum);

//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currentSum=0;
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentSum+=arr[i];
//         if(currentSum<=0){
//             currentSum=0;
//         }
//         maxSum=max(currentSum,maxSum);
//     }
//     cout<<maxSum<<" ";
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currSum[n+1];
//     currSum[0]=0;
//     for(int i=1;i<=n;i++){
//         currSum[i]=currSum[i-1]+arr[i-1];
//     }
//     int maxSum=INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum=currSum[i]-currSum[j];
//             maxSum=max(sum,maxSum);
//         }
//     }
//     cout<<maxSum<<" ";
//     return 0;
// }
//minimize Heights
// int getMinDiff(int arr[],int n,int k){
// if(n==1){
//     return 0;
// }
// sort(arr,arr+n);
// int ans=arr[n-1]-arr[0];
// for(int i=0;i<n;i++){
//         if(arr[i]<k){
//             continue;
//         }
//         int mi=min(arr[0]+k,arr[i]-k);
//         int ma=max(arr[n-1]-k,arr[i-1]+k);
//         if(ma<mi){
//             continue;
//         }
//         ans=min(ans,ma-mi);
// }
// return ans;
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
//     cout<<getMinDiff(arr,n,k);
//     return 0;
// }
///min number of reach end
int minJumps(int n,int arr[]){
    int maxR=arr[0];
    int step=arr[0];
    int jump=1;
    if(n==1){
        return 0;
    }
    else if(arr[0]==0){
        return -1;
    }
    else{
        for(int i=0;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxR=max(maxR,arr[i]+i);
            step--;
            if(step==0){
                jump++;
            }
            if(i>=maxR){
                return -1;
            }
            step=maxR-1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minJumps(n,arr)<<endl;
    return 0;
}