/**
 * Projeto de Linguagens de Programação - 7N12
 * autor: Priscilla Rodrigues Martins
 */
#define NUMERO        0000
#define BOOL          0001
#define IDENTIFICADOR 0010
#define COMANDO       0100
#define EXPRESSAO     1000
#define ATRIBUICAO    0011
#define TERMO         0101
#define RELACAO       1001

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
	    if ((str[i] == '0')||(str[i] == '1')||(str[i] == '2')||(str[i] == '3')||(str[i] == '4')||(str[i] == '5')||(str[i] == '6')||(str[i] == '7')||(str[i] == '8')||(str[i] == '9')){     
	        goto Q88;
	    } else {
	    if(str[i] == 'a'){
			goto Q42;
	    } else
	    if (str[i] == 'b'){    
	        goto Q59;
	    } else {
	    if (str[i] == 'd'){    
	        goto Q72;
	    } else {
		if (str[i] == 'e'){    
	        goto Q1;
	    } else {
		if (str[i] == 'f'){    
	        goto Q45;
	    } else {	
	    if (str[i] == 'i'){    
	        goto Q28;
	    } else {
	    if (str[i] == 'n'){    
	        goto Q39;
	    } else {
	    if (str[i] == 'o'){    
	        goto Q74;
	    } else {
	    if (str[i] == 'p'){    
	        goto Q15;
	    } else {	
	    if (str[i] == 't'){    
	        goto Q8;
	    } else {
	    if (str[i] == 'v'){    
	        goto Q36;
	    } else {
	    if (str[i] == 'w'){    
	        goto Q50;
	    } else {
	    if (str[i] == '<'){    
	        goto Q76;
	    } else {
		if (str[i] == '>'){    
	        goto Q77;
	    } else {
		if (str[i] == ':'){    
	        goto Q78;
	    } else {
		if (str[i] == ','){    
	        goto Q81;
	    } else {
		if (str[i] == '('){    
	        goto Q82;
	    } else {	
	    if (str[i] == ';'){    
	        goto Q83;
	    } else {
	    if (str[i] == ')'){    
	        goto Q84;
	    } else {
	    if (str[i] == '*'){    
	        goto Q85;
	    } else {
	    if (str[i] == '-'){    
	        goto Q86;
	    } else {
	    if (str[i] == '+'){    
	        goto Q87;
	    } else {
	    	return 0;
		}
	/*else*/ /*end.*/	
	Q1:
	    i++;
	    if(str[i] == 'n'){
			goto Q5;
	    } else {
	    if(str[i] == 'l'){
			goto Q2;
	    } else {	
	    	return 0;
	    }
	Q2:
	    i++;
	    if(str[i] == 's'){
			goto Q3;
	    } else {
	    	return 0;
	    }	
	Q3:
	    i++;
	    if(str[i] == 'e'){
			goto Q4;
	    } else {
	    	return 0;
	    }
	Q4:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	Q5:
	    i++;
	    if(str[i] == 'd'){
			goto Q6;
	    } else {
	    	return 0;
	    }
	Q6:
	    i++;
	    if(str[i] == '.'){
			goto Q7;
	    } else {
	    	return 0;
	    }
	Q7:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*true*/ /*then*/	
	Q8:
	    i++;
	    if(str[i] == 'r'){
			goto Q9;
	    } else {
	    if(str[i] == 'h'){
			goto Q12;
	    } else {	
	    	return 0;
	    }
	Q9:
	    i++;
	    if(str[i] == 'u'){
			goto Q10;
	    } else {
	    	return 0;
	    }
	Q10:
	    i++;
	    if(str[i] == 'e'){
			goto Q11;
	    } else {
	    	return 0;
	    }
	Q11:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	Q12:
	    i++;
	    if(str[i] == 'e'){
			goto Q13;
	    } else {
	    	return 0;
	    }	
	Q13:
	    i++;
	    if(str[i] == 'e'){
			goto Q14;
	    } else {
	    	return 0;
	    }
	Q14:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}						
	/*program*/ /*procedure*/	
	Q15:
	    i++;
	    if(str[i] == 'r'){
			goto Q16;
	    } else {
	    	return 0;
	    }
	Q16:
	    i++;
	    if(str[i] == 'o'){
			goto Q17;
	    } else {
	    	return 0;
	    }
	Q17:
	    i++;
	    if(str[i] == 'g'){
			goto Q18;
	    } else {
	    if(str[i] == 'c'){
			goto Q22;
	    } else {
	    	return 0;
	    }
	Q18:
	    i++;
	    if(str[i] == 'r'){
			goto Q19;
	    } else {
	    	return 0;
	    }
	Q19:
	    i++;
	    if(str[i] == 'a'){
			goto Q20;
	    } else {
	    	return 0;
	    }
	Q20:
	    i++;
	    if(str[i] == 'm'){
			goto Q21;
	    } else {
	    	return 0;
	    }
	Q21:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	Q22:
	    i++;
	    if(str[i] == 'e'){
			goto Q23;
	    } else {
	    	return 0;
	    }
	Q23:
	    i++;
	    if(str[i] == 'd'){
			goto Q24;
	    } else {
	    	return 0;
	    }
	Q24:
	    i++;
	    if(str[i] == 'u'){
			goto Q25;
	    } else {
	    	return 0;
	    }
	Q25:
	    i++;
	    if(str[i] == 'r'){
			goto Q26;
	    } else {
	    	return 0;
	    }
	Q26:
	    i++;
	    if(str[i] == 'e'){
			goto Q27;
	    } else {
	    	return 0;
	    }
	Q27:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}												
	/*if*/ /*integer*/	
	Q28:
	    i++;
	    if(str[i] == 'n'){
			goto Q30;
	    } else {
	    if(str[i] == 'f'){
			goto Q29;
	    } else {
	    	return 0;
	    }
	Q29:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	Q30:
	    i++;
	    if(str[i] == 't'){
			goto Q31;
	    } else {
	    	return 0;
	    }		
	Q31:
	    i++;
	    if(str[i] == 'e'){
			goto Q32;
	    } else {
	    	return 0;
	    }
	Q32:
	    i++;
	    if(str[i] == 'g'){
			goto Q33;
	    } else {
	    	return 0;
	    }
	Q33:
	    i++;
	    if(str[i] == 'e'){
			goto Q34;
	    } else {
	    	return 0;
	    }		
    Q34:
	    i++;
	    if(str[i] == 'r'){
			goto Q35;
	    } else {
	    	return 0;
	    }		
	Q35:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*var*/
    Q36:
	    i++;
	    if(str[i] == 'a'){
			goto Q37;
	    } else {
	    	return 0;
	    }
	Q37:
	    i++;
	    if(str[i] == 'r'){
			goto Q38;
	    } else {
	    	return 0;
	    }
	Q38:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}				
	/*not*/
	Q39:
	    i++;
	    if(str[i] == 'o'){
			goto Q40;
	    } else {
	    	return 0;
	    }
	Q40:
	    i++;
	    if(str[i] == 't'){
			goto Q41;
	    } else {
	    	return 0;
	    }
	Q41:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}				 							    			
	/*and*/
	Q42:
	    i++;
	    if(str[i] == 'n'){
			goto Q43;
	    } else {
	    	return 0;
	    }	    
	Q43:
	    i++;
	    if(str[i] == 'd'){
			goto Q44;
	    } else {
	    	return 0;
	    }	
	Q44:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*false*/	
	Q45:
	    i++;
	    if(str[i] == 'a'){
			goto Q46;
	    } else {
	    	return 0;
	    }
	Q46:
	    i++;
	    if(str[i] == 'l'){
			goto Q47;
	    } else {
	    	return 0;
	    } 
	Q47:
	    i++;
	    if(str[i] == 's'){
			goto Q48;
	    } else {
	    	return 0;
	    }
	Q48:
	    i++;
	    if(str[i] == 'e'){
			goto Q49;
	    } else {
	    	return 0;
	    }
	Q49:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*write*/ /*while*/	
	Q50:
	    i++;
	    if(str[i] == 'h'){
			goto Q51;
	    } else {
	    if(str[i] == 'r'){
			goto Q55;
	    } else {	
	    	return 0;
	    }	
	Q51:
	    i++;
	    if(str[i] == 'i'){
			goto Q52;
	    } else {
	    	return 0;
	    }
	Q52:
	    i++;
	    if(str[i] == 't'){
			goto Q53;
	    } else {
	    	return 0;
	    }
	Q53:
	    i++;
	    if(str[i] == 'e'){
			goto Q54;
	    } else {
	    	return 0;
	    }
	Q54:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}	
	Q55:
	    i++;
	    if(str[i] == 'i'){
			goto Q56;
	    } else {
	    	return 0;
	    }
	Q56:
	    i++;
	    if(str[i] == 'l'){
			goto Q57;
	    } else {
	    	return 0;
	    }
	Q57:
	    i++;
	    if(str[i] == 'e'){
			goto Q58;
	    } else {
	    	return 0;
	    }	
	Q58:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}									   
	/*begin*/ /*boolean*/	
	Q59:
	    i++;
	    if(str[i] == 'e'){
			goto Q60;
		} else
	    if (str[i] == 'o'){    
	        goto Q64;
	    } else {
	    	return 0;
	    }
	Q60:
	    i++;
	    if(str[i] == 'g'){
			goto Q61;
	    } else {
	    	return 0;
	    }	  	
	Q61:
	    i++;
	    if(str[i] == 'i'){
			goto Q62;
	    } else {
	    	return 0;
	    }
	Q62:
	    i++;
	    if(str[i] == 'n'){
			goto Q63;
	    } else {
	    	return 0;
	    }	  	
	Q63:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	Q64:
	    i++;
	    if(str[i] == 'o'){
			goto Q65;
	    } else {
	    	return 0;
	    }
	Q65:
	    i++;
	    if(str[i] == 'l'){
			goto Q66;
	    } else {
	    	return 0;
	    }
	Q66:
	    i++;
	    if(str[i] == 'e'){
			goto Q67;
	    } else {
	    	return 0;
	    }
	Q67:
	    i++;
	    if(str[i] == 'a'){
			goto Q68;
	    } else {
	    	return 0;
	    }
	Q68:
	    i++;
	    if(str[i] == 'n'){
			goto Q69;
	    } else {
	    	return 0;
	    }
	Q69:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*div*/ /*do*/	
	Q70:
		i++;
	    if(str[i] == 'v'){
			goto Q71;
	    } else {
	    	return 0;
		}
	Q71:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}		
	Q72:
	    i++;
	    if(str[i] == 'o'){
			goto Q73;
	    } else {
	    if(str[i] == 'i'){
			goto Q70;
	    } else {
	    	return 0;
	    }    
	Q73:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	 /*or*/		
	Q74:
	    i++;
	    if(str[i] == 'r'){
			goto Q73;
	    } else {
	    	return 0;
	    }    
	Q75:
		i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*<*/		
	Q76:
	    i++;
	    if(str[i] == '>'){
			goto Q80;
	    } else {
	    if(str[i] == '='){
			goto Q79;
	    } else {	
	    	return 0;
	    } 
	/*>*/		
	Q77:
	    i++;
	    if(str[i] == '='){
			goto Q79;
	    } else {
	    	return 0;
	    } 
	/*:*/		
	Q78:
	    i++;
	    if(str[i] == '='){
			goto Q79;
	    } else {
	    	return 0;
	    }
	/*,*/		
	Q81:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}	
	/*(*/		
	Q82:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*;*/		
	Q83:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*)*/		
	Q84:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/***/		
	Q85:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*-*/		
	Q86:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*+*/		
	Q87:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    	return 0;
		}
	/*0-1-2-3-4-5-6-7-8-9*/		
	Q88:
	    i++;
	    if (i == tamanho) {
	        return 1;
	    }  else {
	    if ((str[i] == '0')||(str[i] == '1')||(str[i] == '2')||(str[i] == '3')||(str[i] == '4')||(str[i] == '5')||(str[i] == '6')||(str[i] == '7')||(str[i] == '8')||(str[i] == '9')){     
	        goto Q88;
	    } else {
	   	
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
