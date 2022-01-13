#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int a=1,b=2;
//     cout<<(a&b)<<" "<<(a&&b)<<endl;
//     cout<<(a|b)<<" "<<(a||b)<<endl;
//     return 0;
// }
////////////count set bits;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     while(n>0){
//         if(n&1){
//             ans++;
//         }
//         n=n>>1;
//     }
//     cout<<ans;
//     return 0;
// }    
// print pattern
// abcdeedcba
// abcddcba
// abccba
// abba
// aa
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int row=0;row<=n;row++){
        ch='A';
        // inc order til n-row+1
        for(int j=1;j<=n-row+1;j++){
            cout<<ch<<"  ";
        ch++;
        }

        ch--;
        //print dec order
        for(int j=1;j<=n-row+1;j++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
    return 0;
}
// * *** *** *
// ** ** ** **
// *** * * ***
// int main(){
//     int n=3;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<" ";
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<" ";
//          for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<" ";
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<" ";
//         // //space
//         // for(int j=n-1;j>=0;j--){
//         //     cout<<" ";
//         // }
//         //  for(int j=1;j<=n-i+1;j++){
//         //     cout<<"*";
//         // }
        
//         cout<<endl;
//     }
//     return 0;
// }
///find the number that occur only once
    // int main(){
    //     int n;
    //     cin>>n;
    //     int ans=0;
    //     for(int i=1;i<=n;i++){
    //         int no;
    //         cin>>no;
    //         ans^=no;
    //     }
    //     cout<<ans;
    //     return 0;
    // }
    //read charracter till you read $
    // int main(){
    //   int   count=0;
    //     char ch;
    //     while(1){
    //         cin>>ch;
    //         if(ch=='$'){
    //             cout<<count;
    //             break;
    //         }
    //         count++;
    //     }
    //     return 0;

    // }
    //approach -2
    // int main(){
    //     int count=0;
    //     char ch;
    //     cin>>ch;
    //     while(ch!='$'){
    //         count++;
    //         cin>>ch;
    //     }
    //     cout<<count;
    // }
    //modified problem- also calc the number space and alphabet in above code
//    int main(){
//         int alphabets=0,numbers=0, blank_space=0,other_char=0,tab=0;
//         char ch;
//         cin.get(ch);
//         while(ch!='$'){
//             if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
//                 alphabets++;
//             }
//             else if(ch==' '){
//                 blank_space++;
//             }
//             else if(ch=='/t'){
//                 tab++;
//             }
//             else if(ch<='9' && ch>='0'){
//                 numbers++;
//             }
//             else{
//                 other_char++;
//             }
//             cin.get(ch);
//         }
//         cout<<"numbers"<<numbers<<endl;
//         cout<<"other_char"<<other_char<<endl;
//         cout<<"aphabets"<<alphabets<<endl;
//         cout<<"blank_space"<<blank_space<<endl;
//         cout<<"tab"<<tab<<endl;
//     }