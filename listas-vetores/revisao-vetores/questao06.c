#include <stdio.h>
#include <stdlib.h>
	
int main(){
     int num, cont, posicao = -1;
     int sorteia[10];
     
     for(cont = 0; cont < 10; cont ++) {
     	sorteia[cont] = rand() % 20;
	 }
	 
	 printf("\nDigite um numero entre 0 e 20:\n");
	 scanf("%d", &num);
	 
	 for(cont = 0; cont < 10; cont++) {
	 	if(sorteia[cont] == num) {
	 		posicao = cont;
	 		break;
		 }
	 }
	 
	 if(posicao == -1) {
	 	printf("\nO numero %d nao esta no vetor.\n", num);
	 } else {
	 	printf("\nO numero %d esta na posicao %d do vetor.", num, posicao);
	 }
	 
	 return 0; 
}
