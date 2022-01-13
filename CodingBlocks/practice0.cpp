#include<bits/stdc++.h>
#include<math.h>
# define ll long long
using namespace std;
//       *
//    *  *  *  
// *  *  *  *  *  
//    *  *  *
//       *
// int main(){
//     int n=3;
//     int row=n;
//     while(row>0){
         //space
        // int j=1;
        // while(j<=n-row+1){
        //     cout<<" ";
        //     j++;
        // }
        // int i=1;
        // while(i<=2*row-1 && i<=2*row-n){
        //     cout<<"*"<<" ";
        //     i++;
        // }
        // int k=n;
        // int a=1;
        // while(a<=3*row){
        //     cout<<" ";
        //     a++;
        // }
        // while(k>=2*row-1){
        //     cout<<"*";
        //     k--;
        // }
  /*   Sanju needs your help! He gets a list of employees with their salary. The maximum salary is 100.

Sanju is supposed to arrange the list in such a manner that the list is sorted in decreasing order of salary. And if two employees have the same salary, they should be arranged in lexicographical manner such that the list contains only names of those employees having salary greater than or equal to a given number x.

Help Sanju prepare the same!*/
// int main(){
//     char arr[100];
//     for(int i=0; arr[i]!='\n';i++){
//         cin.getline(arr[i]);

//     }
//     return 0;
// }
// bool isPrimeOrNot(int n)
// {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;
 
 
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
 
//     for (int i = 5; i * i <= n; i = i + 6) {
//         if (n % i == 0 || n % (i + 2) == 0) {
//             return false;
//         }
//     }
     
//     return true;
// }
bool Perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum +=i;
        }
        if(sum==n){
          return true;
        }
    }
    return false;
}
int main()
{
    ll n;
    int t;
    cin>>t;
    while(t--)
    cin>>n;
    if(Perfect(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

 
    return 0;
}