#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  if(n>=0 && n>=90 && n<=100){
      cout<<"A+"<<endl;
  }
  else if(n>=0 && n>=81 && n<=90){
      cout<<"A"<<endl;
  }
  else if(n>=0 && n>=71 && n<=80){
      cout<<"B"<<endl;
  }
  else if(n>=0 && n<=70){
      cout<<"You haven't full fill criteria"<<endl;
  }
  else{
      cout<<"Invalid number";
  }
  return 0;  
} 
