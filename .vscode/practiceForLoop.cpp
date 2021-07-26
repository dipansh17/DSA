#include<bits/stdc++.h>
using namespace std;

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<"  "<<i;
    // }
//     int n;
//     int sum=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
// sum+=i;
// cout<<" "<<i<<"\n";
//     }
//     cout<<"THe sSUM IS: "<<sum;

//    int n,counter=0;
// cin>>n;
//    for(int i=1 ;i<=n;i++){
//        if(n%i==0){
//            counter++;
//        }
//    }
//        if(counter==2){
//            cout<<"it is  prime";
//        }
//        else{
//            cout<<"it is not a prime number";
//        }
// int n,counter;
// int find;
// cout<<"enter the range"<<"(this is range is starting form 1)";
//    for(int i=1;i<=n;i++){
//        for(int j=2;j<=sqrt(i);j++){
//            if(i%j==0){
//                counter++;
//            }
//            if(counter==0&&i!=1){
               
//                find++;
//                cout<<i<<" ";
//                counter=0;
//            }
//         counter=0;   
//        }

//    }
////////////////PLACEMENT KI TAIYAARI////////////
// int a,b,c;
// cin>>a>>b>>c;
// if(a>b){
//     if(a<c){
//         cout<<c;
//     }
//     else {
//         cout<<a;
//     }
// }
// else{
//     if(b>c){
//         cout<<b;
//     }
//     else{
//         cout<<c;
//     }
// }

// int a;
// cin>>a;
// if(a%2==0){
//     cout<<"even";
// }
// else{
//     cout<<"odd";
// }
// int n,sum=0;
// cin>>n;
// for(int i=0;i<=n;i++){
//     sum=sum+i;
    
// }
// cout<<sum;

