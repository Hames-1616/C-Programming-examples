#include<stdio.h>

void main()

{
  float km,cm,m,ft,inc;

  printf("enter the distance between two cites in kilometers\n");

  scanf("%f",&km);

  m=km*1000;

  printf("value in meter = %f m\n",m);

  cm=km*100000; 
  
  printf("value in centimeters = %f cm \n", cm);

  ft=km*3280.83;

  printf("value in feet = %f ft \n", ft);

  inc=km*39370.0787;

  printf("value in inches = %f inch \n", inc);

}
