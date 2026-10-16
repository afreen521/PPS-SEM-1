#includeL<stdio.h>
intsum(int n)
{
if(n==0)
return 0;
return n+sum(n-1);
}
int main()
{
intn,result;
printf("enter a number:");
scanf("%d,&n");
result=sum(n);
printf("sumof first%dnatural numbers is %d",n,result);
return 0;
}
