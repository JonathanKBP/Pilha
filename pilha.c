#include "pilha.h"

struct pilha{
	int *v;
	int topo;
	int capacidade;
};

Pilha * constroi_pilha(int n){
	Pilha * aux = (Pilha *) malloc(sizeof(Pilha));
	if(aux){
		aux -> v = (int*)malloc(n *sizeof(int));
		if(aux -> v == NULL)
			return NULL;
		aux -> topo = 0;
		aux -> capacidade = n;
	}
	return aux;
}

int pilha_vazia(Pilha *p){
	if(p -> topo == 0)
		return 1;
	return 0;
	// return !p->topo
}

int pilha_cheia(Pilha *p){
	if (p -> topo == p -> capacidade)
		return 1;
	return 0;
	// return p -> topo == p -> capacidade;
}

int push(int i, Pilha *p){
	if(pilha_cheia(p)){
		return 0;
	}
	p -> v[p -> topo] = i;
	p -> topo++;
	return 1;
}

int pop(int *i, Pilha *p){
	if (pilha_vazia(p)){
		return 0;
	}
	p -> topo--;
	*i = p -> v[p -> topo];
	return 1; 
}

int tamanho(Pilha *p){
	return p -> topo;
}

int consulta_topo(Pilha *p){
	if(pilha_vazia(p))
		return -1;
	return p -> v[p -> topo - 1];
}

 
void mostra_pilha(Pilha *p){
 	int i;
 	printf("\n");
 	for(i=p->topo-1; i>=0; i--)
 		printf("%d ", p->v[i]);
	printf("\n");
 }


