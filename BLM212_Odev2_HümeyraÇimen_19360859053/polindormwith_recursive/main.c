#include <stdio.h>
#include <stdlib.h>
#include <string.h> // string.lenght ile girilen metnin uzunlugu bulunuyor k�tphane import
/*
ACIKLAMA:
char dizisi tan�mlad� max 10 harflik get ile kulan�c�dan ald�m puts ile kullan�cdan al�na kelime g�sterdim
strin.h dan girilen kelimenin boyutu ald�m ve fonka 3. parametre olarak verdim baslang�c index 0 verdim
 func : diziyi ald� ve ilk bas ile son daki degerleiri kars�last�rd� esitse indecxler yenilendi ikinci ve sondan bri onceki indexler
 akrs�last�r�mak uzere ozy�neleme ile func cagr�ld�
 base case indexler degisice �ift boyutlu kelimelerde ilk index son indexi geciyor  tek boyutlularda ise esi kal�yor bu durumda kelime polindrom oluyor 1 degerini geri donduruyor

*/



int ispalindrom(char dizi[],int first,int end ){
    if(first>=end)
        return 1;
    else if(dizi[first]==dizi[end])
        return ispalindrom(dizi,first+1,end-1);
    else
        return 0;

}
int palindrom(char kelime[],int first,int end){
    if(first>=end){
        return 1;
    }
    if(kelime[first]!=kelime[end])
        return 0;
    else
        return palindrom(kelime,first+1,end-1);

}
int main()
{


    printf("metin giriniz:  ");
    char kelime[10];
    gets(kelime);
    printf("girilen metin gosterisiliyor : ");
    puts(kelime);
    int boyut=strlen(kelime);

    int sonuc;
    sonuc=ispalindrom(kelime,0,boyut-1);
    printf("palindrom mu : %d   :"  ,sonuc);
    if(sonuc==1)
        printf(" girilen metin polindromdur");
    else
        printf("girilen metin polindrom degildir ");

    // 43den sonrak�  SATIRIN MUAD�L�:
    // (sonuc==1)? printf(" girilen metin polindromdur"):printf("girilen metin polindrom degildir ");
    return 0;
}
