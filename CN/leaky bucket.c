//week8
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int p[8], i, clk, b, n, psr = 0, size, time;
    for (i = 0; i < 5; ++i)
    {
        p[i] = rand() % 10;
        if (p[i] == 0)
            --i;
    }
    printf("Enter output rate: ");
    scanf("%d", &n);
    printf("Enter bucket size: ");
    scanf("%d", &b);
    for (i = 0; i < 5; ++i)
    {
        if ((p[i] + psr) > b)
            if (p[i] > b)
                printf("\nIncoming packet size:%d greater than bucket capacity\n", p[i]);
            else
                printf("Bucket size exceeded\n");
        else
        {
            size = p[i];
            psr += size;
            printf("\n--------------------------------------------------\n");
            printf("Incoming packet: %d\n", size);
            printf("Transmission left: %d\n", psr);
            time = rand() % 10;
            printf("Next packet will come at %d\n", time);
            for (clk = 0; clk < time && psr > 0; ++clk)
            {
                printf("\nTime left %d---No packets to transmit!!\n", time - clk);
                sleep(1);
                if (psr)
                {
                    printf("Transmitted\n");
                    if (psr < n)
                        psr = 0;
                    else
                        psr -= n;
                    printf("Bytes remaining: %d\n", psr);
                }
                else
                    printf("No packets to transmit\n");
            }
        }
    }
    return 0;
}

