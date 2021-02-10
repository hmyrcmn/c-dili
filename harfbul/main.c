#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char metin[21];
    int index=0;
    printf("metin gir\n");
    gets(metin);
    for (int i=0;i<strlen(metin);i++)
    {
        if (isalpha==(metin[i]))
            continue;
        else
            metin[i]=' ';
            puts(metin);


    }





    return 0;
}
