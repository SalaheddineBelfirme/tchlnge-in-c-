#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    char s[]="-+*/cossin";
    float n1,n2;
    char c;
    printf(" 1=>+;\n 2=>-; \n 3=>* ;\n 4=>COS \n 6=>SIN; \n 7=>tong");
    printf("\n tape singile : " );
    scanf("%c",c);
    switch(c){
    case : "+"{
    printf("tape number one \n  : " );
    scanf("%f",n1);
    printf("tape number two \n : " );
    scanf("%f",n2);
    printf("%f",n1+n2);
    }

    return 0;
    }
}
