//week 7
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char plain[20],cipher[20];
    int i,key,len;
    printf("enter msg ");
    scanf("%s",plain);
    printf("enter key ");
    scanf("%d",&key);
    printf("plain text: %s\n",plain);
    len=strlen(plain);
    printf("encrpted text: ");
    for(i=0; i<len; i++)
    {
        cipher[i]=plain[i]+key;
        if(isupper(plain[i]) && (cipher[i]>'Z'))
            cipher[i]=cipher[i]-26;
        if(islower(plain[i]) && (cipher[i]>'z'))
            cipher[i]=cipher[i]-26;
        printf("%c",cipher[i]);
    }
    printf("\ndecrypted text: ");
    for(i=0; i<len; i++)
    {
        plain[i]=cipher[i]-key;
        if(isupper(cipher[i]) && (plain[i]<'A'))
            plain[i]=plain[i]+26;
        if(islower(cipher[i]) && (plain[i]<'a'))
            plain[i]=plain[i]+26;
        printf("%c",plain[i]);
    }
}
