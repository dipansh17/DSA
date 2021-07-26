int main(){
    int n,m;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for (int  i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++){
            scanf("%d%d",&arr[i][j]);
        }
    }

    for (int  i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++){
            printf("arr[%d][%d]=%d",i,j,arr[i][j]);
        }
       printf("/n");
    }
        return 0;
}