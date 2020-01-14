#include <stdio.h>
#include <stdlib.h>

int main()
{


    char ch;
    char string[20];
    char sen[30];

    scanf("%c",&ch);
    scanf("%s \n",string);
    fgets(sen, 30 , stdin);

    printf("%c \n",ch);
    printf("%s \n",string);
    printf("%s",sen);
    return 0;
}
