#include <stdio.h>
#include <stdlib.h>

int main()
{   int x[30]={0};
    int n=0,i=0,j=0;
    printf("Nhap do dai chuoi nhi phan");
    scanf("%d",&n);

    while(i!=-1){
    for( i=n-1;i>=0;i--){
        if(x[i]==0){
            x[i]=1;
            for(j=i+1;j<=n-1;n++) x[j]=0;break;
        }
    }
    for (i=0;i<n;i++) printf("%d",x[i]);
    printf("\n");
    }

    return 0;
}
