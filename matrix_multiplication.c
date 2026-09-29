#define r 3
#define c 3
#include<stdio.h>
int main()
{
    int a[r][c],b[r][c],mul[r][c],i,j,k;
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
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("[a]*[b]=\n");
    printf("\t");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    return 0;
 }
