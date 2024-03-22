#include <stdio.h>

int main() {
	 
	 float massainicial, massafinal, tempominutos, temposegundos, tempohoras;
	 int tempo = 0;
	 
	 printf("Digite a massa inicial do elemento: ");
	 scanf("%f", &massainicial);
	 printf("\nA massa inicial era: %f", massainicial);
	 	 
	 while (massainicial >= 0.5) {
	 	
	 	massainicial = massainicial * 0.5;
	 	tempo = tempo + 1;
	 }
	 
	 massafinal = massainicial;
	 
	 temposegundos = tempo * 50;
	 tempominutos = tempo * 0.84;
	 tempohoras = tempo * 0.014;
	 
	 printf("\nMassa final: %f", massafinal);
	 printf("\nTempo em segundos: %f", temposegundos);
	 printf("\nTempo em minutos : %f", tempominutos);
	 printf("\nTempo em horas: %f", tempohoras);
	 
	 getchar();
	 return 0;
}