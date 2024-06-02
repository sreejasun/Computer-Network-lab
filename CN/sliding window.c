//week 3
#include<stdio.h>
int main()
{
    int w,i,f,frames[50];
    printf("enter window size ");
    scanf("%d",&w);
    printf("\nenter no.of frames to transmit ");
    scanf("%d",&f);
    printf("enter frames ");
    for(i=1; i<=f; i++)
        scanf("%d",&frames[i]);
    printf("with sliding window protocol, the frames will be sent as:\n\n");
    printf("after sending %d frames at each stage sender waits for acknowledgement sent by reciever \n\n",w);
    for(i=1; i<=f; i++)
    {
        if (i%w==0)
        {
            printf("%d\n",frames[i]);
            printf("ack of above frames sent is received by sender\n\n");
        }
        else
            printf("%d ",frames[i]);
    }
    if (f%w!=0)
        printf("\n ack of above frames sent is received by sender\n");
    return 0;
}
