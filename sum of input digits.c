#include<stdio.h>
#include<conio.h>
void main()
{
    int num,a,b,c,d,e;
    printf("enter the 5 digit number\n");
    scanf("%d",&num);
    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=num/10000;
    printf("%d is the sum of the digits of number %d",a+b+c+d+e,num);
    
}