#include <stdio.h>
#include<string.h>







const char* prekladac(char jmeno[]){
    int stringlength = strlen(jmeno);
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='A'||jmeno[a]=='a'||jmeno[a]=='B'||jmeno[a]=='b'||jmeno[a]=='C'||jmeno[a]=='c')jmeno[a]='2';
    }
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='D'||jmeno[a]=='d'||jmeno[a]=='E'||jmeno[a]=='e'||jmeno[a]=='F'||jmeno[a]=='f')jmeno[a]='3';
    }
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='G'||jmeno[a]=='g'||jmeno[a]=='H'||jmeno[a]=='h'||jmeno[a]=='I'||jmeno[a]=='i')jmeno[a]='4';
    }
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='J'||jmeno[a]=='j'||jmeno[a]=='K'||jmeno[a]=='k'||jmeno[a]=='L'||jmeno[a]=='l')jmeno[a]='5';
    }
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='M'||jmeno[a]=='m'||jmeno[a]=='N'||jmeno[a]=='n'||jmeno[a]=='O'||jmeno[a]=='o')jmeno[a]='6';
    }
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='P'||jmeno[a]=='p'||jmeno[a]=='Q'||jmeno[a]=='q'||jmeno[a]=='R'||jmeno[a]=='r'||jmeno[a]=='S'||jmeno[a]=='s')jmeno[a]='7';
    }
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='T'||jmeno[a]=='t'||jmeno[a]=='U'||jmeno[a]=='u'||jmeno[a]=='V'||jmeno[a]=='v')jmeno[a]='8';
    }
    for(int a=0;a < stringlength ;a++){
        if(jmeno[a]=='W'||jmeno[a]=='w'||jmeno[a]=='X'||jmeno[a]=='x'||jmeno[a]=='Y'||jmeno[a]=='y'||jmeno[a]=='Z'||jmeno[a]=='z')jmeno[a]='9';
    }


    return jmeno;



}





int main(int argc, char *argv[] ) {

    char a[126][101];

    int check_counter = 0;
    int str_counter = 0;
    char pomocna[100];
    int pom=0;
    char holder [100] ;
    if(argc==2) pom = strlen(argv[1]);



    for (int b = 0; b < 126; b++) {

        scanf("%s", pomocna);
        strcpy(a[b], pomocna);




    }



if(argc==1) for (int b = 0; b < 126; b++) {if (str_counter == 3)str_counter = 0;


       if(str_counter==0||str_counter==1)printf("%s ",a[b]);
       else if(str_counter==2) printf("\n%s\n",a[b]);

        str_counter++;
}



 else if(argc==2) {


       for (int b = 0; b < 126; b++) {

           if (str_counter == 3)str_counter = 0;
           strcpy(holder,a[b]);
           const char* help;
         help= prekladac(a[b]);




           for (int g = 0; g < pom; g++) {
               if (help[g] == argv[1][g])check_counter++;



               if (check_counter == pom && str_counter == 2)
               { printf("%s %s \n%s \n ", a[b - 1], a[b - 2], holder);}
               else if (check_counter == pom && str_counter == 0) {
                   printf("%s %s \n%s \n ", holder, a[b + 1], a[b + 2]);
               }
               else if (check_counter == pom && str_counter == 1) {
                   printf("%s %s \n%s \n ", a[b - 1], holder, a[b + 1]);
               }


         }

           check_counter = 0;
           str_counter++;
       }
   }
 else printf("Bylo zadano priliz mnoho argumentu");

        return 0;
    }
