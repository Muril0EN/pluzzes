#include <stdio.h>

int main (){
	printf("************************************\n");
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("************************************\n");
//comentário de linha 	
/*comentário de bloco*/	
	int numeroSecreto = 3;
	int chute;
	
	for(int i = 0; i < 3; i++){
		printf(" * Tentativa %d de 3 *\n", i);
		printf("Digite seu chute:");
		scanf("%d", &chute);

		int acertou = (chute == numeroSecreto);

		printf("teste");

		if(acertou){
			printf("Você acertou, parabéns!\n\n");
		} else {
			int maior = (numeroSecreto < chute);
			if (maior){
				printf("Você errou, seu chute foi maior que o número secreto.\n\n");
			} else {
				printf("Você errou, seu chute foi menor que o número secreto.\n\n");
			}
		}
	}
}