#include<bits/stdc++.h>
using namespace std;
void shiftNegative(int n,int arr[]){
    int j=0;
for (int  i = 0; i < n; i++)
{
    if(arr[i]<0){
        if(i!=j)
        swap(arr[i],arr[j]);
        j++;
    }
}

}
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }   
 shiftNegative(n,arr);
 for (int i = 0; i < n; i++)
 {
     cout<<arr[i]<<" ";
 }
 return 0;

}
