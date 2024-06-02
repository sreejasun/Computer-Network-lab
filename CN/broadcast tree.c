//weeek 6
#include<stdio.h>
int a[10][10],n;
void adj(int k);
int main()
{
    int i,j,root;
    printf("enter no.of nodes ");
    scanf("%d",&n);
    printf("adjacent matrix \n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            scanf("%d",&a[i][j]);
    printf("enter root node ");
    scanf("%d",&root);
    adj(root);
}
void adj(int k)
{
    int i,j;
    printf("adj node of root node: ");
    printf("%d\n\n",k);
    for(j=1; j<=n; j++)
        if(a[k][j]==1||a[j][k]==1)
            printf("%d\t",j);
    printf("\n");
    for(i=1; i<=n; i++)
        if((a[k][j]==0)&&(a[i][k]==0) && (i!=k))
            printf("%d",i);
}
