#include<bits/stdc++.h>
using namespace std;
// int main(){

//   int n;
//   cin>>n;
//   if(n>0 && n>=90 && n<=100){
//       cout<<"A+"<<endl;
//   }
//   else if(n>0 && n>=81 && n<=90){
//       cout<<"A"<<endl;
//   }
//   else if(n>0 && n>=71 && n<=80){
//       cout<<"B"<<endl;
//   }
//   else if(n>0 && n<=70){
//       cout<<"You haven't full fill criteria"<<endl;
//   }
//   else if(n==0){
//       cout<<"fail"<<endl;
//   }
//   else{
//       cout<<"Invalid number";
//   }
//   return 0;  
// } 
//Simple Intrest Nikalo
// int main(){
//     int p=1000,r=2.4,t=2,si;
//     // cin>>p>>r>>t;
//     si=(p*r*t)/100;
//     cout<<"simple intrest is:"<<" "<<si<<endl;
//     return 0;
// }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>b && a>c){
//         cout<<"a is largest"<<endl;
//     }
//     else if(b>a && b>c){
//         cout<<"b is largest"<<endl;
//     }
//         else if(a==b || a==c || b==c){
//             cout<<"the numbers are is same"<<endl;
//         }
//         else{
//             cout<<"c is largest"<<endl;
//         }
//     return 0;
// }
// int main(){
// int n;
// 	cin>>n;
// 	bool isPrime=true;
// 	if(n==1 || n==0 ){
// 		cout<<"They are neither prime or composite"<<endl;
// 	}
// 	else{
// 		for(int i=2;i<n/2;i++){
// 			if(n%i==0){
// 				isPrime=false;
// 				break;
// 			}
// 		}
// 	}	
// 	if(isPrime){
// 		cout<<n<<" "<<"is a prime number"<<endl;
// 	}
// 	else{
// 		cout<<n<<" "<<"is a composite number"<<endl;
        
// 	}
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a=1;
//     for(int i=0;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     int mi=INT_MAX;
//     for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
//         mi=min(mi,arr[i]);
//     }
//     cout<<"max is:"<<" "<<mx<<" "<<"min is :"<<" "<<mi<<endl;
//     int mean,sum=0;

//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     mean=sum/n;
//     cout<<"Mean is :"<<" "<<mean<<endl;
//         return 0;

// }
//incomplete
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         bool isprime=1;
//         for(int j=2;j<i+1;j++){
//             if(i%j==0)
//         }
//     return 0;
// }
//print pattern
//   1
//  232
// 34543 
// int main(){
//     int n;
//     cin>>n;
//     for(int row=1;row<=n;row++){
//         //print white space 
//         for(int i=1;i<=(n-row);i++){
//             cout<<" ";
//         }
//         //print incrementing numbers
//         int no=row;
//         for(int i=1;i<=row;i++){
//             cout<<no;
//             no++;
//         }
//         // print decrementing numbers
//     no-=2;
//     for(int i=1;i<row;i++){
//         cout<<no;
//         no--;           
//     }
//     cout<<endl;    

//     }
// }
//infinite loop
// int main(){
//     int i=0;                               
//     while(i<5){
//         cout<<i;
//         if(i==2)
//         continue;
//         i++;
//     }
//     return 0;
// }
int main() {
	int n=5;
for(int i=n;i>0;i--){
    n--;
    for(int j=1;j<=n;j++){
        cout<<j;
    }
    for(int k=0;k<=n;k++){
        cout<<"*";
    }
    cout<<endl;
}
	return 0;
}
/*

1234*****
123****
12***
1**
*
*/