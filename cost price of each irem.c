#include<stdio.h>
void main()
{
    float s, p, c;  

    printf("Enter the selling price of 15 items: ");
    scanf("%f", &s);
    printf("Enter the total profit on 15 items: ");
    scanf("%f", &p);

  
    c = (s-p)/15;

    printf("\nThe cost price of an item is %f", c);
}