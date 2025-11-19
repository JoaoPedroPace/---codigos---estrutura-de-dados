#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	int chave;
	struct No *filho_esquerdo;
	struct No *filho_direito;
}No;

int busca_arvore(int chave,const No *ptr){
	while(ptr != NULL){
		if(ptr->chave == chave)
			return 1;
		else if(chave < ptr->chave)
			ptr = ptr->filho_esquerdo;
		else
			ptr = ptr->filho_direito;
	}
	return 0;
}

static No *novo_no(int chave){
	
	No *n = (*No)malloc(sizeof *n);
	if(!n)
		return NULL;
	n->chave = chave;
	n->filho_esquerdo = n->filho_direito = NULL;
	return n;
}

int main(){
	No *raiz = novo_no(8);
	raiz->filho_esquerdo = novo_no(3);
	raiz->filho_direito = novo_no(10);
	raiz->filho_esquerdo->filho_esquerdo = novo_no(1);
	raiz->filho_esquerdo->filho_direito = novo_no(6);
	raiz->filho_direito->filho_direito = novo_no(14);
	
	printf("Busca 6: %s\n", busca_arvore(6,raiz) ? "encontrou" : "nao encontrou");
	printf("Busca 13: %s\n", busca_arvore(13,raiz) ? "encontrou" : "nao encontrou");
	
	free(raiz);
	
	return 0;
}

