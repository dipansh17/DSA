#include<bits/stdc++.h>
using namespace std;
//to find max anmd min b/w the arr
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;
//     for(int i=0;i<n;i++){
//         maxNo= max(maxNo,arr[i]);
//         minNo= min(minNo,arr[i]);
//     }
//     cout<<minNo<<" "<<maxNo<<endl;
//     return 0;
// }
///////////////////////////////////////////////////////////////////////SEARCHING//////////////////////////////////////////////////////////////////////////////////////////////
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
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(n,arr,key)<<endl;

//     return 0;
// }
//BINARY SEARCH
// int binarySearch(int n,int arr[],int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid+1;
//         }
//         else{
//             s=mid-1;
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
//     cout<<binarySearch(n,arr,key);
// }
////////////////////////////////////////////////////////SORTING///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ///selection Sort 
//  int main(){
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      for(int i=0;i<n-1;i++){
//           for(int j=i+1;j<n;j++){
//               if(arr[i]>arr[j]){
//                   int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//               }
//           }
//       }
//       for(int i=0;i<n;i++){
//           cout<<arr[i];
//       }
//      return 0;
//  }
 ////bubble sort
//  int main(){
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      int counter=1;
//      while (counter<n){
//          for(int i=0;i<n-counter;i++){
//           if(arr[i]>arr[i+1]){
//               int temp=arr[i];
//               arr[i]=arr[i+1];
//               arr[i+1]=temp;
//           }   
//          }
//          counter++;
//      }
//      for(int i=0;i<n;i++){
//          cout<<arr[i];
//      }
//      return 0;
//  }

////insertion sort
//bad mai karengy
//max till i
//non decreasing
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
//     }
//     cout<<mx<<endl;
//     return 0;
//  }
// int main(){
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      int   sum=0;
//      for(int i=0;i<n;i++){
//          sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             cout<<sum<<endl;
//         }
//      }
// return 0;
// }
//reverse an array
// int main(){
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      int strt=0;
//      int end=n-1;
//      while(strt<=end){
//          int temp=arr[strt];
//          arr[strt]=arr[end];
//          arr[end]=temp;
//         strt++;
//          end--;
//      }
     
//      for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }

//      return 0;
// }
//find maxNO and min
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;
//         for(int i=0;i<n;i++){
//         maxNo=max(maxNo,arr[i]);
//     minNo=min(minNo,arr[i]);
//     }
//     cout<<minNo<<" "<<maxNo<<endl;
//     return 0;
//  }
//reverse an array
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     cout<<"Reverse array"<<endl;
//     int i,j;
//     for(i=0, j=9;i<j;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//addition of 2 matrix
// int main(){
//     int row,col;
//     cout<<"Enter the number of rows and columns"<<endl;
//     cin>>row>>col;
//     int mat1[row][col],mat2[row][col],mat3[row][col];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>mat1[i][j];
//         }
//     }
//     cout<<"enter another matrix"<<endl;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>mat2[i][j];
//         }
//     }
//         //add
//         for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             mat3[i][j]=mat1[i][j]+mat2[i][j];
//         }
//     }

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<mat3[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//        return 0;
// }
//pointer variable
// int main(){
//     int *a,p=30;
//     a=&p;
//     cout<<a<<endl;

//     return 0;
// }
///maxTill i
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     for(int i=0;i<n;i++){
//         maxNo=max(arr[i],maxNo);
//   cout<<maxNo<<endl;
//     }
  
//     return 0;
// } 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i;j<n;j++){
//             // cout<<arr[j]<<" ";
//             sum+=arr[j];
//             cout<<sum<<" ";

//         }
        
//     }
//     return 0;
// }
///longest arithmatic subarray
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int pd=arr[1]-arr[0];
//      int ans=2;
//      int j=2;
//      int curr=2;
//      while(j<n){
//          if(pd==arr[j]-arr[j-1]){
//              curr++;
//          }
//          else
//          {
//              pd=arr[j]-arr[j-1];
//              curr=2;
//          }
//          ans=max(ans,curr);     
         
//          j++;
//      }
//      cout<<ans<<endl;
//     return 0;
// }
//record breaker
// int main(){

//     int n;
//     cin>>n;
//   int   arr[n+1];
//     arr[n]=-1;
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     //strictly greater than all previous
//     //strictly greater than value
//     if(n==1){
//         cout<<"1"<<endl;
//         return 0;
//     }
//     int ans=0;
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mx && arr[i]>arr[i+1]){
//              ans++;
//         }
//         mx=max(mx,arr[i]);
//     }
//     cout<<ans<<endl;

    
    
//     return 0;
// }
//first repeating element
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     const int N = 1e6+2;
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]= -1;
//     }
//     int minidx=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[arr[i]]!= -1){
//             minidx= min(minidx,idx[arr[i]]);
//         }
    
// else{
//     idx[arr[i]]=i;
// }
// }
// if(minidx == INT_MAX){
//     cout<<"-1"<<endl;
// }
// else{
//     cout<<minidx+1<<endl;
// }
//     return 0;
// }
//record breaker
// int main(){
//     int n;
//     cin>>n;
//     int arr[n+1];
//     arr[n]=-1;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=0;
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1] && arr[i]>mx){
//             ans++;
//         }
//         mx=max(arr[i],mx);
//     }
//     cout<<mx<<endl;
//     cout<<ans<<endl;
// return 0;
// }
//first repeating element
// int main(){
//     int n;
//     cin>>n;
//    int  arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    const int N=1e6+2;
//    int idx[N];
//    for(int i=0;i<N;i++){
//        idx[i]=-1;
//    }
//    int minIdx=INT_MAX;
//    for(int i=0;i<n;i++){
//        if(idx[arr[i]]!=-1){
//            minIdx=min(idx[arr[i]],minIdx);
//        }
//        else{
//            idx[arr[i]] =i;
//        }
//    }
//    if(minIdx== INT_MAX){
//        cout<<"-1"<<endl;
//    }
//    else{
//        cout<<minIdx+1<<endl;
//    }
//     return 0;
// }
// subarray with given sum
// int main(){
//     int n;
//     cin>>n;
//      int s;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
   
//     int i=0;
//     int j=0;
//     int st=-1;
//     int en=-1;
//     int sum=0;

//     while(j<n  && sum+arr[j]<=s ){
//         sum += arr[j];
//         j++;
//     }
//     if(sum==s){
//         cout<<i+1<<" "<<j<<endl;
//         return ;
//     }
//     while(j<n){
//         sum+=arr[j];
//         while(sum>s){
//             sum-=arr[i];

//             i++;
//         }
//         if(sum == s){
//             st=i+1;
//             en=j+1;
//             break;
//         }
//         j++;  
//     }
//     cout<<st<<" "<<en<<endl;

//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     const int N=1e+2;
//     bool check[N];
//     for(int i=0;i<N;i++){
//         check[i]==false;
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>=0){
//             check[arr[i]]=true;
//         }


//     }
//     int ans=-1;
//     for(int i=1; i<N;i++){
//         if(check[i]== false){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }
//print all subarray
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
//             int sum=0;
//     for(int k=i;k<=j;k++){
//         //cout<<arr[k];
//     sum+=arr[k];
       
//     }

//     maxSum= max(maxSum,sum);
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
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//     for(int k=i;k<=j;k++){
//         //cout<<arr[k];
//     sum+=arr[k];
       
//     }

//     maxSum= max(maxSum,sum);
//         }
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }
// int knapSack(int wt[],int val[],int w,int n){
//     if(wt==0 || n==0){
//         return 0;
//     }
   
