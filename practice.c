#include<stdio.h>
#include<conio.h>
// void main(){
    
//     int i=1;
//     int j=1;
//     while(i<=5){
//         j=1;
//         while(j<=5){
//             printf("%d",j);
//         j++;
//         }
//         printf("\n");
//         i++;
//     }
// }
// void main(){
//     for(int i=0;i<=5;i++){
//         for(int j=i;j<5;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("1");
//         }
//         printf("\n");

//     }
//  }





 
// void main(){
// int space ,row,k=0;
// double  user;
// printf("Enter the Number of Rows: ");
// scanf("%d",&row);
// for(int i=1;i<=row;i++,k=0){
//     for(space=1;space<=row-i;space++){
//         printf(" ");
//     }
//     while (k!=2*i-1)
//     {
//         printf("*");
//         k++;
//         /* code */
//     }
//     printf("\n");
    
// }
// printf("\n");

// for(int i=row;i>=1;i--){
//     for(space=0;space<row-i;space++)
//         printf(" ");
//         for(int j=i;j<=2*i-1;j++)
//         printf("*");
//         for(int j=0;j<i-1;j++)
//         printf("*");
//         printf("\n");
// }


// }


// void main(){
//     int n=5;
//     int i=1;
//     int j=1;
//     do
//     {
//         j=1;
//         do{

//         printf("*");
//         j++;
//         }while(j<=3);
//         printf("\n");
//         i++;

//     } while (i<=n);
    
// }
// void main(){
//     int i;
//     scanf("%d",&i);
//     int j=1;
//     do
//     {
//         j=1;
//         do
//         {
//          printf("%d",i);
//          j++;
//         } while (j<=i);
        
//         printf("\n");
//     i--;
//     } while (i>=1);
    
// }
//pascal's triangle
// int main() {
//    int rows, cof , space, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    cof=1;
//    for (i = 0; i < rows; i++) {
//       for (space = 1; space <= rows - i; space++)
//          printf("  ");
//       for (j = 0; j <= i; j++) {
//          if (j == 0 || i == 0)
//             cof = 1;
//          else
//             cof = cof * (i - j + 1) / j;
//          printf("%4d", cof);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
// int prevFact=factorial(n-1);
// return n*prevFact;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int ans=factorial(n);
//     printf("\nThe factorial is %d",ans);
    

//     return 0;
// }
//tower of hanoi
// void tOfHanoi(int n,int src,int des,int help){
//     if(n==0){
//         return ;
//     }

  
//     printf("move from  %d to  %d",src,des);
//       int prevHanoi= tOfHanoi(help,des,src);
// }
// int main(){
//     tOfHanoi(3,'A','C','B');
//     return 0;
// }

//Write a recursive program AND non recursive program to print the first m Fibonacci number
// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
// int n;
// scanf("%d",&n);
// int result= fib(n);
// printf("%d",result);
// return 0; 
// }
// int main() {
//     int  n, t1 = 0, t2 = 1;
//     int nextTerm = t1 + t2;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: %d, %d, ", t1, t2);

//     for (int i = 1; i <= n; ++i) {
//         printf("%d, ", nextTerm);
//         t1 = t2;
//         t2 = nextTerm;
//         nextTerm = t1 + t2;
//     }

//     return 0;
// }
///q1
// int main(){
//     char c;
//     printf("Enter the character");
//     c=getchar();
//     printf("character entered:");
//     putchar(c);
//     return 0;
// }
//prime
// int prime(int n,int i){
//     if(i==1){
//         return 1;
//     }
//     else
//     {
//         if(n%i==0){
//             return 0;
//         }
//         else
//         {
//             return prime(n,i-1);
//         }
        
//     }
    
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int check=prime(n,n/2);
//     if(check==1){
//         printf("%d is a prime number",n);
//     }
//     else{
//         printf("%d is not  a prime number",n);
//     }

//     return 0;
// }


//1d
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int  i = 0; i < n; i++)
//     {
//         printf("%d",arr[i]);
//     }
    
// }
//TRANSVERSAL
// int main(){
//     int n,m;
//     scanf("%d%d",&m,&n);
//     int arr[m][n];
//     for (int  i = 0; i < m; i++)
//     {
//         for(int j=0;j<n;j++){
//             scanf("%d%d",&arr[i][j]);
//         }
//     }

//     for (int  i = 0; i < m; i++)
//     {
//         for(int j=0;j<n;j++){
//             printf("arr[%d][%d]=%d",i,j,arr[i][j]);
//         }
//        printf("/n");
//     }
//         return 0;
// }
//SUM
//  #include<stdio.h>
 
// int main()
// {
//     int i, j, rows, columns, a[10][10], Sum;
    
//     printf("Please Enter Number of rows and columns  :  ");
//     scanf("%d %d", &i, &j);
    
//     printf("Please Enter the Matrix Row and Column Elements \n");
//     for(rows = 0; rows < i; rows++)
//     {
//         for(columns = 0; columns < j; columns++)
//         {
//             scanf("%d", &a[rows][columns]);
//         }
//     }
    
//     for(rows = 0; rows < i; rows++)
//     {
//         Sum = 0;
//         for(columns = 0; columns < j; columns++)
//         {
//             Sum = Sum + a[rows][columns];
//         }
//         printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
//     }
    
//     return 0;
// }