// int n;
// cin>>n; 
// while(n>0){
//     cout<<n;
//     cin>>n;
// }
// int n;
// cin>>n;
// do{
//     cout<<n;
//     cin>>n;
// }
// while(n>0);
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     if(i%3==0){
//         continue;
//     }
//     cout<<i<<endl;
// }
// int n,i;
// cin>>n;
// for( i=2;i<n;i++){
//     if(n%i==0){
//         cout<<"It is  non-prime";
//         break;
//     }
    
// }
// if(i==n){
// cout<<"it is prime!!";
//     }
// int a,b,i;
// cin>>a>>b;
// for(int num=a;num<=b;num++){
//     for( i=2;i<num;i++){
//         if(num%i==0){
//             break;
//         }
//     }
//     if(i==num){
//         cout<<num<<endl; 
//     }
// }
// int n;
// cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){

//     cin>>arr[i];
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// } 
// int maxNo=INT_MIN;
// int minNo=INT_MAX;
// for(int i=0;i<n;i++){
//     if(arr[i]>maxNo){
//         maxNo=arr[i];
//     }
//     if(arr[i]<minNo){
//         minNo=arr[i];
//     }
// }
// cout<<maxNo<<endl;
// cout<<minNo<<endl;
 //linear search//
// int linear(int n,int arr[],int counter){
//     for(int i=0;i<n;i++){
//         if(arr[i]==counter){
//             return i;
//         }
        
//         }
//   return -1; 
//     }
// int main(){
//  int n;
//  cin>>n;
//  int arr[n];
//  for(int i=0;i<n;i++){
//      cin>>arr[i];
//  }
//  int counter;
//  cin>>counter;
// //  for(int i=0;i<n;i++){
// //      cout<<arr[i];
// //  }
//  cout<<linear(n,arr,counter);
//  int binary(int n,int arr[],int key){
//      int s=0;
//      int e=n;

//      while(s<=e){
//               int mid=(s+e/2);
//               if(arr[mid]==key){
//                   return mid;
//               }
//          if(arr[mid]>key){
//              e=mid-1;

//          }
//          else{
//              s=mid+1;
//          }
//      }
//      return -1;

//  }
//  int main(){
//  int n;
//  cin>>n;
//  int arr[n];
//  for(int i=0;i<n;i++){
//      cin>>arr[i];
//  }
//  int key;
//  cin>>key;
//  cout<<binary(n,arr,key)<<endl;
//////////selection sort//////////////////////
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[i]){
//             int temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i];
// }
////////////////bubble sort///////////////////////
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int counter=1;
// while(counter<n){
//     for(int i=0;i<n-counter;i++){
//         if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }
//     counter++;
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
///////////////////linear search
// int linear(int n,int arr[],int key){
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
//     cout<<linear(n,arr,key);
////////////////binary/////////////
// int binary(int n,int arr[],int key){
// int s=0;
// int e=n;
// while(s<=e){
//     int mid=(s+e/2);
//     for(int i=0;i<=n;i++){
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
    
// }return -1;
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
//     cout<<binary(n,arr,key);
/////////////////////////////////////selection sort/////////////
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
    //if(arr[j]<arr[i]){
//             int temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
    //}
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
    ///////////////MAX TILL I////////////////////
//  int main(){
//      int mx=-19999;
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      for(int i=0;i<n;i++){
//          mx=max(mx,arr[i]);
//      cout<<mx<<endl;
//      }

////////////////sum of all subarrays nC2+n///////////
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     } 
//     int curr;
//     for(int i=0;i<n;i++){
//         curr=0;
//         for(int j=i;j<n;j++){
//             curr=curr+arr[j]; ///////////o(n^2)///////
//             // cout<<arr[j]<<" ";
// cout<<curr<<" ";
//         }
//     }
///////////////////////longest arithmatic subarray 
// int main(){
//     int n;
//     cin>>n; 
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// int pd=arr[1]-arr[0];
// int ans=2; 
// int curr=2;
// int j=2;
// while(j<=n){
// if(pd==arr[j]-arr[j-1]){
//     curr++;
// }
// else{
//     pd=arr[j]-arr[j-1];
//     curr=2;
// }
// ans=max(curr,ans);
// j++;
// }  
// cout<<ans<<endl;
////////////////////record breaker//////////////////////
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// arr[n+1];
// arr[n]=-1;
// int ans=0;
// int mx=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1]&& arr[i]>mx){
//             ans++;
//         }
//         mx=max(mx,arr[i]);
//     }
//     cout<<ans<<endl;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int curr=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k];
//             }
//             cout<<endl;
//         }
//     }
    /////////max till i///
    // int main(){
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     int mx=-19999;
    //     for(int i=0;i<n;i++){
    //         mx=max(mx,arr[i]);
    //     }
    //     cout<<mx;
///////////////////sum of subarrays/////////
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     int maxSum=INT_MIN;
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            for(int k=i;k<=j;k++){
//                sum+=arr[k];
//            }
//            maxSum=max(maxSum,sum);
//        }
      
//    }
//    cout<<maxSum<<" ";
//cumulative sum
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int cumSum[n+1];
//      cumSum[0]=0;
//     for(int i=1;i<=n;i++){
//         cumSum[i]=cumSum[i-1]+arr[i-1];
//     }
//     int maxSum=INT_MIN;
//     for(int i=1;i<=n;i++){
// int sum=0;
// for(int j=0;j<i;j++){
//     sum=cumSum[i]-cumSum[j];
//     maxSum=max(sum,maxSum);
// }
//     }
// cout<<maxSum<<endl;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currentSum=0;
//     int maxSum=INT_MIN;             //////o(n)
//     for(int i=0;i<n;i++){
//         currentSum+=arr[i];
//         if(currentSum<0){
//             currentSum=0;
//         }
//         maxSum=max(maxSum,currentSum);
//     }
//     cout<<maxSum<<endl;
////////////////////////////maximum circular subarray sum///////////
////////max sub arr=total sum of arr-sum of non contributing elements
// int kadane(int arr[],int n){
//     int currSum=0;
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currSum+=arr[i];
//         if(currSum<0){
//             currSum=0;
//         }
//         maxSum=max(currSum,maxSum);
//     }
//     return maxSum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int wrapSum;
//     int nonWrapSum;
//     nonWrapSum=kadane(arr,n);
//     int totalSum=0;
//     for(int i=0;i<n;i++){
//         totalSum+=arr[i];
//         arr[i]=-arr[i];
//     }

//     wrapSum=totalSum+kadane(arr,n);
//     cout<<max(wrapSum,nonWrapSum)<<endl;
//////pair sum problem////////////
// bool pairsum(int n,int arr[],int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j;
//                 return true;
//             }
//         } 
        
//     }
//     return false;
    
// }
// bool pairSum(int n,int arr[],int k){
//     int low=0;
//     int high=n-1;
//     while(low<high){
//         if(arr[low]+arr[high]==k){
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }
//         else if(arr[low]+arr[high]>k){
//             high--;
//         }
//         else{
//             low++;
//         }
//     }
//     return false;
// }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[n];
// }
// int k;
// cin>>k;
// cout<<pairSum(n,arr,k)<<endl;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     const int N=1e+2;
//     int idx[N];
//     for(int i=0;i<n;i++){
//         idx[i]=-1;
//     }
//     int minidx=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[arr[i]]!= -1){
//             minidx=min(minidx,idx[arr[i]]);
//         }
//         else {
//             idx[arr[i]]=i;
//         }
//     }
//     if(minidx=INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx+1<<endl;
//     }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//             } 
//         }
//         counter++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
/////////2d array///
// int main(){
//     int n;
//     int m;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
        
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
  //     ///for searching
//     int x;
//     cin>>x;
//     bool flag=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]==x){
//                 cout<<i<<" "<<j<<"\n";
//                 flag=1;
                
//             }
//             cout<<endl;
//         }
//     }
//     if(flag){
//          cout<<"the Element found";
               
//     }
//     else
//     {
//         cout<<"element not found";
//     }
////spiral order matrix///////
    // int main(){
    //     int n;
    //     int m;
    //     cin>>m>>n;
    //     int arr[m][n];
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             cin>>arr[i][j];
    //         }
    //     }
    //     int row_start=0;
    //     int row_end=m-1;
    //     int column_end=n-1;
    //     int column_start=0;



    //     while(row_start<=row_end && column_start<=column_end){
    //         ////row start

    //         for(int col=column_start;col<=column_end;col++){
    //             cout<<arr[row_start][col];
    //         }
    //         row_start++;
    //         ///column end
    //         for(int row=row_start;row<=row_end;row++){
    //             cout<<arr[row][column_end];
    //         }
    //         column_end--;
    //         ///row end
    //         for(int col=column_end;col>=column_start;col--){
    //             cout<<arr[row_end][col];
    //         }
    //         row_end--;
    //         ///column start
    //         for(int row=row_end;row>=row_start;row--){
    //             cout<<arr[row][column_start];
    //         }
    //         column_start++;





    //     }

// int main(){
//     int n;
//     int m;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //swap
//     for(int i=0;i<m;i++){
//         for(int j=i;j<n;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;

//         }
//     }
//      //print
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// int main(){
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int arr[n1][n2];
//     int arr1[n2][n3];
//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cin>>arr1[i][j];
//         }
//     }
    
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }
//     //multiply matrix
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//             ans[i][j]+=arr[i][k]*arr1[k][j];
//         }
//         }
//     }
//     //print
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//brutte force approch like linear search
// int main(){
//     int n,m;
//     cin>>m>>n;
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int  j = 0; j < n; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     int key;
//     cin>>key;
//     bool flag=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]==key){
//                 cout<<i<<" "<<j;
//                 flag=1;
//             }

