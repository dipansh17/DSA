#include<bits/stdc++.h>
#include<climits>
using namespace std;
////////bruteforce approch!!!
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k =i;k<=j;k++){
            sum+=arr[k];
            }
            //cout<<endl;
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}*/
///////optimised approch!!!!!!!!!
/*int main(){
    int n;
    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int currsum[n+1];
        currsum[0]=0;
        
        for(int i=1;i<=n;i++){
            currsum[i]= currsum[i-1]+arr[i-1];
        }
        int maxSum=INT_MIN;
        for(int i=1 ;i<=n;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum=currsum[i]-currsum[j];
                maxSum=max(sum,maxSum);
            }
        }
        cout<<maxSum<<" ";

    
    
    
        return 0;

}*/
///////most optimised approch
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currentSum=0;
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentSum+=arr[i];
//         if(currentSum<0){
//             currentSum=0;
//         }
//         maxSum=max(currentSum,maxSum);
//     }
//     cout<<maxSum<<" ";
//     return 0;

// }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 0; i < n; i++)
    {
        for (int  j = i; j < n; i++)
        {
            for (int  k = i; i < j; i++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            
        }
        
    }
    
    
}