#include<stdio.h>
void swap (int *x,int *y)
{
int temp;
temp = *x;
*x=*y;
*y=temp;
}
int main()
{
int a,b;
printf("enter a and b values");
scanf("%d%d",&a,&b);
printf("before swap,a=%d and b=%d\n",a,b);
swap(&a,&b);
printf("after swap, a=%d and b = %d\n",a,b);
return 0;
}
