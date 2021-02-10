#include <stdio.h>
#include <stdlib.h>

int faktoriyel(n)
{
    if(n==1)
        return n;
    return n*faktoriyel(n-1);

}

int main()
{
    printf("Hello world!\n");
    int sayi;
    int a;
    printf("sayý gir:");
    scanf("%d",&sayi);

    //a=faktoriyel(sayi);
    //printf("%d",a);
    printf("%d",faktoriyel(sayi));


    return 0;
}
