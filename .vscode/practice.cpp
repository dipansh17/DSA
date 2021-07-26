#include<bits/stdc++.h>
using namespace std;
/*void fib(int n){
int t1=0;
int t2=1;
int nextTerm;
for(int i=0;i<=n;i++){
cout<<t1<<endl;
nextTerm=t1+t2;
t1=t2;
t2=nextTerm;
} 
return ;}
int main(){    
  int n;
  cout<<"Enter the number";
  cin>>n;
  fib(n);

    return 0;

}*/

////circularmaxsubarray
/*
int kandane(int arr[],int n){
  int currsum=0;
  int maxSum=INT_MIN;
  for(int i=0;i<n;i++){
    currsum+=arr[i];
    if(currsum<=0){
      currsum=0;
    }
    maxSum=max(currsum,maxSum);
  }

return maxSum;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int wrapSum;
  int nonWrapSum;
  nonWrapSum=kandane(arr,n);
  int totalSum=0;
  for(int i=0;i<n;i++){
    totalSum+=arr[i];
    arr[i]=-arr[i];
  }
  wrapSum=totalSum+kandane(arr,n);
  cout<<max(wrapSum,nonWrapSum)<<" "<<endl;
  return 0;

}*/


//////////////binarySearch
/*int binarySearch(int n,int arr[],int key){
  int s=0;
  int e=n;
  for(int i=0;i<n;i++){
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
  cout<<binarySearch(n,arr,key);
  return 0; 
}*/
////bubbleSort
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

////2=-d
/*
int main(){
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];

    }
  }
  /*for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  */
/* int x;
 cin>>x;
 bool flag=false;
 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     if(arr[i][j]==x){
       flag=true;
       cout<<i<<" "<<j<<endl;
     }
   }
 }
 if(flag){
   cout<<"element found"<<endl;
 }
 else{
   cout<<" element not found"<<endl;
 }
  return 0;}*/
////SpiralOrderMatrixTraversal
int main(){
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  int row_start=0;
  int row_end=n-1;
  int col_start=0;
  int col_end=m-1;
  while(row_start<=row_end && col_start<=col_end){
    //for row start
    for(int col=col_start;col<=col_end;col++){
      cout<<arr[row_start][col]<<" ";
    }
    row_start++;
    /// for col end
    for(int row=row_start;row<=row_end;row++){
      cout<<arr[row][col_end]<<" ";
    }
    col_end--;
    ///for row end
    for(int col=col_end;col>=col_start;col--){
       cout<<arr[row_end][col]<<" ";
    }
    row_end--;
    ///for column start
    for(int row=row_end;row>=row_start;row--){
      cout<<arr[row][col_start]<<" ";
    }
    col_start++;
  }

  return 0;
}