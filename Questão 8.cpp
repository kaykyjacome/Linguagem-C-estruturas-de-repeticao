#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y, cont, i;
	printf(">>>Exibi��o de intervalo de n�meros primos<<<\n\n");
	do{
		printf("Digite o primeiro n�mero do intervalo: ");
		scanf("%i", &x);
	}while(x <= 0);
	
	do{
		printf("\nDigite o ultimo n�mero do intervalo: ");
		scanf("%i", &y);
	}while(y <= x);
	
	for(i = x, i <= y; i++){
		
	}
	

	return(0);
}
