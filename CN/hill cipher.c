#include<stdio.h>
#include<string.h>
void main()
{
    int a[3][3]={{6,24,1},{13,16,10},{20,17,15}};
    int b[3][3]={{8,5,10},{21,8,21},{21,12,8}};
    int i,j,t=0;
    int pt[20],d[20];
    char msg[20];
    printf("enter msg ");
    scanf("%s",msg);
    int len=strlen(msg);
    for(i=0;i<len;i++)
    {
        pt[i]=msg[i]-65;
        printf("%d ",pt[i]);
    }
    for(i=0;i<3;i++)
    {
        t=0;
        for(j=0;j<3;j++)
            t+=a[i][j]*pt[j];
        d[i]=t%26;
    }
    printf("\nencrypted text: ");
    for(i=0;i<3;i++)
        printf("%c",d[i]+65);
    for(i=0;i<3;i++)
    {
        t=0;
        for(j=0;j<3;j++)
            t+=b[i][j]*d[j];
        pt[i]=t%26;
    }

    printf("\ndecrypted text: ");
    for(i=0;i<3;i++)
        printf("%c",pt[i]+65);

}
