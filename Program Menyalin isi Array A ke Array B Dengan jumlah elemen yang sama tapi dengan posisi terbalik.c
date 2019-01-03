#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int c[5]={1,2,3,4,5};
    int d[5];
    int i=0, j=0;
    printf("Nilai Array Yang Akan Dimunculkan\n");
    for(i=4; i>=0;i--)
    {
    d[i]=c[j];
    printf("%d",c[j]);
    j++;
    }
    printf("\nPosisi Terbalik Dari Array A ke Array B Sebagai Berikut\n");
    for(i=0;i<5;i++)
    {
        printf("%d",d[i]);
    }
    printf("\n");
    system("pause");
    return 0;






}
