#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
     int a,b,c;
     printf("a= ");
     scanf("%d",&a);
     printf("b= ");
     scanf("%d",&b);
     c=b;
     b=a;
     a=c;
     printf("a= %d    b= %d     ",a,b);
     return 0;
}