//         }
//     }
//     if(flag){
//         cout<<"element found"<<endl;
//     }
//     else
//     {
//         cout<<"element Not Found"<<endl;
//     }
    

    ///yeh nikla h o(nm)
    ///isko aur optimized kr skte h
    //bilkul
    //////////////////////bit manipulation//////
     // odd and even by bit manipulation
    //  int main(){
    //      int n;
    //      cin>>n;
    //      if(n&=1){
    //          cout<<"The number you have enter is odd";
    //      }
    //      else{
    //          cout<<"the number is even";
    //      }
// int main(){
//          int m,n;
//          cin>>m>>n;
//           m=m^n;
//          n=m^n;
//          m=m^n;
//          cout<<m<<" "<<n;
        //   int getBit(int n,int pos){
        //       return ((n&(1<<pos) )!=0);
        //   }
        //   int setBit(int n,int pos){
        //       return (n|(1<<pos));
              
        //   }
        //   int clearBit(int n,int pos){
        //       int mask=~(1<<pos);
        //       return (n & mask);
        //   }
        //   int updateBit(int n,int pos,int value){
        //       int mask=~(1<<pos);
        //       n=n & mask;
        //       return(n|(value<<pos));
        //   }
        //   int main(){
        //       //cout<<setBit(5,1);
        //       //cout<<getBit(5,2);
        //   //cout<<clearBit(5,2);
        //   cout<<updateBit(5,1,1);
        
        // ///identify the power 2
        // int isPower2(int n){
        //     return (n &&!(n & n-1));
        // }
        
        // int main(){
        //     cout<<isPower2(15);
            ////////////////////////NO. of ones in binary
            ////n&n-1 has same bits as n except rightmost set bit
            // int ones(int n){
            //     int count=0;
            //     while(n){
            //         n=n & n-1;
            //         count++;
            //     }
            //     return count++;
            // }
            // int main(){
            //     cout<<ones(19);
            ////generate subset 2^n
    //         void subSet(int n,int arr[]){
    //             for(int i=0;i<(1<<n);i++){
    //                 for(int j=0;j<n;j++){
    //                     if(i & (1<<j)){
    //                         cout<<arr[j]<<" ";
    //                     }
    //                 }
    //                 cout<<endl;
    //             }


    //         }            
    //   int main(){
    //       int arr[4]={1,2,3,4};
    //       subSet(4,arr);
      
     ////finding unique number in an array 
     //by xor ^
//      int uniqueN(int arr[],int n){
//          int xorsum=0;
//          for(int i=0;i<n;i++){
//              xorsum=xorsum^arr[i];
//          }
//      return xorsum;
//      }
//      int main(){
// int arr[]={1,2,3,2,1};
// cout<<uniqueN(arr,5);
/// find 2 unique numbers
//  int uniqueN(int arr[],int n){
//      int xorsum=0;
//      for(int i=0;i<n;i++){
//          xorsum=xorsum^arr[i];
//      }
//      int setbit=0;
//      int pos= 0;
//      while(setbit!=1){
//          setbit= xorsum & 1;
//          pos++;
//          xorsum=xorsum>>1;
//      }
     
//  }

 


     





































        return 0; 
}