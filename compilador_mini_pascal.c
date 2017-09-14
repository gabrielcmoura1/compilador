/**
 * Projeto de Linguagens de Programação - 7N12
 * autor: Priscilla Rodrigues Martins
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int leitor(char str[]) {
    int i = -1;
	int tamanho = strlen(str);
	int erro = 0;
	
	goto Q0;

	Q0:
	    i++;
	    if(str[i] == 'a'){
			goto Q42;
	    } else
	    if (str[i] == 'b'){    
	        goto Q59;
	    } else {
	    	return 0;
		}
	/*and*/
	Q42:
	    i++;
	    if(str[i] == 'n'){
			goto Q43;
	    }
	    
	Q43:
	    i++;
	    if(str[i] == 'd'){
			goto Q44;
	    }
		    
		
	Q44:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*begin*/	
	Q59:
	    i++;
	    if(str[i] == 'e'){
			goto Q60;
	    }
	Q60:
	    i++;
	    if(str[i] == 'g'){
			goto Q61;
	    }	  	
	Q61:
	    i++;
	    if(str[i] == 'i'){
			goto Q62;
	    }
	Q62:
	    i++;
	    if(str[i] == 'n'){
			goto Q63;
	    }	  	
	Q63:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}	
	return 1;
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
