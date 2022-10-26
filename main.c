#include <stdio.h>
#include <string.h>





int main(int argc, char *argv[] ) {

    char c[100];

    printf(" %d %s!\n",argc, argv[1]);

    for(int a = 0; a <= 3;a++){
        int vys;
        scanf("%s",c);
        printf("%s\n",c);
        vys = strcmp(c,argv[1]);
        if(vys==0)printf("Hledany kontakt je %s\n",c);
        else printf  ("Zadane cislo neodpovida zadnemu kontaktu\n");



    }











    return 0;
}