//      if(wt[n-1]<=w){
//          return max(val[n-1]+knapSack(wt,val,w-wt[n-1],n-1),knapSack(wt,val,w,n-1));
//      }
//      else if(wt[n-1]>w){
//          return knapSack(wt,val,w,n-1);
//      }
// }
// int main(){
//     int n;
//     int wt[]={2,3,4,5};
//     int val[]={100000,2,300,5000};
//     int w=10;
//  cout<<knapSack(wt,val,w,5)<<endl;
//  return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int MaxSum=INT_MIN;;
    
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<j;k++){
//                 sum+=arr[k];
                
//             }
//             MaxSum=max(sum,MaxSum);
//             cout<<endl;
//         }
//     }
//     cout<<MaxSum<<endl;
//     return 0; 
// }

//optimise
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     int currSum[n+1];
//     currSum[0]=0;
//     for (int  i = 1; i <=n; i++)
//     {
//         currSum[i]=currSum[i-1]+arr[i-1];
//     }
//     int maxSum=INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//        for( int j=0;j<i;j++){
//            sum=currSum[i]-currSum[j];
//            maxSum = max(sum,maxSum);
//        }
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
//     int currentSum;
//     int MaxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentSum+=arr[i];
//         if(currentSum<0){
//             currentSum=0;
//         }
//         MaxSum=max(MaxSum,currentSum);
//     }
//     cout<<MaxSum<<endl;
// }
 

//maximum circular array
// int kadane(int arr[], int n){
// int currentSum=0;
// int maxSum=INT_MIN;
// for(int i=0;i<n;i++){
//     currentSum+=arr[i];
//     if(currentSum<0){
//         currentSum=0;
//     }
//     maxSum=max(maxSum,currentSum);
// }
// return maxSum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int wrapSum;
//     int nonwrapSum;
//     nonwrapSum=kadane(arr,n);
// int totalSum=0;
// for (int  i = 0; i <n;i++){
//     totalSum+=arr[i];
//     arr[i]=-arr[i];
// }
// wrapSum=totalSum + kadane(arr,n);
// cout<<max(wrapSum,nonwrapSum)<<" ";

//     return 0;
// }
//pair sum problem      
// bool pairSum(int n,int arr[],int k){
//     for(int i=0;i<n-1;i++){
// for (int  j = i+1; j< n; j++)
// {
//     if(arr[i]+arr[j]==k){
//         cout<<i<<" "<<j<<endl;
//         return true;
//     }
// }

//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int k;
// cin>>k;
// cout<<pairSum(n,arr,k)<<endl;
// return 0;
// }
//better approach
// int sort(int n,int arr[]){
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int  j = i+1; j < n; j++)
//         {
//             if(arr[j]<arr[i]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//             /* code */
//         }
        
