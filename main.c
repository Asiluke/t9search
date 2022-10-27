#include <stdio.h>
#include<string.h>
#include <stdlib.h>





int main(int argc, char *argv[] ) {


//promene
    char a[126][101];
    int counter = 0;
    char pomocna[100];
    int pom = strlen(argv[1]);

    printf("  Zadany argument je %d %s!\n", argc, argv[1]);
    system("cls");

    //nacteni seznamu//
    for (int b = 0; b < 126; b++) {
        scanf("%s", pomocna);
        strcpy(a[b], pomocna);


    }
    //porovnani a vypsani//
    for (int b = 0; b < 126; b++) {                 //vsechny jedontlive retezce
        for (int g = 0; g < pom; g++) {             //pom je delka argumentu
            if (a[b][g]== argv[1][g])counter++;}    //overuju jestli jednotli znaky v retezci jsou stejne jako v argumentu, pokud ano na pocitadle inkrementuju
                if(counter==pom){printf("%s %s \n*%s \n", a[b - 1], a[b - 2], a[b]);


                }
                                                                          //pokud counter dostahl plnych bodu tak jsou vsecny znaky v retezci
                                                                                                    // a argumentu stejne, vypisuju jeste dalsi dva pribuzne retezce
        counter = 0;
        }

        return 0;
    }
