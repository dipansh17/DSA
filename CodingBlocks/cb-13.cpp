#include<bits/stdc++.h>
using namespace std;
//reverse an array not to print but reverse the actual array
// void print_Arr(int n,int *arr){
// int s=0;
// int e=n-1;
// while(s<=e){
//     swap(arr[s],arr[e]);
//     s++;
//     e--;
// }
// }
// int main(){
//     int arr[]={1,2,3,4};
//     print_Arr(4,arr);
//     for(int i=0;i<4;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
///character array
// void charInput(char* arr){
//     int i=1;
//     char x=cin.get();
// arr[0]=x;
// for(int i=0; arr[i]!='\0';i++){
//     x=cin.get();
//     arr[i++]=x;
// }
// arr[i-1]='\0';

// }
// int main(){
//     // char arr[]={'a','b','c','\0'};
//     // char arr[100]="dipansh";
//     // cout<<arr;
//     char arr[100];
//  charInput() 
//     return 0;
// }
// calculate length of string
// int length(char *arr){
//     int i=0;
//     for( i=0;arr[i]!='\0';i++){

//     }
//     return i;
// }
// int main(){
//     char arr[100];
//     cin.getline(arr,100);
//     int len =length(arr);
//    cout<<len<<endl;
//     return 0;

// }
 //check if a string is palindrome or not
//  int length(char *arr){
//     int i=0;
//     for( i=0;arr[i]!='\0';i++){

//     }
//     return i;
// }
//  bool checkPalindrome(char *arr){
//      int i=0,j=length(arr)-1;
//      while(i<j){
//          if(arr[i++]!=arr[j--]){
//              return false;
//          }
         
//      }
//      return true;

//  }
//  int main(){
//      char arr[100];
//      cin.getline(arr,100);
//      checkPalindrome(arr);
//  if(checkPalindrome(arr)){
//  cout<<true;
//  }
//  else{
//      cout<<false;
//  }
//      return 0;
//  }
 //read a number and then read a string then simply output both the inputs

// int main(){
//     int a;
//     cin>>a;
//     char arr[100];
// cin.ignore();
//     cin.getline(arr,100);
//     cout<<a<<endl<<arr<<endl;
//     return 0;
// }
//write a function which takes two strings a and b and appends b to a
//  int length(char *arr){
//     int i=0;
//     for( i=0;arr[i]!='\0';i++){

//     }
//     return i;
// }
// void merge(char *arr1, char *arr2){
//     int i=length(arr1);
//     for(int j=0;arr2[j]!='\0';j++){
//         arr1[i++]=arr2[j];
//     }
//     arr1[i]='\0';
//     cout<<arr1;
// }

// int main(){
// char arr1[100]="chirag";
// char arr2[100]="kunal";
// merge(arr1,arr2);
//     return 0;
// }
//read n strings froma user and print the largest string
// int length(char *arr){
//     int i=0;
//     for( i=0;arr[i]!='\0';i++){

//     }
//     return i;
// }
// void copy(char *max_string,char* arr){
//     for(int i=0;arr[i]!='\0';i++){
//         max_string[i]=arr[i];
//     }
// }
// int main(){
//        int n;
//        cin>>n;
//        cin.ignore();
//        int max_string[100];
//        int max_len=0;
//        for(int i=0;i<n;i++){
//            char arr[100];
//            cin.getline(arr,100);
//            int curr_len=length(arr);
//            if(max_len<curr_len){
//                max_len=curr_len;
//                copy(max_string,arr);//storing the max string
//            }
//        }
//        cout<<max_string<<endl;
//        return 0;
// }
void Print(char *arr){
    for(int i=0; arr[i]!='\0';i++){
        cout<<arr[i];
    }
    cout<<endl;
}
// void CharacterInput(char *arr){
//     int i=1;
//     char x=cin.get();
//     arr[0]=x;
//     while(x!='\n'){
//         x=cin.get();
//         arr[i]=x;
//         i++;
//     } 
//     arr[i-1]='\0';
    
//     }
int main(){
    char arr[100];
    // CharacterInput(arr);
    
    cin.getline(arr,100,'\n');
    // cout<<arr;
Print(arr);
    return 0;
}