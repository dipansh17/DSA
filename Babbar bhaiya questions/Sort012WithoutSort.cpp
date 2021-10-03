#include<bits/stdc++.h>
using namespace std;
// void sort012(int n,int arr[]){
//      int c0=0;
//     int c1=0;
//     int c2=0;
//     for(int i=0;i<n;i++){
//         if(c0==0)
//         c0++;
//         if(c1==1)
//         c1++;
//         if(c2==2)
//         c2++;
//     }
//     int k=0;
//     for(int i=0;i<c0;i++)
//     arr[k++]=0;
//     for(int i=0;i<c1;i++)
//     arr[k++]=1;
//     for(int i=0;i<c2;i++)
//     arr[k++]=2;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// sort012(n,arr);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
    void sort012(int a[], int n)
    {
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
            c0++;
            if(a[i]==1)
            c1++;
            if(a[i]==2)
            c2++;
        }
        int k=0;
        for(int i=0;i<c0;i++)
        a[k++]=0;
        for(int i=0;i<c1;i++)
        a[k++]=1;
        for(int i=0;i<c2;i++)
        a[k++]=2;
        
    }
int      main() {


        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    
    return 0;
}
    
    