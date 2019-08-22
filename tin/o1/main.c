#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double x=0, y=0;
    scanf("%lf",&x);
    printf("gia tri tuyet doi cua x la %lf  ",fabs(x));
    printf("\n lam tron lon: %lf", ceil(x));
    printf("\n lam tron nho: %lf \n\n ", floor(x) );
    return 0;
    printf("Bay gio lam luy thua");
    printf("nhap co so: ");
        scanf("%lf",&x);
    printf("\n nhap so mu: ");
        scanf("%lf",&y);
    printf("x^y= %lf",pow(x,y));


    return 0;
}
