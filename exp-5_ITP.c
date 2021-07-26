#include <stdio.h>
#include <conio.h>
// #include<bits/stdc++.h>
int UseOfAuto(){
    auto a=3.2;
    auto b=32;
    auto c="HELLOWORLD";
    auto d='D';
}
void main(){
UseOfAuto(a,b,c,d);
printf("%a",a);
    printf("%a",b);
    printf("%a",c);
    printf("%a",d);

}


// int main(){
// char *ch;
// ch="ABC";
// while(*ch){
//     printf("%c",*ch++);
// }

// return 0;
// }
// int fun()
// {
//   static int count = 0;
//   count++;
//   return count;
// }
   
// int main()
// {
//   printf("%d ", fun());
//   printf("%d ", fun());
//   return 0;
// }
// extern int x = 32;
// int b = 8;
// int main() {
//    auto int a = 28;
//    extern int b;
//    printf("The value of auto variable : %d\n", a);
//    printf("The value of extern variables x and b : %d,%d\n",x,b);
//    x = 15;
//    printf("The value of modified extern variable x : %d\n",x);
//    return 0;
// }