//     }
    
//     return 0;
// }
    


// bool pairSum(int n,int arr[],int k){
// int low = 0;
// int high=n-1;
// while(low<high){
//     if(arr[low]+arr[high]==k){
//         cout<<low<<" "<<high<<endl;
//         return true;
//     }
//     else if(arr[high]+arr[low]>k){
//         high--;
//     }
//     else
//     {
//         low++;
//     }
// }
// return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int k;
// cin>>k;
// sort(n,arr);
// cout<<pairSum(n,arr,k)<<endl;
// return 0;
// }
//transpose of matrix;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //swap
//     for (int  i = 0; i < m; i++)
//     {
//         for(int j=i;j<n;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     //print arr
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    
//     return 0;
// }
//matrix multiplication
// int main(){
//     int m,n,o;

//     int arr[m][n];
//     int arr1[n][o];
//     cin>>m>>n>>o;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j]; 
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<o;j++){
//             cin>>arr1[n][o]; 
//         }
//     }
//     int ans[m][o];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<o;j++){
//             ans[i][j]=0;
//         }
//     }
// //logic
// //multiplication
// for (int  i = 0; i < m; i++)
// {
//     for(int j=0;j<o;j++){
//         for(int k=0;k<n;k++){
//             ans[i][j]+=arr[i][k]*arr1[k][j];
//         }
//     }
// }
// for(int i=0;i<m;i++){
//         for(int j=0;j<o;j++){
//             cout<<ans[i][j]<<" "; 
//         }
//         cout<<endl;
//     }


// return 0;
// }
//Matrix Search
// int main(){
//     int n,m;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int key;
//     cin>>key;
//     bool check=false;
//     for(int i=0;i<m;i++){
//      for(int j=0;j<n;j++){
//          if(arr[i][j]==key){
//              cout<<i+1<<" "<<j+1;
//              check=true;
//          }
        
//      }   
//      cout<<endl;
    
//      }
      
    
//     return 0;
// }
//optimized approach
// int main(){
//     int n,m;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int target;
//     cin>>target;
//     int r=0, c=m-1;
//     bool found=false;
//     while(r<n && c>=0){
//         if(arr[r][c]==target){
//             found=true;
//         }
//         if(arr[r][c]>target){
//             c--;
//         }
//         else
//         {
//             r++;
//         }
//     }
//     if(found)
//     cout<<"Element found"<<endl;
//     else
//     {
//         cout<<"Not found"<<endl;
//     }
//     return 0;
// }
//first repeating element
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// const int N=1e6+2;
// int idx[N];
// for (int  i = 0; i < N; i++)
// {
//     idx[i]=-1;
// }
// int minIdx=INT_MAX;
// for (int  i = 0; i < n; i++)
// {
//     if(idx[arr[i]]!=-1){
//         minIdx=min(minIdx,idx[arr[i]]);
//     }
//     else
//     {
//         idx[arr[i]]=i;
//     }
    
// }
// if(minIdx==INT_MAX){
//     cout<<"-1"<<endl;
// }
// else
// {
//     cout<<minIdx+1<<endl;
// }



// return 0;

// }    
//spiraln order matrix

int main(){
    int n,m;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>arr[m][n];
        }
    }
    //logic
    int row_strt=0;
    int row_end=m-1;
    int col_strt=0;
    int col_end=n-1;
    //row start
while (row_strt<=row_end && col_strt<=col_end) 
{
  //row strt
  

    
}
return 0;
}















