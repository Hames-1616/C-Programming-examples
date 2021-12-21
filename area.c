#include<stdio.h>

void main()
{
 float l,b,r,area,a,peri,circum;

printf("enter the length and breadth of rectangle\n");
scanf("%f%f",&l,&b);

area=l*b;

printf("area of a rectangle = %f\n",area);

peri=2*(1+b);

printf("perimeter of a rectangle = %f\n", peri);

printf("enter the radius of a circle\n");

scanf("%f",&r);

a=3.14*r*r;

printf("area of circle = %f\n",a);
circum=2*3.14*r;
printf("circumference of a circle = %f",circum);