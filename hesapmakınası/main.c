#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float a,b,toplam,fark,carpim,bolum;

    printf("1.sayý:");
    scanf("%f",&a);

    printf("2.sayý:");
    scanf("%f",&b);

    toplam=a+b;
    fark=a-b;
    carpim=a*b;
    bolum=a/b;
    printf("a+b: %.2f \n",toplam);
    printf("a-b: %.4f \n",fark);
    printf("a*b: %.1f \n",carpim);
    printf("a/b: %.10f\n",bolum);


    return 0;
}
