#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int  min=1;
    int x=0, max=100, soBiMat,SoNguoiChoi=0, level, count=0, choitiep=1;
    char Player1[12], Player2[12];
    srand (time(NULL));
    soBiMat = (rand() % (max - min+ 1)) + min;
    do
    {
    printf("*=*=*=*=*=*=*=*=*=*=Chao Mung Den voi game doan so=*=*=*=*=*=*=*=\n");
    printf("        Chon che do choi    I.1 nguoi     II.2 nguoi\n\n");
    scanf("%d",&SoNguoiChoi);
    printf("        Chon Level?\n <1>. 1~100       <2>.1~1000       <3>.1~10000\n");
    scanf("%d",&level);

    do
    {
        if(level==1||level==2||level==3) printf("Ban da chon muc %d\n",level);
        switch(level)

        {case 1:
            max=100;
            break;
        case 2:
            max=1000;
            break;
        case 3:
            max=10000;

            break;
        default:
            printf("ban chua chon level");
        }
        srand (time(NULL));
    soBiMat = (rand() % (max - min+ 1)) + min;
    }while(level!=1&&level!=2&&level!=3);

    do
    {   x=0;//khoi tao x =0 de san sang cho luot choi thu 2
        switch(SoNguoiChoi)
        {
        case 1:
            {
                count=0;
                printf("===========Tim an so x nam trong khoang tu 1 den %d cua chung toi========\n",max);
                for (x; x!= soBiMat;)
                {
                    printf("                Moi nhap so cua ban: ");
                    scanf("%d",&x);  count++;
                    if (x==soBiMat)
                    printf("\n*********************Chinh cmn xac. Chuc mung ban!!!!!!!**********************\n          Times: %d",count);
                    else if(x>soBiMat)
                    printf("                Nho Hon\n");
                    else if(x<soBiMat)
                    printf("                Lon Hon\n");
                }
                break;
            }
        case 2:
            {
                count=0;
                printf("Moi nhap ten nguoi choi thu nhat: ");
                scanf("%s",&Player1);
                printf("Moi nhap ten nguoi choi thu hai: ");
                scanf("%s",&Player2);

                printf("Xin moi %s nhap so bi mat trong khoang tu 1~%d: ",Player1,max);
                scanf ("%d",&soBiMat);
                printf("Cam on %s !",Player1);
                system("cls");
                printf("===========%s tim an so x nam trong khoang tu 1 den %d do %s nhap truoc do========\n",Player2,max,Player1);
                for (x; x!= soBiMat;)
                    {
                        printf("                Moi %s nhap so: ",Player2);
                        scanf("%d",&x);count++;
                        if (x==soBiMat)
                        printf("\n**************Chinh cmn xac. %s  la nguoi chien thang!!!!************\n          Times: %d",Player2,count);
                        else if(x>soBiMat)
                        printf("                Nho Hon\n");
                        else if(x<soBiMat)
                        printf("                Lon Hon\n");
                    }
                break;
            }
            default:
                printf("Chi duoc chon 1 hoac 2 nguoi choi");
        }
    }while (SoNguoiChoi!=1&&SoNguoiChoi!=2);

        printf("\n\n\n\n--------Muon choi tiep khong?   1.Co :>   0.Ko :< ");
        scanf("%d",&choitiep);
        system("cls");//xoa sach man hinh
    }while(choitiep!=0);
    return 0;
}







