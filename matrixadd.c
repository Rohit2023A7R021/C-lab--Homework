#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the limit");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n],i,j;
    printf("A matrix element");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("B matrix element");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the result matrix is...\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
}