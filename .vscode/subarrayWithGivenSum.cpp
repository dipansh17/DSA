#include<bits/stdc++.h>

using namespace  std;
int main(){
  int n,s;
  cin>>n>>s;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
int i=0,j=0;
int st=-1 ,en=-1, currsum=0;
while (j<n && currsum+arr[j]<=s)
{
    currsum+=arr[j];
    j++;

}
if(currsum==s){
    cout<<i+1<<" "<<j<<endl;
    return 0;

} 
while(j<n){
    currsum+=arr[j];
    while (currsum>s)
    {
        currsum-=arr[i];
        i++;
    }
    if(currsum==s){
        st=i+1;
        en=j+1;
        break;
    }
    j++;
    
}
cout<<st<<" "<<en;
 
      return 0;    
} 