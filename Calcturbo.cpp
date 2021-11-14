/*
Implemente uma calculadora em C que receba numeros
 continos seguidos de suas operações, onde que a 
 cada operação ele vai tranformado em um resultado.

Exemplo: 
2+3-8*2 =  -2
*/


			#include <stdio.h>
			
	
			int main (void){
			
			float a , b, resultado;
			char op;
			float soma, subtracao, multiplicacao;
			
			resultado = (a + b);
			soma = resultado;
			
			
			resultado = (a - b);
			subtracao = resultado;
			
			
			resultado = (a * b);
			multiplicacao = resultado;
			
			while(op != 4){
				
			scanf("%f",&a);
				
			scanf("%f", &b);
			
			scanf("%c", &op);
			
			
			switch(op){
				
			case '+' :
			resultado= a+b;
			printf("o resultado de %d + %d = %d:", a, b, resultado);
			break;
			
			case '-' :
			resultado= a-b;
			printf("o resultado de %d + %d = %d:", a, b, resultado);
			break;
			
			case '*' :
			resultado= a*b;
			printf("o resultado de %d + %d = %d:", a, b, resultado);
			break;
			
			case '=':
			resultado= a=b;
			printf("%f", resultado);
			break;
			
			
		}
		
		
	}
		
  	return 0;	
}
