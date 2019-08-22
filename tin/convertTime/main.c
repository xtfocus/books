#include <stdio.h>

int main()
{
    char x;
nhaplai:
    printf("\n\n\t\t *A*");
    printf("\n\n\t\t *B*");
    printf("nhap gia tri ");
    x = getchar();
    if(x =='g')
    {
        goto nhaplai;
    }
    getchar();
}
