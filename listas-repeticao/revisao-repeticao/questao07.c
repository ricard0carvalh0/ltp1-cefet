#include <stdio.h>
#include <stdlib.h>
	
int main(){
	
     int num, tentativas = 0, chute;
     num = rand() % 500;
     
     while (chute != num) {
     	printf("\nQual eh o numero magico?\n");
     	scanf("%d", &chute);
     	tentativas++;
     	
     	if (chute == num) {
     		printf("\nVoce acertou!");
     		printf ("\nO numero sorteado foi: %d ", num);
		 } else if (chute > num) {
		 	printf("\nO seu chute foi maior do que o numero magico!\n");
		 } else if (chute < num) {
		 	printf("\nO seu chute foi menor do que o numero magico!\n");
		 }
	 }
	 
	 if (tentativas >= 1 && tentativas <= 3) {
	 	printf("\nMuito sortudo.");
	 } else if (tentativas >= 4 && tentativas <= 6) {
	 	printf("\nSortudo.");
	 } else if (tentativas >= 7 && tentativas <= 10) {
	 	printf("\nNormal.");
	 } else if (tentativas > 0) {
	 	printf("\nTente novamente.");
	 }
	 
	 return 0;
}
