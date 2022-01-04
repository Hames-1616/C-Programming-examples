#include<stdio.h>
void main()
{
    int ls,fs,n;
    printf("enter the number\n");
    scanf("%d",&n);
    ls=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fs=n;
    printf("sum of first and lasy digit = %d",fs+ls);
}