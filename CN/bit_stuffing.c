//week 1
#include<stdio.h>
void main()
{
    int a[20],b[20],i,j,k,count,n;
    printf("enter frame length:");
    scanf("%d",&n);
    printf("enter input frame(0's & 1's only):");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    count=1;
    j=0;
    while(i<n)
    {
        if (a[i]==1)
        {
            b[j]=a[i];
            for(k=i+1;a[k]==1 && k<n && count<5;k++)
            {
                j++;
                b[j]=a[k];
                count++;
                if (count==5)
                {
                    j++;
                    b[j]=0;
                }
                i=k;
            }
        }
        else
            b[i]=a[i];
        i++;
        j++;
    }
    printf("after stuffing the frame is:");
    for(i=0;i<j;i++)
        printf("%d",b[i]);
}
