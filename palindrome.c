#include<stdio.h>
void main()
{
    int n,original,reversed=0,rem;
    printf("enter the number\n");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        rem=n % 10;
        reversed= reversed * 10 + rem;
        n=n/10;
    }
    printf("reversed nuber = %d\n",reversed);
    
    if(original==reversed)
    {
        printf("palindrome number");
    }
    else
    {
        printf("number is not palindrome");
    }
}