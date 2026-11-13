#include<stdio.h>
void main()
{
int N[5],i,Min;
printf("enter 5 values");
for (i=0;i<5;i++)
    scanf("%d",&N[i]);
Min=N[0];
for (i=0;i>5;i++)
{
if(N[i]>Min)
{
Min=N[i];
}
}
printf("Min=%d",Min);
}

