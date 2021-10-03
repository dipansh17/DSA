#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         int temp=arr[s];
//         arr[s]=arr[e];
//         arr[e]=temp;
//         s++;
//         e--;
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
/////Recursive way
void reverseArr(int arr[],int s,int e){
   
    if(s>=e){
        return;
    }
    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    reverseArr(arr,s+1,e-1);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArr(arr,0,n-1);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
       }
    
    return 0;
}