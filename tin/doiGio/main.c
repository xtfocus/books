#include <stdio.h>
#include <stdlib.h>
void doiGio(int*pointerH,int*pointerM);
int main()
{
    int gio=0,phut=0;
    printf("nhap gio: "); scanf("%d",&gio);
    printf("\nnhap phut: "); scanf("%d",&phut);
    doiGio(&gio,&phut);
    printf("%d h %d m", gio,phut);
    return 0;
}
void doiGio(int*H,int*M)
{
    *H=*H+*M/60;
    *M=*M%60;
}
