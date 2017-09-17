/**
 * Projeto de Linguagens de Programa��o - 7N12
 * autores: Priscilla Rodrigues Martins, Gabriel, Lorrene Ogbonna
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int leitor(char str[]) {
    int i = -1, tamanho = strlen(str);

    goto Q0;

    Q0:
    if (i == tamanho) {
        return 1;
    }
    i++;
    char grade = str[i];

    switch(grade) {
      case 'b' :
            goto Q59;
            break;
      case 'f' :
            goto Q45;
            break;
      case 'v' :
            goto Q36;
            break;
      case 'd' :
            goto Q72;
            break;
      case 't' :
            goto Q8;
            break;
      case 'w' :
            goto Q50;
            break;
      case 'i' :
            goto Q28;
            break;
      case 'p' :
            goto Q15;
            break;
      case 'e' :
            goto Q1;
            break;
      case 'a' :
            goto Q42;
            break;
      case 'n' :
            goto Q39;
            break;
      case 'o' :
            goto Q74;
            break;
      // caracteres
      case ',' :
            goto Q81;
            break;
      case ':' :
            goto Q82;
            break;
      case '(' :
            goto Q83;
            break;
      case ';' :
            goto Q84;
            break;
      case '>' :
            goto Q85;
            break;
      case '<' :
            goto Q86;
            break;
      case ')' :
            goto Q87;
            break;
      case '*' :
            goto Q88;
            break;
      case '-' :
            goto Q89;
            break;
      case '+' :
            goto Q90;
            break;
      // numeros
     case '0' :
            goto  Q4;
            break;
      case '1' :
            goto  Q4;
            break;
      case '2' :
            goto  Q4;
            break;
      case '3' :
            goto  Q4;
            break;
      case '4' :
            goto  Q4;
            break;
      case '5' :
            goto  Q4;
            break;
      case '6' :
            goto  Q4;
            break;
      case '7' :
            goto  Q4;
            break;
      case '8' :
            goto  Q4;
            break;
     case '9' :
            goto  Q4;
            break;
      default :

         break;
    }

    Q1:
    i++;
    grade = str[i];
    switch(grade) {
      case 'n' :
            goto Q5;
            break;
      case 'l' :
            goto Q2;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q2:
    i++;
    grade = str[i];
    switch(grade) {
      case 's' :
            goto Q3;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q3:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q4;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q4:
    i++;
    grade = str[i];
    switch(grade) {
        case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q5:
    i++;
    grade = str[i];
    switch(grade) {
      case 'd' :
            goto Q6;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q6:
    i++;
    grade = str[i];
    printf("%c",grade);
    switch(grade) {
      case '.' :
         return 1;
      default :
         return -1;
         break;
    }

    Q7:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q8:
    i++;
    grade = str[i];
    switch(grade) {
      case 'r' :
            goto Q9;
            break;
      case 'h' :
            goto Q12;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q9:
    i++;
    grade = str[i];
    switch(grade) {
      case 'u' :
            goto Q10;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q10:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q11;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q11:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q12:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q13;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q13:
    i++;
    grade = str[i];
    switch(grade) {
      case 'n' :
            goto Q14;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q14:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q15:
    i++;
    grade = str[i];
    switch(grade) {
      case 'r' :
            goto Q16;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q16:
    i++;
    grade = str[i];
    switch(grade) {
      case 'o' :
            goto Q17;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q17:
    i++;
    grade = str[i];
    switch(grade) {
      case 'g' :
            goto Q18;
            break;
      case 'c' :
            goto Q22;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q18:
    i++;
    grade = str[i];
    switch(grade) {
      case 'r' :
            goto Q19;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q19:
    i++;
    grade = str[i];
    switch(grade) {
      case 'a' :
            goto Q20;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q20:
    i++;
    grade = str[i];
    switch(grade) {
      case 'm' :
            goto Q21;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q21:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q22:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q23;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q23:
    i++;
    grade = str[i];
    switch(grade) {
      case 'd' :
            goto Q24;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q24:
    i++;
    grade = str[i];
    switch(grade) {
      case 'u' :
            goto Q25;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q25:
    i++;
    grade = str[i];
    switch(grade) {
      case 'r' :
            goto Q26;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }
    Q26:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q27;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q27:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q28:
    i++;
    grade = str[i];
    switch(grade) {
      case 'f' :
            goto Q29;
            break;
      case 'n' :
            goto Q30;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q29:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q30:
    i++;
    grade = str[i];
    switch(grade) {
      case 't' :
            goto Q31;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q31:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q32;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q32:
    i++;
    grade = str[i];
    switch(grade) {
      case 'g' :
            goto Q33;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q33:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q34;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q34:
    i++;
    grade = str[i];
    switch(grade) {
      case 'g' :
            goto Q35;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q35:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q36:
    i++;
    grade = str[i];
    switch(grade) {
      case 'a' :
            goto Q37;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q37:
    i++;
    grade = str[i];
    switch(grade) {
      case 'r' :
            goto Q38;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q38:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         return -1;
         break;
    }

    Q39:
    i++;
    grade = str[i];
    switch(grade) {
      case 'o' :
            goto Q40;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q40:
    i++;
    grade = str[i];
    switch(grade) {
      case 't' :
            goto Q41;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q41:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         return -1;
         break;
    }

    Q42:
    i++;
    grade = str[i];
    switch(grade) {
      case 'n' :
            goto Q43;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q43:
    i++;
    grade = str[i];
    switch(grade) {
      case 'd' :
            goto Q44;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q44:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q45:
    i++;
    grade = str[i];
    switch(grade) {
      case 'a' :
            goto Q46;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q46:
    i++;
    grade = str[i];
    switch(grade) {
      case 'l' :
            goto Q47;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q47:
    i++;
    grade = str[i];
    switch(grade) {
      case 's' :
            goto Q48;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q48:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q49;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q49:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q50:
    i++;
    grade = str[i];
    switch(grade) {
      case 'r' :
            goto Q51;
            break;
      case 'h' :
            goto Q55;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q51:
    i++;
    grade = str[i];
    switch(grade) {
      case 'i' :
            goto Q52;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q52:
    i++;
    grade = str[i];
    switch(grade) {
      case 't' :
            goto Q53;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q53:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q54;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q54:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q55:
    i++;
    grade = str[i];
    switch(grade) {
      case 'i' :
            goto Q56;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q56:
    i++;
    grade = str[i];
    switch(grade) {
      case 'l' :
            goto Q57;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q57:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q58;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q58:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q59:
    i++;
    grade = str[i];
    switch(grade) {
      case 'o' :
            goto Q64;
            break;
      case 'e' :
            goto Q60;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q60:
    i++;
    grade = str[i];
    switch(grade) {
      case 'g' :
            goto Q61;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q61:
    i++;
    grade = str[i];
    switch(grade) {
      case 'i' :
            goto Q62;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q62:
    i++;
    grade = str[i];
    switch(grade) {
      case 'n' :
            goto Q63;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q63:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q64:
    i++;
    grade = str[i];
    switch(grade) {
      case 'o' :
            goto Q65;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q65:
    i++;
    grade = str[i];
    switch(grade) {
      case 'l' :
            goto Q66;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q66:
    i++;
    grade = str[i];
    switch(grade) {
      case 'e' :
            goto Q67;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q67:
    i++;
    grade = str[i];
    switch(grade) {
      case 'a' :
            goto Q68;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q68:
    i++;
    grade = str[i];
    switch(grade) {
      case 'n' :
            goto Q69;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q69:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q70:
    i++;
    grade = str[i];
    switch(grade) {
      case 'v' :
            goto Q71;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q71:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q72:
    i++;
    grade = str[i];
    switch(grade) {
      case 'o' :
            goto Q73;
            break;
      case 'i' :
            goto Q70;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q73:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q74:
    i++;
    grade = str[i];
    switch(grade) {
      case 'r' :
            goto Q75;
            break;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q75:
    i++;
    grade = str[i];
    switch(grade) {
      case ' ' :
        return 1;
      default :
         printf("Invalid grade\n" );
         break;
    }

    Q81:

    Q82:

    Q83:

    Q84:

    Q85:

    Q86:

    Q89:

    Q87:

    Q88:

    Q90:

    return -1;
}

int main() {
    char str[80];
    printf("Entrada: ");
    //scanf("%79[^\n]", str);

    gets(str);
    int l = strlen(str);

    printf("tamanho do input %d\n",l );
    int r = leitor(str);
    printf("valor do resultado %d\n",r );
    if (r!= -1) {
        printf("\n\nPalavra aceita!\n\n");
    } else {
        printf("\n\nERRO: Palavra nao reconhecida\n\n");
    }
    return 0;
}
