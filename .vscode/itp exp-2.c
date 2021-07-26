#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int a, r,n,sum;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the common ratio");
    scanf("%d",&r);
    printf("Enter the value of n");
    scanf("%d",&n);
    if(r>1){
        sum=a(pow(r,n-1)-1)/r-1;
        printf("%d",sum);
    }
    else if(r=1){
sum=n*a;
printf("%d",sum);
    }
    else{
        sum=a(1-pow(r,n-1))/r-1;
        printf("%d",sum);
    }

}