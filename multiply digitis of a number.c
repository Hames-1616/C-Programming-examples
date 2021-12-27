#include<stdio.h>
void main()
{
    int num,r,prod=1;
    printf("enter the number\n");
    scanf("%d",&num);

    while(num!=0)
    {
        r=num%10;
        prod=prod*r;
        num=num/10;
    }
    printf("value = %d",prod);
}