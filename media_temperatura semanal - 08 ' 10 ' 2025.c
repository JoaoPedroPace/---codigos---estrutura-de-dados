//dadas as temperaturas que foram registradas diariamente durante uma semana, desja-se determinar em quantos dias dessa semana a temperatura esteve acima da media. escreva um programa utilizando
//vetores e funcoes para calcular esta informação;
#include <stdio.h>

float calcularTemperaturaMedia(float temperatura_semanal[]){
	float soma_temp = 0;
	for(int i = 0; i < 7; i++){
		soma_temp += temperatura_semanal[i];
		
	}
		return soma_temp / 7;
}

void verificarMedia(float media_temperatura, float temperatura_semanal[]){
	int qtd_dias = 0;
	for(int i =0; i < 7;i++){
		if(media_temperatura < temperatura_semanal[i]){
			qtd_dias += 1;
		}
		
		printf("\n %d dias tiveram temperaturas acima da media! ");
	}
}
int main(){
	float temperatura_semanal[7];
	float media_temperatura;
	
	for(int i =0;i < 7; i++){
		printf("\n\nEscreva, em graus celsius, a temperatura do dia %d : ", i + 1);
		scanf("%f", &temperatura_semanal[i]);
		
	}
	
	media_temperatura = calcularTemperaturaMedia(temperatura_semanal);
	
	printf("\n\nA media de temperatura da semana foi: %.1f\n\n", media_temperatura);
	
	verificarMedia(media_temperatura, temperatura_semanal);
	
	
}