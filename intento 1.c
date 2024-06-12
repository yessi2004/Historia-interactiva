#include <stdio.h>
#include <stdlib.h>
typedef struct historia{
	int opcion;
	struct historia *izq;
	struct historia *der;
}historia;

void crear_historia(int val){
	historia *nuevaHistoria;
	nueHistoria* arbol=malloc(historia));
	nuevaHistoria->opcion=val;
	nuevaHistoria->izq=NULL;
	nuevaHistoria->der=NULL;
	return nuevaHistoria;
}
	historia *insertarNodo(historia *arbol, int val)
	{
		nuevaHistoria* arbol=malloc(historia));
		if(arbol == NULL){
			return crear_historia(val);
		}
		if(arbol->opcion < val){
			arbol->der = insertarNodo(arbol->der,val);
		}
		if(arbol->opcion > val){
			arbol->izq = insertarNodo(arbol->izq,val);
		}
		return arbol;
	}
void orden(historia *arbol){
	if(arbol==NULL){
		return;
	}
	
	
	
	orden(arbol->izq);
	orden(arbol->der);
}
int main(int argc, char *argv[]) {
	historia *arbol=NULL;
	int menu;
	while(1) {
		printf("\n\n?? Sanatorio del vacio ??\n");
		printf("1. Iniciar Partida\n");
		printf("2. Salir del Juego\n");
		printf("Selecciona una opción: ");
		scanf("%d", &menu);
		
		switch(menu) {
		case 1:
			char interaccion;
			do{
			printf("¿Acepta el trabajo de Psiquiatra para este caso?\ns)Si.\nn)No.\n");
			scanf("%c",&interaccion);
			if(interaccion=='s'){
				crear_historia();
				arbol=insertarNodo (arbol,10);
				printf("\nJugador: Está bien… Traigan al paciente.\nEl paciente se encuentra sentado frente al doctor.\nJugador: Primero lo primero… ¿Cuál es tu nombre?\nPaciente: Ammm si… Mi nombre es Gabriel.\n¿Le crees al paciente?\ns)Si.\nn)No\n");
				scanf("%c",%interaccion);
				if(interaccion=='s'){
					printf("\n");
				}else if(interaccion=='n'){
					
				}
			}else if(interaccion=='n'){
				printf("Doctor: Olvídate de esto, se lo dejaré a otra persona, hoy me tomo el día libre.\n\n“Gracias por jugar… Supongo.”");
			}
			}while(interaccion!='n');
			break;
		case 2:
			printf("Saliendo del juego...\n");
			return 0;
		default:
			printf("Opción no válida. Inténtalo de nuevo.\n");
		}
	}
	return 0;
}

