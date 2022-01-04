#include <stdio.h>

void main()
{
    int men,wmen,litm,litwo,illit,lit,tot=80000,illitwmen;
    men=(52*80000)/100;
    wmen=tot-men;
    lit=(48*80000)/100;
    litm=(35*80000)/100;
    litwo=lit-litm;
    illitwmen=wmen-litwo;
    printf("total illiterate men of the town is %d\n",men-litm);
    printf("total illiterate women is %d\n",illitwmen);
}