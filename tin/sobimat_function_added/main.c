#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int taoSoBm(int max,int min)
{
    int soBiMat;
    srand (time(NULL));
    soBiMat = (rand() % (max - min+ 1)) + min;
    return soBiMat;
}

void soSanh(x,sbm)
{
        if(x>sbm) printf("nho hon");
        else if(x<sbm) printf("lon hon");
        else  printf("ban doan dung roi xin chux mung!");
}
int main()
{
    const   int min=1;
    int lvl,x,soNgChoi,sbm,max;
    printf("Chao mung den voi game doan so \n");
    printf("Chon che do choi:   1. 1p   2. 2p ");
    scanf("%d",&soNgChoi);
    printf("Chon muc do:       1.1~100        2.1~1000        3.1~10000");
    scanf("%d",&lvl);
    switch(lvl)
    {
    case 1:
        max=100;
        printf("\nban da chon level 1.1~100");
        break;
    case 2:
        max=1000;
        printf("\nban da chon level 2.  1~1000");
        break;
    case 3:
        max=10000;
        printf("\nban da chon level 3.  1~1000");
        break;
    }

    if(soNgChoi==1) sbm=taoSoBm(max,min);
    else if (soNgChoi==2)
    {
            printf("\nnhap so bi mat");
            scanf("%d",&sbm);
            system("cls");
    }
    do
    {
        printf("\nnhap x:   \n");
        scanf("%d",&x);
        soSanh(x,sbm);


    }while(x!=sbm);






    return 0;
}
