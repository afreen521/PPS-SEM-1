#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sumi,subi;
    float  c,d,sumd,subd;
    scanf("%d",& a);
    scanf("%d",& b);
    scanf("%f",& c);
    scanf("%f",& d);
    sumi=a+b;
    subi=a-b;
    sumd=c+d;
    subd=c-d;
    printf("%d ",sumi);
    printf("%d",subi);
    printf("\n%.1f ",sumd);
    printf("%.1f",subd);
    
    return 0;
}

