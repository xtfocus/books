#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{   int x=1;
    double a=0,b=0;
    printf("        ============May tinh CASIO FX500===============\n");
    while (x!=0)
    {
        printf("\n\n\n\n        ==========Chon phep tinh muon thuc hien\n       1.cong      2.tru       3.nhan      4.chia\n        0.Exit");

        scanf("%d",&x);
        if (x==0)
            return 0;
        else
        {
        switch(x)
            {
            case 1:
                printf("ban da chon phep Cong!\n");
                printf("Nhap so hang thu nhat: ");scanf("%lf",&a);
                printf("Nhap so hang thu hai: ");scanf("%lf",&b);
                printf("ket qua la: %lf",a+b);
                break;
            case 2:
                printf("ban da chon phep Tru!\n");
                printf("Nhap so tru: ");scanf("%lf",&a);
                printf("Nhap so bi tru: ");scanf("%lf",&b);
                printf("ket qua la: %lf",a-b);
                break;
            case 3:
                printf("ban da chon phep Nhan!");
                printf("Nhap thua so thu nhat: ");scanf("%lf",&a);
                printf("Nhap thua so thu hai: ");scanf("%lf",&b);
                printf("ket qua la: %lf",a*b);
                break;
            case 4:
                printf("ban da chon phep Chia!");
                printf("Nhap so chia: ");scanf("%lf",&a);
                printf("Nhap so bi chia: ");scanf("%lf",&b);
                if (b==0)

                    printf("Error");
                else

                printf("ket qua la: %lf",a/b);
                break;
            default:
                printf("Chi duoc nhap cac so 1,2,3,4");
            }
        }
    }

    return 0;
}
