#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct semaforo{
	char Calle1[50];
	char Calle2[50];
	int Trafico;
}semaforo1;
struct redvial{
	char **C;
	int C1;
	int C2;
	struct semaforo semaforo1;
	
};
void ingresardatos(){
	printf("Ingrese la cantidad de trafico\n");
	printf("Trafico:");
	scanf("%d", &Trafico);
	if(Trafico<0 || Trafico>100){
		printf("El trafico no puede ser negativo o mayor a 100\n");
		return;
	}
}
int main(int argc, char *argv[]) {
	int opcion=0;
	int contador=0;
	do{
		printf("---Menu---\n");
		printf("1.Ingresar datos\n");
		printf("2.Probar contador\n");
		printf("3.Salir\n");
		printf("Ingresar opcion:");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			contador++;
			ingresardatos(redvial,semaforo);
			break;
		case 2:
			if(contador==0){
				printf("Primero ingrese los datos\n");
				
			}
			else{
				printf("Funciona contador\n");
			}
			break;
		}
	} while(opcion!=3);
	return 0;
}

