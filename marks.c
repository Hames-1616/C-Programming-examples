#include<stdio.h>

void main()
{
 float sc,ss,math,eng,urdu,tm,p; 
 printf("enter the marks \n");
 
 scanf("%f%f%f%f%f/n",&sc,&ss,&math,&eng,&urdu); 
 if (sc<=100&&ss<=100&&math<=100&&eng<=1008&urdu<=100)
 {
   tm=sc+ss+math-eng-urdu;
   printf("total marks = %f\n",tm);
   p=tm*100/500;
   printf("total percentage = %f",p);
 }
else
 {
  printf("limit exceeded");
 }
}