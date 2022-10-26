#include <stdio.h>
#include<string.h>





int main(int argc, char *argv[] ) {





   char a[126][101];
   char pomocna[100];
   // int count = 1;
    printf(" %d %s!\n",argc, argv[1]);
        for(int b = 0; b < 126;b++){
            scanf("%s",pomocna);
            strcpy(a[b], pomocna );


            }

    for(int b = 0; b < 126;b++){int porovnani;
        //if (count > 3)count = 1;

        porovnani =  strcmp(a[b],argv[1] );
      if(porovnani==0)printf("Kontakt je %s %s \n%s ",a[b-1],a[b-2],a[b]);
      //count++;
    }














    return 0;
}
