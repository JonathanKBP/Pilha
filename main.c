#include "pilha.h"
#include <time.h>

int main(int argc, char *argv[]) {
	Pilha *p = constroi_pilha(10);
	int i;
	srand(time(0));
	do{
		if(rand()%2){
			if(push(rand()%10, p)){
				printf("inseriu: ");
				mostra_pilha(p);
			}
			else{
				printf("\ntoin\n");//Pilha cheia
			}
		}
		else{
			if(pop(&i, p)){//pop tira elemento
				printf("%d saiu: ", i);
				mostra_pilha(p);
			}
			else{
				printf("\npuff\n"); //vazio
			}
		}
	}while(!pilha_vazia(p));
	printf("\npuff puff\n");// vazia
	
	return 0;
}
