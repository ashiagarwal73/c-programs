#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    char str[100];
    int frequency[128];
    int i;
    for(i=0;i<128;i++)
    {
        frequency[i]=0;
    }
    printf("enter string\n");
    scanf("%s",str);
    int len=strlen(str);
    i=0;
    while(i<len)
    {
        x=str[i];
        frequency[x]++;
        i++;
    }
    for(i=0;i<128;i++)
    {
        if(frequency[i]!=0)
        printf("%c is %d times\n",i,frequency[i]);
    }
}
