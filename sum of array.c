#include<stdio.h>
void main()
{
int M[5],i,p=1;
//int M[5]={10,,30,40,50};
printf("enter the value");
for(i=0;i<5;i++)

scanf("%d",&M[i]);

for(i=0;i<5;i++)
{
p=p*M[i];
}
printf("product=%d",p);
}
