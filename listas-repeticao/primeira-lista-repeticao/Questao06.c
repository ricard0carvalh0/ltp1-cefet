#include <stdio.h> 

int main() {
	
	float n1, n2, n3, media, maiormedia, menormedia, nummedias, mediaturma;
	float totalmedia = 0;
	int contador = 2;
	int resposta;
	
	while (contador != 0) {
		printf("Digitar a primeira nota do aluno: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota do aluno: ");
		scanf("%f", &n2);
		printf("Digite a terceira nota do aluno: ");
		scanf("%f", &n3);
		media = (n1 + n2 + n3) / 3;
		if(contador == 2) {
			maiormedia = media;
			menormedia = media;
		} else
		if(media > maiormedia) {
			maiormedia = media;
		} else
		if(media < menormedia) {
			menormedia = media;
		}
		
		printf("\nDeseja adicionar notas de outro aluno? (sim(1) nao(0))");
		scanf("%d", &resposta);
		
		totalmedia = totalmedia + media;
		nummedias = nummedias + 1;
		mediaturma = totalmedia / nummedias;
		contador = resposta;
	}
	
	printf("\nA maior media foi: %f", maiormedia);
	printf("\nA menor media foi: %f", menormedia);
	printf("\nA media da turma eh: %f", mediaturma);
	
	getchar();
	return 0;
}