#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    printf("==Menu====\n 1.Pho\n 2.Bun bo\n 3.My Quang\n 4.Thit Cho\n");
    printf("ban chon mon so: ");
    scanf("%d",&a);
    printf("\n");
    switch(a)
    {
        case 1:
        printf("ban da lua chon Pho.");
        break;
        case 2:
        printf("ban da lua chon Bun bo");
        break;
        case 3:
        printf("ban da lua chon My Quang");
        break;
        case 4:
        printf("ban da lua chon Thit Cho");
        break;
        default:
        printf("ban chua chon mon!");
    }
        return 0;
}
