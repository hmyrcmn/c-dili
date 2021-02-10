#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> //sleep fonksiyonu içeren kütüphane
int main()
{
    printf("Hello world!\n");

    for (int i=1;i<=24;i++)//saat
        {

        for (int j=1;j<=59;j++ )//dk
        {
            for (int k=1;k<=59;k++)
            {
                printf("%02d:%02d:%02d \r",i,j,k); // \r komutu satýr baþý yapar ayný satýra yazar
            }   Sleep(1) ;  // 1000 mili saniye bekler
        }
    }
    return 0;
}
