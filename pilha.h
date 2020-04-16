 #include <stdio.h>
 #include<stdlib.h>
 typedef struct pilha Pilha;
 
 Pilha * constroi_pilha(int); //prototipo da funcao
 
 int pilha_cheia(Pilha *);
 
 int pilha_vazia(Pilha *);
 
 int push(int, Pilha*);
 //devolve sucesso ou fracasso
 
 int pop(int *, Pilha*);
 //devolve sucesso ou fracasso 
 //o elemento sai por referência 
 
 int tamanho(Pilha *);
 int consulta_topo(Pilha *);
 
 void mostra_pilha(Pilha *);
 
 
