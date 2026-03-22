#include <stdio.h>
#define V 5 //variavel referente ao numero de vertices do grafo

//programa em que é pegado um grafo nao direcionado de 5 vértices, e ele é transformado em uma matriz de adjacencia
void inicializarMatriz(int matriz[][V]);
void adicionarAresta(int matriz[][V], int origem, int destino);
void imprimirMatriz(int matriz[][V]);
void listaAdjacen(int matriz[][V]);

void inicializarMatriz(int matriz[][V]){
    int i,j;
    for(i=0;i < V;i++){
        for(j =0; j < V;j++){
            matriz[i][j] = 0;
        }
    }
}

void adicionarAresta(int matriz[][V], int origem, int destino){
    matriz[origem][destino] = 1;
    matriz[destino][origem] = 1;//como é um grafo nao direcionado, o 1 é colocado nas 2 direções.
}

void imprimirMatriz(int matriz[][V]){
    int i,j;
    printf("\n\nImpressao da matriz de adjacencia: \n\n");
    printf("  0 1 2 3 4 \n");
    for(i =0; i < V;i++){
        printf("%d", i);
        for(j =0; j < V;j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");//importante colocar esse pulo de linha entre os 2 loops for pra uma linha ficar separada da proxima.
    }
}

void listaAdjacen(int matriz[][V]){//feito pra exemplificar uma lista de adjacencia e mostrar especificamente as conexões
    int i,j;
    printf("\nLista de adjacência: \n\n");
    for(i =0; i < V;i++){
        for(j = 0;j < V;j++){
            if(matriz[i][j] == 1){
                printf("Vértice %d conectada com a %d.\n", i ,j);
            }
        }
    }
}

int main(){
    int adjacen[V][V];
    inicializarMatriz(adjacen);
    imprimirMatriz(adjacen);
    adicionarAresta(adjacen, 2,4);
    imprimirMatriz(adjacen);

    listaAdjacen(adjacen);

    return 0;
}