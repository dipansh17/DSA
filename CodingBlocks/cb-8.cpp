#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    ch=cin.get();
    int x=0,y=0;
    while(ch!='\n'){
        if(ch=='N'){
            y++;
        }
        else if(ch=='S'){
            y--;
        }
        else if(ch=='W'){
            x--;
        }
        else{
            x++;
        }
        ch=cin.get();

    }
    if(x>=0 && y>=0){
        //1st EN
        for(int i=0;i<abs(x);i++){
            cout<<"E";
        }
        for(int i=0;i<abs(y);i++){
            cout<<"N";
        }
    }
        else if(x<=0 && y>=0){
            // 2nd NW
            for(int i=0;i<abs(x);i++){
                cout<<"W";
            }
            for(int i=0;i<abs(y);i++){
                cout<<"N";
            }
        }
        // else if(x<=0 && y<=0){
            // 3rd SW
                    else if(x<=0 && y>=0){
            for(int i=0;i<abs(x);i++){
                cout<<"W";
            }
            for(int i=0;i<abs(y);i++){
                cout<<"S";
            }
        }
        else{
            // 4th ES
                    // else if(x>=0 && y>=0){
            
            for(int i=0;i<abs(x);i++){
                cout<<"E";
            }
            for(int i=0;i<abs(y);i++){
                cout<<"S";
            }
        }
        
        
    
    // cout<<x<<" "<<y<<endl;
    return 0;
}
//find largest element in the array
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// int maxEle=INT_MIN;
// for(int i=0;i<n;i++){
//     maxEle=max(arr[i],maxEle);
// }
// cout<<maxEle<<endl;
//     return 0;
// }
//linear search in array(h.w)
// Insertion sort
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// int i,j;
// for( i=1;i<n;i++){
//     // i=2;
//     // i=3
//     // i=4
// int pc=arr[i];
// for( j=i-1;j>=0;j--){

// if(arr[j]>pc){//5>4 //5>3 //5>2 5>1
// arr[j+1]=arr[j];//554321 //45521 //
// }
// else{                  
//     break;
// }
// }
// arr[j+1]=pc; //45321 //43521
// } 
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

//optimized bubble sort.
// int main(){
//     int n,count=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }    
//     for(int j=0;j<n-1;j++){
//         bool f=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//        f=1;
//         }
//         count++;
//     }    
//     if(f==0){
//         break;
//     }
//     }
//     cout<<"count:"<<" "<<count<<endl;
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }  
// return 0;
// }
//do-while loop
//switch
// int main(){
//     char ch;
//     cin>>ch;
//     switch(ch){
//         case 'n':
//         cout<<"North"<<endl;
//         break;
//         case 'e':
//         cout<<"East"<<endl;
//         break;
//         default:
//         cout<<"Invalid Input"<<endl;
//     }
//     return 0;
// }