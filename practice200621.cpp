#include<bits/stdc++.h>
#include<string>
using namespace std;
// int linearSearch(int n,int arr[],int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int binarySearch(int n,int arr[],int key){
//     int s=0;
//     int e=n;
//     while (s<e)
//     {
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid+1;
//         }
//         else{
//             e=mid-1;
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
//      int key;
//      cin>>key;
//      cout<<binarySearch(n,arr,key);
//      //cout<<linearSearch(n,arr,key);
//     return 0;
// }
//sorting (selection)
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      for(int i=0;i<n-1;i++){
//          for(int j=i+1;j<n;j++){
//              if(arr[j]<arr[i]){
//              int temp=arr[j];
//              arr[j]=arr[i];
//              arr[i]=temp;
             
//              }
//          }
//      }
//      for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// }
//bubble sort
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int counter=1;
//     while (counter<n)
//     {
//         for (int i = 0; i < n-counter; i++)
//         {
//         if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
    
    
    
//     return 0;
// }
//max till i
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
//       cout<<mx<<endl;

//     return 0;
// }
//reverse arr
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //logic behind reversing
//     int s=0;
//     int e=n-1;
//     while(s<e){
    
//             int temp=arr[s];
//             arr[s]=arr[e];
//             arr[e]=temp;
        
//         s++;
//         e--;
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }
//max number and min number
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;
//     for (int  i = 0; i < n; i++)
//     {
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
//     cout<<maxNo<<" "<<minNo<<endl;
    
//     return 0;
// }
/////recursion//
//factorial
// int Fact(int n){
// if(n==0){        //base case
// return 1;
// }
// int ans=n*Fact(n-1);
// return ans;
// }
// int main(){
// int n;
// cin>>n;

// cout<<Fact(n)<<endl;
// return 0;
// }
 //sum till n
//  int SumTill(int n){
//      if(n==0){   //base case
//          return 0;
//      }
//      int ans=n+SumTill(n-1);
//      return ans;
//  }
//  int main(){
//      int n;
//      cin>>n;
//      cout<<SumTill(n)<<endl;
//      return 0;
//  }
//n ki power p
// int NkiPower(int n,int p)
// {
// if(p==0){
//     return 1;
// }
// int ans=n*NkiPower(n,p-1);
// return ans;
// }
// int main(){
//     int n,p;
//     cin>>n>>p;
// cout<<NkiPower(n,p)<<endl;
// return 0;
// }
//fibinacci
// int fibo(int n){
//     if(n==0){ ////base condition
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     return fibo(n-1)+fibo(n-2);

// }
// int main(){
//     int n=6;
//     // cin>>n;
//     cout<<fibo(6)<<endl;
//     return 0;
// }
// bool check(int arr[],int n){
//     if(n==1){      //base condition
//         return true;
//     }
//     int restArr=check(arr+1,n-1);
//     return (arr[0]  <arr[1]&& restArr);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<check(arr,n)<<endl;
//     return 0;
// }
//print numbers till n
// void PrintNumb(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<n<<" ";
//     PrintNumb(n-1);
// // cout<<n<<" ";
    
// }
// int main(){
//     int n;
//     cin>>n;
//     PrintNumb(n);
//     return 0;
// }
//first and last occurance
// int firstOcc(int n,int arr[],int i,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     firstOcc(n,arr,i+1,key);

// }
// int last(int n,int arr[],int i,int key){
//     if(i==0){
//         return -1; 
//     }
   
//     if(arr[i]==key){
//         return i;
//     }
//      last(n,arr,i-1,key);
  
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
//   cout<<  firstOcc(n,arr,0,key)<<" ";
//   cout<<last(n,arr,n,key)<<" ";
//     return 0;
// }
//reverse  a string
// void Reverse(string s){
//     if(s.size()==0){
//         return ;
//     }
//     Reverse(s.substr(1));
//     cout<<s[0];
// }
// int main(){
// string s="Binod";
// Reverse(s);
//     return 0;
// }
////replaceWithPi
// void ReplaceWithPi(string s){
//     if(s.size()==0){
//         return;
//     }
//     if(s[0]=='p'&& s[1]=='i'){
//         cout<<"3.14";
//     ReplaceWithPi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         ReplaceWithPi(s.substr(1));
//     }
// }
// int main(){
//     string s="pipppipippeppe";
//     ReplaceWithPi(s);
//     return 0;
// }
// void reverse(string& s){
   
//     int n=s.length();
// for(int i=0;i<n/2;i++){
//     // swap(s[i],s[n-i-1]);
//     int temp=s[i];
//     s[i]=s[n-i-1];
//     s[n-i-1] = temp;
// }    
// }
// int main(){
//     string s="Dipansh";
//   reverse(s);
//   cout<<s;
//     return 0;
// }
///towerOfHanoi
// void TofHanoi(int n,char src,char des,char help){
//     if(n==0){
//         return ;
//     }
//     TofHanoi(n-1,src,help,des);
//     cout<<"moved from"<<src<<"to"<<des<<endl;
//     TofHanoi(n-1,help,des,src);
// }
// int main(){
//     int n;
//     char src;
// char des;
// char help;
//     TofHanoi(3,'A','C','B');
//     return 0;
// }
//tower of hanoi
// void TofHanoi(int n,char src,char des,char help){
//     if(n==0){ 
//         return;
//     }
//     TofHanoi(n-1,src,help,des);
//     cout<<"Move from "<<src<<"To "<<des<<endl;
//     TofHanoi(n-1,help,des,src);
// }
// int main(){
//     int n;
//     char src,help,des;
//     TofHanoi(3,'A','C','B');
//     return 0;
// }
//remove duplicates from string
// string removeDup(string s){
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
//     cout<<removeDup("aaaabbbbccccddddeeeef")<<endl;
//     return 0;
// }
//move all x to the end of string
// string MoveAll(string s){
//     if(s.length()==0){
//         return "";
//     }
//      char ch=s[0];
//      string ans=MoveAll(s.substr(1));
//      if(ch=='h'){
//          return ans+ch;
//      }
//      return ch+ans;
// }
// int main(){
//     cout<<MoveAll("jbvjkzdbvxnxnixhixhixhixhxhxxxxuxhbxixioxhxi")<<endl;
//     return 0;
// }
//generate all substring of a string
// void subseq(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch=s[0];
 
//     string ros=s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main(){
//     subseq("abcd","");
//     return 0;
// }
//generate substring with ascii number
    // void subseq(string s,string ans){
    //     if(s.length()==0){
    //         cout<<ans<<endl;
    //         return;
    //     }
    //     char ch=s[0];
    //     int code=ch;
    //     string ros=s.substr(1);
    //     subseq(ros,ans);
    //     subseq(ros,ans+ch);
    //     subseq(ros,ans+to_string(code));
    // }
    // int main(){
    //     subseq("AB","");
    //     return 0;
    // }
    //keypad problem(print all possible words from phonr digit)
     string keypadArr[]={"" ,"-~`","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     void keypad(string s, string ans){
         if(s.length()==0){ //base case
             cout<<ans<<endl;
             return;
         }
         char ch=s[0];
         string code = keypadArr[ch-'0'];
         string ros=s.substr(1);
         for (int  i = 0; i < code.length(); i++)
  
         {
                keypad(ros,ans+code[i]); 
         }
         
     }
     int main(){
        keypad("243","");
         return 0;
     }