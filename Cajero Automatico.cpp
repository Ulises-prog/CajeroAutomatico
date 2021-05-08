#include<stdio.h>

int main(){
	
	int opcion;
	float agregar,retirar,saldo=10000;
	
	printf("\t*********************************\n\n");
	printf("\tSimulador de Cajero Automatico\n\n");
	printf("\t*********************************\n\n");
	printf("\t1)Depositar dinero \n\n");
	printf("\t2)Retirar Dinero \n\n");	
	printf("\t3)Finalizar operacion \n\n\n\n");	
	printf("\tSelecciona una opcion: ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1:printf("\nCuanto dinero quiere depositar: ");
		scanf("%f",&agregar);
		saldo+= agregar;
		printf("Tu saldo actual es de %f ",saldo);
		break;
		
		
		case 2: printf("\tCuando dinero quiere retirar: ");
		scanf ("%f", &retirar);
		if (retirar>saldo){
			
			printf("\t\nTu saldo disponible es de %f", saldo);
			
			
			}
			else{
				saldo-=retirar;
				printf("\t\nTu saldo total es de %f", saldo);
			break;
			
			case 3 :printf("Gracias por retirar el saldo , esperamos tu regreso pronto.");
			break;
		}
		
		return 0;
		
	}
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
