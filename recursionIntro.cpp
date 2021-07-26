#include <bits/stdc++.h>
using namespace std;
// int Sum(int n){
//     if(n==0){
// return 0;
//     }
//     int prevSum=Sum(n-1);
//     return n+prevSum;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<Sum(n);
//     return 0;
// }
///calculate c raised to power p
////Np=n*n*n*n*n....
// int powerN(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int prevPower=powerN(n,p-1);
//     return n*prevPower;
// }
// int main(){
//     int n,p;
//     cin>>n>>p;
//     cout<<powerN(n,p);
//     return 0;
// }
//find factorial
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     int prevFact=fact(n-1);
//     return n*prevFact;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);

//     return 0;
// }
//fibonacci number
// int fib(int n){
//     if(n==1 ||n==0){
//         return  n;
//     }

//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n);
//     return 0;
// }
////check arr is sorted or not
// bool sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restArr=sorted(arr+1,n-1);
//      return(arr[0]<arr[1] && restArr );
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sorted(arr,n);
//     return 0;
// }
////print number to n decreasing/accending
// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<dec(n);
//     return 0;
// }
//increasing
// void inc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//   inc(n);

//     return 0;
// }
///reverse the string
// void reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros=s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }
// int main(){
//     reverse("dipansh");
//     return 0;
// }
///replace pi with 3.14
// void replacePi(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }
// int main(){
//     replacePi(" pippppippppipp");
//     return 0;
// }
//tower of hanoi
//   void tOfHanoi(int n,char src, char dest, char help){
//       if(n==0){
//           return;
//       }
//       tOfHanoi(n-1,src,help,dest);
// cout<<"Move from"<<src<<"to"<<dest<<endl;
// tOfHanoi(n-1,help,dest,src);
//   }
//   int main(){
//       tOfHanoi(3,'A','C','B');
//       return 0;
//   }
//remove alll duplicates from string
// string  removeDup(string s){

//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];

//     string ans=removeDup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return ch+ans;
// }
// int main(){
//     cout<<removeDup("aaaabbbeeecccdddjdjdjjjjjddddkjkkkkkss");
//     return 0;
// }
//permutation of abc
// void  PofString(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         sring ros=s.substr(0,i)+s.substr(i+1);
//         PofString( ros,ans+ch);
//     }

// }
// int main(){

//     cout<<PofString("ABC","")<<endl;
//     return 0;

// }
//count the number of paths possible from start point to end point
//   int countPath(int s,int e){
//       if(s==e){
//           return 1;
//       }
//       if(s>e){
//           return 0;
//       }
//       int count=0;
//       for(int i=1;i<=6;i++){
//           count+= countPath(s+i,e);
//       }
//       return count;
//   }
//   int main(){
//       cout<<countPath(0,3);
//   }
//count the  number of paths posible in a maze(no opstical)
// int countPathMaze(int n,int i, int j){
//     if(i==n-1 && j==n-1){
//         return 1;
//     }
//     if(i>=n|| j>=n){
//         return 0;
//     }
//     return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
// }
// int main(){
//     cout<<countPathMaze(12,0,0);
// return 0;
// }
//tiling problem
// int tilingWays(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return tilingWays(n-1) + tilingWays(n-2);
// }
// int main(){
//     cout<<tilingWays(4)<<endl;
//     return 0;
// }
//friends pairing problem
// int friendsPair(int n){
//     if(n==0 || n==1 || n==2 ){
//         return n;
//         }
//     return friendsPair(n-1) + friendsPair(n-2)*(n-1);
// }
// int main(){
//     cout<<friendsPair(4);
//     return 0;
// }
//knapsack(bori sac) problem
//  int knapSack(int value[],int wt[],int W,int n){
//      if(n==0|| W==0){
//          return 0;
//      }
//      if(wt[n-1]>W){
//          return knapSack(value,wt,n-1,W);
//      }
//      return  max(knapSack(value,wt,n-1,W-wt[n-1])+value[n-1],
//      knapSack(value,wt,n-1,W));
//  }
//  int main(){
//      int W=50;
//      int wt[]={10,20,30};
//      int value[]={100,50,150};
//      cout<<knapSack(value,wt,W,3)<<endl;
//      return 0;
//  }
//Sum of n numbers
// int Sum(int n){
//     if(n==0)
//     return 0;
//     cout<<n<<endl;
//     return n+Sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     cout<<Sum(n)<<endl;
//     return 0;
// }
//fibonacii
// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     cout<<n<<endl;

//     return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;

//     cout << fib(n)<<endl;;
//     return 0;
// }
//merge sort
// void merge(int arr[],int l,int mid,int r){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1];
//     int b[n2];//temp arr
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=arr[mid+1+j];
//     }
//     int i=0;int j=0;
//     int k=l;
//     while (i<n1 && j<n2)
//     {
//     if(a[i]<b[j]){
//         arr[k]=b[i];
//         i++;
//         k++;
//     }
//     else
//     {
//         arr[k]=b[j];
//         j++;
//         k++;
//     }

//     }
//     while (i<n1)
//     {
//         arr[k]=a[i];
//         k++;
//         i++;
//     }
//     while (j<n2)
//     {
//         arr[k]=b[j];
//         j++;
//         k++;
//     }

// }
// void mergeSort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     mergeSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//     return 0;
// }

//merge sort
// void merge(int arr[], int l, int mid, int r)
// {
//     int n1 = mid - l + 1;
//     int n2 = r - mid;
//     int a[n1];
//     int b[n2]; //temp array
//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[l + i];
//     }
//     for (int i = 0; i< n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }
//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = b[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             k++;
//             j++;
//         }
//     }
//     while (i < n1)
//     {
//         arr[k] = a[i];
//         k++;
//         i++;
//     }
//     while (j < n2)
//     {
//         arr[k] = b[j];

//         k++;
//         j++;
//     }
// }
// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         mergeSort(arr, mid + 1, r);
//         merge(arr, l, mid, r);
//         mergeSort(arr, l, mid);
//     }
// }
// int main()
// {
//     int arr[] = {38, 27, 43, 3, 9, 82, 10};
//     mergeSort(arr, 0, 6);
//     for (int i = 0; i < 7; i++)
//     {
//         cout << arr[i]<<" ";
//     }
//  /   cout << endl;
//     return 0;
// }
//using top down approach
int knapSack(int wt[],int val[], int w,int n){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<wt+1;j++){
            if(wt[n-1]<=w){
                t[n][w]
            }
        }
    }
}