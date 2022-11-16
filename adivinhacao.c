#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5 /*diretiva-> uma constante. Seguir padrão de sintaxe #define NOME_EM_LETRAS_MAIÚSCULAS valor(convenção)*/

int main (){
	printf("************************************\n");
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("************************************\n");
//comentário de linha 	
/*comentário de bloco*/	
	int numeroSecreto = 3;
	int chute;
	
	for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
		printf(" * Tentativa %d de %d *\n", i, NUMERO_DE_TENTATIVAS);
		printf("Digite seu chute:");
		scanf("%d", &chute);

		if(chute < 0){ /*validando a entrada do usuário*/
			printf("Você não pode chutar número negativos!\n");
			i--;

			continue; /*faz com que o código continue, indo para a próxima iteração 'i++'
			antes de seguir a executar o resto do código (economiza execução)*/
		}

		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;
		int menor = chute < numeroSecreto;

		if(acertou){
			printf("Você acertou, parabéns!\n\n");
			
			break; /*parar a execução*/
		} 
		
		else if (maior){ /*quando se 'combina' else if elimina verificações desnecessárias*/
				printf("Você errou, seu chute foi maior que o número secreto.\n\n");
		}
		else {
				printf("Você errou, seu chute foi menor que o número secreto.\n\n");
		}
		
	}
	printf("Fim de jogo!\n");
}