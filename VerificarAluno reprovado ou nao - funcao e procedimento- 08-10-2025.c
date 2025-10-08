//Escreva um programa que receba do usuario notas e faca a media dele dizendo se o aluno tenha sido aprovado ou nao, siga as regtras da estacio (sm1,sm2,av e avs, o programa deve ter pelo menos
// uma função e um procedmineto

#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[30];
	float sm1;
	float sm2;
	float av;
	float media;
}Aluno;

static void ler_linha(char *buf, int tam){
	if(fgets(buf, (int)tam, stdin)){
		size_t n = strlen(buf);
		if(n > 0 && buf[n-1] == '\n')
			buf[n-1] = '\0';
	}
}

static void limpa_buffer(){
	int c;
	while((c = getchar()) != '\n' && c != EOF){
		
	}
}

float calcular_media(Aluno *ptr_aluno){
	float soma_notas = 0;
		soma_notas = ptr_aluno->sm1 + ptr_aluno->sm2 + ptr_aluno->av;
		
		ptr_aluno->media = soma_notas;
		if(ptr_aluno->media > 10){
			ptr_aluno->media = 10;
		}
		
		return ptr_aluno->media;
}

void verificarAluno(Aluno *ptr_aluno){
	
	printf("\nEscreva o nome do aluno: ");
	ler_linha(ptr_aluno->nome, 30);
	
	
	printf("\nEscreva a nota do primeiro simulado dele: (SM1) 0.0 ate 1.0. ");
	scanf("%f", &ptr_aluno->sm1);
	
	limpa_buffer();
	
	printf("\nEscreva a nota do segundo simulado dele:  (SM2) 0.0 ate 1.0. ");
	scanf("%f", &ptr_aluno->sm2);
	
	limpa_buffer();
	
	printf("\nEscreva a nota da prova dele: (AV) 0.0 ate 10.0. ");
	scanf("%f", &ptr_aluno->av);
	
	limpa_buffer();
	
}
int main(){
	
	int resp = 0;
	
	do{
	
		printf("\n1 - Verificar nota do aluno.");
		printf("\n0 - Sair.\n");
		scanf("%d", &resp);
		Aluno aluno;
		
		limpa_buffer();
		if(resp == 1){
			
			verificarAluno(&aluno);
			
			float media = calcular_media(&aluno);
		
		if(media >= 6.0){
		
			printf("\n\nA media do aluno %s e %.1f e ele foi aprovado.", aluno.nome, media);
		
		}
		if(resp != 1){
			printf("\n\nPrograma finalizado! \n\n");
		}
		
		if(media < 6.0){
			
			printf("\n\nA media do aluno %s e %.1f e ele foi reprovado.\n", aluno.nome, media);
	
		}
		
		
}
}while(resp != 0);
	
	return 0;
}



