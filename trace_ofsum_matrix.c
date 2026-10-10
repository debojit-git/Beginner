#define r 3
#define c 3
#include<stdio.h>
int main()
{
    int a[r][c],b[r][c],sum[r][c],i,j,trace=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\t[a]=\n");
    printf("\t");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    printf("[b]=\n");
    printf("\t");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            if(i==j)
            {
                trace=trace+sum[i][j];
            }
        }
    }
    printf("[a]+[b]=\n");
    printf("\t");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    printf("Trace of sum matrix is %d",trace);
    return 0;
}