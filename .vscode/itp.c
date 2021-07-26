#include<stdio.h>
#include<conio.h>
// void main(){
//     int n;
//     printf("Enter the Number");
//     scanf("%d",&n);
//     int count=1;
//     while(count<=n){
        
//         printf("%d",count);
//         count++;
//     }
// }
///2
// void main(){
//     int n;
//     printf("Enter the Number");
//     scanf("%d",&n);
    
//     while(n>=1){
        
//         printf("%d",n);
//         n--;
//     }
// }
//3
void main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    int sum=0;
  for(int i=0;i<=n;i++){
      if(i%2==0){
          sum=sum+i;
      }
  }
  printf("%d",sum);
}
