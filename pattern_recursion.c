#include<stdio.h>
int pattern2(int n,int c)
{
    if(c==n)
        return 0;
    else{
    printf("%d",n);
    pattern2(n,c+1);
    }

}
int pattern1(int n)
{
    if(n==0)
        return 0;
    else
    {
        pattern2(n,0);
        printf("\n");
        pattern1(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    pattern1(n);
    return 0;
}
