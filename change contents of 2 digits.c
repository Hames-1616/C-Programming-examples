#include<stdio.h>
void main()
{
    int t1=10,t2=20,temp;
    printf("value of t1 and t2 before swapping \nt1=%d and t2=%d\n",t1,t2);
    temp=t1;
    t1=t2;
    t2=temp;
    printf("value of t1 and t2 after swapping \nt1=%d and t2=%d",t1,t2);
}