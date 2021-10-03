#include<iostream.h>
using namespace std;
int doUnion(int arr1[],int m,int arr2[],int n){
set<int>s;
for(int i=0;i<m;i++){
    s.insert(arr1[i]);
}
for(int i=0;i<n;i++){
    s.insert(arr2[i]);
}
return s.size();
}
int DoIntersection(int arr1[],int m,int arr2[],int n){
    sort(arr1,arr1+m);
     sort(arr2,arr2+n);
     int i=0,j=0,ans=0;
     while(i<=j){
         if(arr1[i]==arr2[j]){
             ans++;
             i++;
             j++;
         }
         else if(arr1[i]<arr2[j]){
             i++;
         }
         else{
             j++;
         }
         ans++;
     }
     return ans;

}
int main(){
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr2[j];
    }
doUnion(arr1,m,arr2,n);
DoIntersection(arr1,m,arr2,n);

return 0;
}