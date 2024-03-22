#include <stdio.h> 

int main() {
	
	float valorcompra, valorpagar;
	int codigo;
	
	printf("Digite o valor da compra:\n");
	scanf("%f", &valorcompra);
	printf("\nDigite o codigo de pagamento:\n");
	scanf("%d", &codigo);
	
	switch (codigo) {
		
		case 1 :
			valorpagar = valorcompra - ((valorcompra * 8) / 100);
			printf("\nDevera ser pago: %f reais.", valorpagar); break;
			
		case 2 :
			valorpagar = valorcompra - ((valorcompra * 4) / 100);
			printf("\nDevera ser pago: %f reais, no cartao de credito.", valorpagar); break;
			
		case 3 :
			valorpagar = valorcompra / 2;
			printf("\nDevera ser pago em 2x de: %f reais.", valorpagar); break;
			
		case 4 :
			valorpagar = (valorcompra / 4) + ((valorcompra * 8) / 100);
			printf("\nDevera ser pago em 4x de: %f reais.", valorpagar); break;
			
		default :
			printf("\nOpcao invalida."); 
			
	}
	
	getchar();
	return 0;
}