#include <stdio.h>
#include<conio.h>
// int main() {
//   int a[10][10], transpose[10][10], row, col;
//   printf("Enter rows and columns: ");
//   scanf("%d %d", &row, &col);

 
//   printf("\nEnter matrix elements:\n");
//   for (int i = 0; i < row; ++i)
//   for (int j = 0; j < col; ++j) {
//     printf("Enter element a%d%d: ", i + 1, j + 1);
//     scanf("%d", &a[i][j]);
//   }

  
//   printf("\nEntered matrix: \n");
//   for (int i = 0; i < row; ++i)
//   for (int j = 0; j < col; ++j) {
//     printf("%d  ", a[i][j]);
//     if (j == col - 1)
//     printf("\n");
//   }

//   // transpose
//   for (int i = 0; i < row; ++i)
//   for (int j = 0; j < col; ++j) {
//     transpose[j][i] = a[i][j];
//   }

 
//   printf("\nTranspose of the matrix:\n");
//   for (int i = 0; i < col; ++i)
//   for (int j = 0; j < row; ++j) {
//     printf("%d  ", transpose[i][j]);
//     if (j == row - 1)
//     printf("\n");
//   }
//   return 0;
// }
//matrix operation
// int main()
// {

// int m, n,k;
// scanf("%d %d",&m,&n);
// int i, j;
// int mat1[m][n], mat2[m][n], mat3[m][n];
// for(i = 0; i < m; i++)
// {
// for(j = 0; j < n; j++)
// scanf("%d",&mat1[i][j]);
// }
// for(i = 0; i < m; i++)
// {
// for(j = 0; j < n; j++)
// scanf("%d",&mat2[i][j]);
// }
// int c;
// printf("\tEnter the operation +(1),-(2),*(3)\t \n");
// scanf("%d",&c);
// if(c==1){

//     for(i = 0; i < m; i++)
// {
// for(j = 0; j < n; j++)
// {
// mat3[i][j] = mat1[i][j] + mat2[i][j];
// }
// }
//  printf("\nSum of the matrix:\n");
// for(i = 0; i < m; i++)
// {
// for(j = 0; j < n; j++)
// printf(" %d ", mat3[i][j]);
// if(j=n-1)
// printf("\n");
// }
// }
// if(c==2){
//      for(i = 0; i < m; i++)
// {
// for(j = 0; j < n; j++)
// {
// mat3[i][j] = mat1[i][j] - mat2[i][j];
// }
// }
//  printf("\nSubtraction of the matrix:\n");
// for(i = 0; i < m; i++)
// {
// for(j = 0; j < n; j++)
// printf(" %d ", mat3[i][j]);
// if(j=n-1)
// printf("\n");
// }
// }
// if(c=3){
//     int sum=0;
//     for (i = 0; i < m; i++) {
// for (j = 0; j < m; j++) {
// for (k = 0; k < n; k++) {
// sum = sum + mat1[i][k]*mat2[k][j];
// }

// mat3[i][j] = sum;
// sum = 0;
// }
// }

// printf("\nProduct of the matrices:\n");

// for (i = 0; i < m; i++) {
// for (j = 0; j < n ; j++)
// printf("%d\t", mat3[i][j]);
// if(j=n-1)
// printf("\n");
// }
// }


// return 0;
// }
//sum of diagonal elements
// int main(){
//     int n,m;
//     scanf("%d %d",&m,&n);
//     int arr[m][n];
 
//     for (int  i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&arr[i][j]);     /* code */
//         }
        
       
//     }
//      int sum=0;
//     for ( int i = 0; i < m; i++)
//     {
//         for (int  j = 0; j < n; j++)
//         {
           
//             if (i==j)
//             {
//                 sum+=arr[i][j];
//             }
            
//         }
        
//         printf("%d\t" ,sum);
//     }

    
//     return 0;
// }
//sum of upper and lower triangle
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for (int  i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d %d",&arr[i][j]);
        }
    }
    int upperSum=0;
    for (int i = 0; i < m; i++)
    {
        upperSum=0;
        for (int  j = 0; j < n; j++)
        {
            if(i<j){
                upperSum+=arr[i][j];
            }
        }
           
    }
    printf("upper sum is %d", upperSum);
    int lowerSum=0;
    for (int i = 0; i < m; i++)
    {
        lowerSum=0;
        for (int  j = 0; j < n; j++)
        {
            if(j>i){
                lowerSum+=arr[i][j];
            }
        }
         
    }
    printf("Lower sum is %d", lowerSum);
    
    return 0;

}