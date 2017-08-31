/**
 * Projeto de Linguagens de Programa��o - 7N12
 * autores: Priscilla Rodrigues Martins, Gabriel, Lorrene Ogbonna
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int leitor(char str[]) {
    int i = 0, tamanho = strlen(str);

    goto Q0;

    Q0:
    if (i == tamanho) {
        return 1;
    }
    char grade = str[i];
    switch(grade) {
      case 'b' :
            i++;
            goto Q88;
            break;
      case 'f' :
            i++;
            goto Q82;
            break;
      case 'v' :
            i++;
            goto Q78;
            break;
      case 'd' :
            i++;
            goto Q75;
            break;
      case 't' :
            i++;
            goto Q39;
            break;
      case 'w' :
            i++;
            goto Q60;
            break;
      case 'i' :
            i++;
            goto Q10;
            break;
      case 'p' :
            i++;
            goto Q9;
            break;
      case 'e' :
            i++;
            goto Q29;
            break;
      case 'a' :
            i++;
            goto Q16;
            break;
      case 'n' :
            i++;
            goto Q32;
            break;
      case 'o' :
            i++;
            goto Q52;
            break;
      // caracteres

      // numeros

      default :
         printf("Invalid grade\n" );
         break;
    }

    Q88:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'b' :
            i++;
            goto Q88;
            break;
      case 'f' :
            i++;
            goto Q82;
            break;
      case 'v' :
            i++;
            goto Q78;
            break;
      default :
         printf("Invalid grade\n" );
         /*  SE ATENTAR A ESTA VALIDAÇÃO,
         SE A PALAVRA TERMINAR DEPOIS DO 1 NIVEL
         ELA VIRA UMA VARIAVEL DEPENDENDO DO CONTEXTO
         PERGUNTAR PRO PROF. */
         break;
    }



    Q16:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'n' :
            i++;
            goto Q17;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q17:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'd' :
            i++;
            goto Q4;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }
    Q78:

    Q18:

    Q19:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'e' :
            i++;
            goto Q20;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q20:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'n' :
            i++;
            goto Q27;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q27:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case ' ' :    //terminal COPIAR PARA OS OUTROS
          printf("PALAVRA RECONHECIDA\n" );
          return 1;
      default :
         printf("Invalid grade\n" ); /* vira variavel dependendo do contexto */
         break;
    }

    Q10:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'f' :
            i++;
            goto Q73;
            break;
      case 'n' :
            i++;
            goto Q11;
            break;
      default :
         printf("Invalid grade\n" );
         /*  SE ATENTAR A ESTA VALIDAÇÃO,
         SE A PALAVRA TERMINAR DEPOIS DO 1 NIVEL
         ELA VIRA UMA VARIAVEL DEPENDENDO DO CONTEXTO
         PERGUNTAR PRO PROF. */
         break;
    }

    Q11:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 't' :
            i++;
            goto Q12;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q12:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'e' :
            i++;
            goto Q13;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }
    Q13:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'g' :
            i++;
            goto Q14;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q14:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'e' :
            i++;
            goto Q15;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q15:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'r' :
            i++;
            goto Q21;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q21:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case ' ' :    //terminal COPIAR PARA OS OUTROS
        printf("PALAVRA RECONHECIDA\n" );
        return 1;
      default :
         printf("Invalid grade\n" ); /* vira variavel dependendo do contexto */
         break;
    }

    Q4:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case ' ' :    //terminal COPIAR PARA OS OUTROS
        printf("PALAVRA RECONHECIDA\n" );
        return 1;
      default :
         printf("Invalid grade\n" ); /* vira variavel dependendo do contexto */
         break;
    }

    Q6:

    Q60:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'f' :
            i++;
            goto Q7;
            break;
      case 'h' :
            i++;
            goto Q61;
            break;
      default :
         printf("Invalid grade\n" );
         /*  SE ATENTAR A ESTA VALIDAÇÃO,
         SE A PALAVRA TERMINAR DEPOIS DO 1 NIVEL
         ELA PODE VIRAR UMA VARIAVEL
         PERGUNTAR PRO PROF. */
         break;
    }

    Q61:

    Q7:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'i' :
            i++;
            goto Q8;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q8:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 't' :
            i++;
            goto Q3;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q3:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'e' :
            i++;
            goto Q3;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q22:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case ' ' :    //terminal COPIAR PARA OS OUTROS
        printf("PALAVRA RECONHECIDA\n" );
        return 1;
      default :
         printf("Invalid grade\n" ); /* vira variavel dependendo do contexto */
         break;
    }

    Q52:

    Q75:

    Q82:

    Q32:

    Q9:

    Q29:
    if (i == tamanho) {
        return 1;
    }
    grade = str[i];
    switch(grade) {
      case 'n' :
            i++;
            goto Q30;
            break;
      case 'l' :
            i++;
            goto Q2;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q2:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 's' :
            i++;
            goto Q66;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q66:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'e' :
            i++;
            goto Q67;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q67:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case ' ' :
        printf("PALAVRA RECONHECIDA\n" );
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q30:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'd' :
            i++;
            goto Q31;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q31:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case '.' :
        printf("PALAVRA RECONHECIDA\n" );
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q39:
    if (i == tamanho) {
        return 1;
    }
    grade = str[i];
    switch(grade) {
      case 'h' :
            i++;
            goto Q19;
            break;
      case 'r' :
            i++;
            goto Q41;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }


    Q36:


    Q41:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'u' :
            i++;
            goto Q46;
            break;
      default :
         printf("Invalid grade\n" ); /* vira variavel dependendo do contexto */
         break;
    }


    Q46:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case 'e' :
            i++;
            goto Q47;
            break;
      default :
         printf("Invalid grade\n" ); /* vira variavel dependendo do contexto */
         break;
    }


    Q47:
    if (i == tamanho) {
        return 1;
    }
     grade = str[i];
    switch(grade) {
      case ' ' :    //terminal COPIAR PARA OS OUTROS
        printf("PALAVRA RECONHECIDA\n" );
        return 1;
      default :
         printf("Invalid grade\n" ); /* vira variavel dependendo do contexto */
         break;
    }


    Q73:

    return -1;
}

int main() {
    char str[80];
    printf("Entrada: ");
    scanf("%79s", str);

    if (leitor(str)) {
        printf("\n\nEntrada aceita!\n\n");
    } else {
        printf("\n\nERRO: Entrada nao aceita\n\n");
    }

    return 0;
}
