#include <stdio.h>

#define MAX_PILHA 100;
typedef int Elemento;

typedef struct{
	Elemento v[MAX_PILHA];
	int topo;
}Pilha;

int pop(Pilha *p, Elemento *out){
	if(p->topo >= 0){
		*out = p->v[p->topo--];
		 return 1;
	}
	return 0;
}
void pilha_init(Pilha *p){ p->topo = -1;
}

int push(Pilha *p, Elemento e){
	if(p->topo < MAX_PILHA - 1){
		p->v[++p->topo] = e;
		return 1;
	}
	return 0;
}

int main(){
	Pilha P;
	pilha_init(&P);
	push(&P,10);
	push(&P,20);
	push(&P,30);
	
	for(int i = 0; i <= P.topo; ++i)
		printf(" %d ", P.v[i]);
	puts("");
	
	return 0;
	
}