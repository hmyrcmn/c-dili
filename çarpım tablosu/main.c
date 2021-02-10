#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    // çarpým tablosu
    for (int i=0;i<10;i++){
        for (int j=0;j<=10;j++){
            printf("%d * %d=\t%d\n",i,j,i*j);
        }
    }
    printf("\n\n\n\n\n");
int dizi[100], s, x, y, pw, t;

   printf("LUTFEN DIZI ICIN ELEMAN SAYISINI GIRINIZ\n");
   scanf("%d", &s); //s dizideki eleman sayýsý

   printf("%d ELEMANA AIT DEGERLERI GIRINIZ\n", x);

   for ( x = 0 ; x < s ; x++ )
      scanf("%d", &dizi[x]);

   for ( x = 0 ; x < ( s - 1 ) ; x++ )
   {
      pw = x;

      for ( y = x + 1 ; y < s ; y++ )
      {
         if ( dizi[pw] > dizi[y] )
            pw = y;
      }
      if ( pw != x )
      {
         t = dizi[x];
         dizi[x] = dizi[pw];
         dizi[pw] = t;
      }
   }

   printf("ARTAN SIRAYA GORE LISTELEME:\n");

   for ( x = 0 ; x < s ; x++ )
      printf("%d\n", dizi[x]);




    return 0;
}
