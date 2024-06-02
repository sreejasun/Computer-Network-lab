//week 5
#include<stdio.h>
struct node
{
    unsigned dist[20];
    unsigned from[20];
} rt[10];
int main()
{
    int costmat[20][20];
    int n,i,j,k;
    printf("enter no.of nodes ");
    scanf("%d",&n);
    printf("\nenter cost matrix \n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            scanf("%d",&costmat[i][j]);
            rt[i].dist[j]=costmat[i][j];
            rt[i].from[j]=j;
        }
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                for(k=0; k<n; k++)
                    if(rt[i].dist[j]>costmat[i][k]+rt[k].dist[j])
                    {
                        rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                        rt[i].from[j]=k;

                    }
    for(i=0; i<n; i++)
    {
        printf("\n\nfor router %d\n",i+1);
        for(j=0; j<n; j++)
            printf("\t\nnode %d via %d distance %d",j+1,rt[i].from[j]+1,rt[i].dist[j]);
    }
    printf("\n\n");
    return 0;
}
