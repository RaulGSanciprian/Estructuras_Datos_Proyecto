#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "BibliotecaFinal.h"

int main(){
	int mem;
	ConfigurarIdioma();
	
	do{
		do{
			printf("\nSeleccione con qué tipo de memoria desea trabajar:\n\n 1. Memoria Estática (Arreglos)\n 2. Memoria Dinámica (Punteros)\n 3. Salir\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &mem);
			if(mem>3 || mem<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while((mem>3 || mem<1) && mem != 3);
		
		if(mem != 3)
			Estructuras(mem);
			
	}while(mem != 3);
	
	printf("\n¿Se pudo o no se pudo? \nChau chau :)");
}


int Estructuras(int mem){
	int ed;
	
	if (mem ==1)
	{
		do{
			printf("\nSeleccione la Estructura:\n\n 1. Listas\n 2. Pilas\n 3. Colas\n 4. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &ed);
			if(ed>4 || ed<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
			
		}while(ed>4 || ed<1);
	}
	else{
		do{
			printf("\nSeleccione la Estructura:\n\n 1. Listas\n 2. Pilas\n 3. Colas\n 4. Árboles\n 5. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &ed);
			if(ed>5 || ed<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
			
		}while(ed>5 || ed<1);		
	}
	
	switch(ed){
		case 1:
			Listas(mem);			//Menú que despliega los tipos de listas
			break;
			
		case 2:
			A_Pilas(mem);			//Menu de los algoritmos de Pilas
			break;
			
		case 3:
			Colas(mem);				//Menú que despliega los tipos de colas
			break;
			
		case 4:
			if (mem == 2)
				Arbol(mem);		//Menu de los algoritmos de Arboles
				
			break;
	}
}

int Listas(int mem){
	int listas;
	
	do{
		printf("\nSeleccione el tipo de Lista:\n\n 1. Listas Simples\n 2. Listas Doblemente Ligadas\n 3. Listas Circulares\n 4. Regresar\n");
		printf("\nSeleccione una opción: ");
		scanf("%i", &listas);
		if(listas>4 || listas<1)
			printf("\nOpción invalida. Intente de nuevo\n");
			
		system("pause");
		system("cls");
	}while(listas>4 || listas<1);
			
	switch(listas){		
		case 1:
			A_ListasS(mem);			//Menú de los algoritmos de LS
			break;
				
		case 2:
			A_ListasD(mem);			//Menú de los algoritmos de LDL
			break;
	
		case 3:
			A_ListasC(mem);			//Menú de los algoritmos de LC
			break;
					
		case 4:
			Estructuras(mem);
			break;		
	}
}

int A_ListasS(int mem){
	int alg, cont = 0;
	int elemento[20] = {0};
	
	do{
		do{
			printf("\n=>LISTAS SIMPLES\n\nSeleccione el Algoritmo:\n\n  1. Crear lista insertando elementos por el principio\n  2. Crear lista insertando elemento por el final\n  3. Imprimir lista\n  4. Buscar un elemento con información \"x\"\n ");
			printf(" 5. Borrar un elemento por el final de la lista\n  6. Insertar un elemento por el principio de la lista\n  7. Insertar un elemento por el final de la lista\n  8. Borrar un elemento por el principio de la lista\n ");
			printf(" 9. Insertar un elemento antes de un nodo con información \"x\"\n 10. Insertar un elemento después de un nodo con información \"x\"\n 11. Borrar un elemento antes de un nodo con información \"x\"\n 12. Borrar un elemento despues de un nodo con información \"x\"\n ");
			printf("13. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>13 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>13 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar... Ahora que lo pienso tambien funcionaba un if...
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Crear_porInicio(elemento, cont);
						break;
						
					case 2:
						cont = Crear_porFinal(elemento, cont);
						break;
					
					case 3:
						Imprimir(elemento, cont);
						break;
						
					case 4:
						Buscar_Nodo(elemento, cont);
						Imprimir(elemento, cont);
						break;
						
					case 5:
						cont = Eliminar_ultimoNodo(elemento, cont);
						break;
						
					case 6:
						cont = Insertar_porInicio(elemento, cont);
						break;
						
					case 7:
						cont = Insertar_porFinal(elemento, cont);
						break;
						
					case 8:
						cont = Borrar_porInicio(elemento, cont);
						break;
						
					case 9:
						cont = Insertar_antesdeNodo(elemento, cont);
						break;
						
					case 10:
						cont = Insertar_despuesdeNodo(elemento, cont);
						break;
						
					case 11:
						cont = Borrar_antesdeNodo(elemento, cont);
						break;
						
					case 12:
						cont = Borrar_despuesdeNodo(elemento, cont);
						break;
						
					case 13:
						Listas(mem);
						break;
				}
				break;
				
			case 2:
				switch(alg){		//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						listaPorInicio_S();
						getch();
						break;
						 
					case 2:
						listaPorFinal_S();
						getch();
						break;
						
					case 3:
						mostrarLista_S();
						getch();
						break;
						
					case 4:
						busquedaX_S();
						getch();
						break;
						
					case 5:
						pop_S();
						getch();
						break;
						
					case 6:
						insertaPrincipio_S();
						getch();
						break;
						
					case 7:
						insertaFinal_S();
						getch();
						break;
						
					case 8:
						popPrimer_S();
						getch();
						break;
						
					case 9:	
						insertaAntesX_S();
						getch();
						break;
						
					case 10:	
						insertaDespuesX_S();
						getch();
						break;
						
					case 11:	
						borraAntesX_S();
						getch();
						break;
						
					case 12:	
						borraDespuesX_S();
						getch();
						break;
						
					case 13:
						Listas(mem);
						break;
				}
				break;
		}
		system("cls");
	}while(alg != 13);
}

int A_ListasD(int mem){
	int alg, cont = 0;
	int elemento[20] = {0};

	do{
		do{
			printf("\n=>LISTAS DOBLEMENTE LIGADAS\n\nSeleccione el Algoritmo:\n\n  1. Crear una lista insertando elementos por el final\n  2. Imprimir lista en ambos sentido\n  3. Eliminar un elemento con información \"x\"\n  4. Eliminar el ultimo elemento de una lista\n ");
			printf(" 5. Eliminar un elemento antes de un nodo con información \"x\"\n  6. Insertar un elemento por el principio\n  7. Insertar un elemento despues de un nodo con información \"x\"\n  8. Palíndromo\n ");
			printf(" 9. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>9 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>9 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Crear_porFinal(elemento, cont);
						break;
						
					case 2:
						Impresion_Doble(elemento, cont);
						break;
					
					case 3:
						cont = Eliminar_NodoDBuscado(elemento, cont);
						break;
						
					case 4:
						cont = Eliminar_ultimoNodoD(elemento, cont);
						break;
						
					case 5:
						cont = Borrar_antesdeNodo(elemento, cont);
						break;
						
					case 6:
						cont = Insertar_porInicio_LDL(elemento, cont);
						break;
						
					case 7:
						cont = Insertar_despuesdeNodo_LDL(elemento, cont);
						break;
						
					case 8:
						Palindromo_Array();
						break;
					
					case 9:
						Listas(mem);
						break;
				}
				break;
				
			case 2:					//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
				switch(alg){		
					case 1:
						listaPorFinal_D();
						getch();
						break;
					
					case 2:
						mostrarLista_D();
						getch();
						break; 
						
					case 3:
						borraX_D();
						getch();
						break;
						
					case 4:
						pop_D();
						getch();
						break;
						
					case 5:
						borraAntesX_D();
						getch();
						break;
						
					case 6:
						insertaPrincipio_D();
						getch();
						break;  
						
					case 7:
						insertaDespuesX_D();
						getch();
						break;      
						
					case 8:
						palindromo_D();
						getch();
						break;
						    	 
					case 9:
						Listas(mem);
						break;
				}
				break;
		}
		system("cls");
	}while(alg != 9);
}

int A_ListasC(int mem){
	int alg, cont = 0;
	int elemento[20] = {0};
	
	do{
		do{
			printf("\n=>LISTAS CIRCULARES\n\nSeleccione el Algoritmo:\n\n  1. Crear una lista insertando sus elementos por el final\n  2. Eliminar el primer elemento de una lista\n  3. Imprimir lista\n  4. Insertar un elemento despues de un nodo con información \"x\"\n ");
			printf(" 5. Eliminar un elemento con información \"x\"\n  6. Buscar un elemento con información \"x\" e imprimir la dirección\n     del elemento antecedente y la información del elemento subsecuente\n  7. Eliminar un elemento despues de un nodo con información \"x\"\n  8. Insertar un elemento antes de un nodo con información \"x\"\n ");
			printf(" 9. Regresar\n ");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>9 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>9 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Crear_porFinal(elemento, cont);
						break;
						
					case 2:
						cont = Borrar_porInicio(elemento, cont);
						break;
						
					case 3:
						Imprimir(elemento, cont);
						break;
						
					case 4:
						cont = Insertar_despuesdeNodo_LDL(elemento, cont);
						break;
						
					case 5:
						cont = Eliminar_NodoDBuscado(elemento, cont);
						break;
						
					case 6:
						Antecedente_Subsecuente(elemento, cont);
						break;
						
					case 7:
						cont = Borrar_despuesdeNodo(elemento, cont);
						break;
						
					case 8:
						cont = Insertar_antesdeNodo_LC(elemento, cont);
						break;
					
					case 9:
						Listas(mem);
						break;
				}
				break;
				
			case 2:
				switch(alg){		//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						listaPorFinal_C();
						getch();
						break;
						
					case 2:
						popPrimer_C();
						getch();
						break;
						
					case 3:
						mostrarLista_C();
						getch();
						break;
						
					case 4:
						insertaDespuesX_C();
						getch();
						break;
						
					case 5:
						borraX_C();
						getch();
						break;
						
					case 6:
						busquedaXDireccionAntesInfoDespues_C();
						getch();
						break;
						
					case 7:
						borraDespuesX_C();
						getch();
						break;
						
					case 8:
						insertaAntesX_C();
						getch();
						break;
						
					case 9:
						Listas(mem);
						break;
				}
				break;
		}	
		system("cls");
	}while(alg != 9);
}

int A_Pilas(int mem){
	int alg, cont = 0;
	int elemento[20] = {0};
	
	do{
		do{
			printf("\n=>PILAS\n\nSeleccione el Algoritmo:\n\n  1. Push (inserción)\n  2. Pop (eliminación)\n  3. Imprimir\n  4. Regresar\n ");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>4 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>4 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Insertar_Pilas(elemento, cont);
						break;
						
					case 2:
						cont = Eliminar_Pilas(elemento, cont);
						break;
					
					case 3:
						Imprimir_Pilas(elemento, cont);
						break;
					
					case 4:
						Estructuras(mem);
						break;
				}
				break;
				
			case 2:
				switch(alg){		//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						push_P();
						getch();
						break;
						
					case 2:
						pop_P();
						getch();
						break;
						
					case 3:
						imprimir_P();
						getch();
						break;
					
					case 4:
						Estructuras(mem);
						break;
				}
				break;
		}
		system("cls");	
	}while(alg != 4);
}

int Colas(int mem){
	int colas;
	
	do{
		printf("\nSeleccione el tipo de Cola:\n\n 1. Colas Simples\n 2. Bicolas con Entrada Restringida\n 3. Bicolas con Salida Restringida\n 4. Colas con Prioridad\n 5. Regresar\n ");
		printf("\nSeleccione una opción: ");
		scanf("%i", &colas);
		if(colas>5 || colas<1)
			printf("\nOpción invalida. Intente de nuevo\n");
			
		system("pause");
		system("cls");
	}while(colas>5 || colas<1);
			
	switch(colas){		
		case 1:
			A_ColasS(mem);			//Menú de los algoritmos de CS
			break;
				
		case 2:
			A_BER(mem);				//Menú de los algoritmos de BER
			break;
	
		case 3:
			A_BSR(mem);				//Menú de los algoritmos de BSR
			break;
			
		case 4: 
			A_ColasP(mem);			//Menú de los algoritmos de C con Prioridad
			break;
					
		case 5:
			Estructuras(mem);
			break;		
	}
}

int A_ColasS(int mem){
	int alg, cont = 0;
	int elemento[20] = {0};
	
	do{
		do{
			printf("\n=>COLAS SIMPLES\n\nSeleccione el Algoritmo:\n\n  1. Push (inserción)\n  2. Pop (eliminación)\n  3. Imprimir\n  4. Regresar\n ");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>4 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>4 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Insertar_porFinal_CS(elemento, cont);
						break;
					
					case 2:
						cont = Borrar_porInicio_CS(elemento, cont);
						break;
					
					case 3:
						Imprimir_Colas(elemento, cont);
						break;
					
					case 4:
						Colas(mem);
						break;
				}
				break;
				
			case 2:
				switch(alg){		//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						push_C();
						getch();
						break;
						
					case 2:
						pop_C();
						getch();
						break;
						
					case 3:
						imprimir_C();
						getch();
						break;
					
					case 4:
						Colas(mem);
						break;
				}
				break;
		}
		system("cls");
	}while(alg != 13);
}

int A_BER(int mem){
	int alg, cont = 0;
	int elemento[20] = {0};
	
	do{
		do{
			printf("\n=>BICOLAS CON ENTRADA RESTRINGIDA\n\nSeleccione el Algoritmo:\n\n  1. Push (inserción)\n  2. Pop por Frente (eliminación)\n  3. Pop por Final (eliminación)\n  4. Imprimir\n ");
			printf(" 5. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>5 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>5 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Insertar_porFinal_CS(elemento, cont);
						break;
					
					case 2:
						cont = Borrar_porInicio_CS(elemento, cont);
						break;
						
					case 3:
						cont = Borrar_porFinal_BER(elemento, cont);
						break;
					
					case 4:
						Imprimir_Colas(elemento, cont);
						break;
					
					case 5:
						Colas(mem);
						break;
				}
				break;
				
			case 2:
				switch(alg){		//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						push_BER();
						getch();
						break;
						
					case 2:
						popFrente_BER();
						getch();
						break;
						
					case 3:
						popFinal_BER();
						getch();
						break;
						
					case 4:
						imprimir_BER();
						getch();
						break;
					
					case 5:
						Colas(mem);
						break;
				}
				break;
		}	
		system("cls");
	}while(alg != 5);
}

int A_BSR(int mem){
	int alg, cont = 0;
	int elemento[20] = {0};
	
	do{
		do{
			printf("\n=>BICOLAS CON SALIDA RESTRINGIDA\n\nSeleccione el Algoritmo:\n\n  1. Push por Frente (inserción)\n  2. Push por Final (inserción)\n  3. Pop (eliminación)\n  4. Imprimir\n ");
			printf(" 5. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>5 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>5 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Insertar_porInicio_BSR(elemento, cont);
						break;
					
					case 2:
						cont = Insertar_porFinal_CS(elemento, cont);
						break;
						
					case 3:
						cont = Borrar_porInicio_CS(elemento, cont);
						break;
						
					case 4:
						Imprimir_Colas(elemento, cont);
						break;
					
					case 5:
						Colas(mem);
						break;
				}
				break;
				
			case 2:
				switch(alg){		//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						pushFrente_BSR();
						getch();
						break;
						
					case 2:
						pushFinal_BSR();
						getch();
						break;
						
					case 3:
						pop_BSR();
						getch();
						break;
						
					case 4:
						imprimir_BSR();
						getch();
						break;
					
					case 5:
						Colas(mem);
						break;
				}
				break;
		}
		system("cls");
	}while(alg != 5);
}

int A_ColasP(int mem){
	int alg, cont = 0;
	Prioritaria elemento[20] = {0}; 
	
	do{
		do{
			printf("\n=>COLAS CON PRIORIDAD\n\nSeleccione el Algoritmo:\n\n  1. Push (inserción)\n  2. Imprimir\n  3. Regresar\n ");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>3 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>3 || alg<1);
		
		switch(mem){				//Este switch es para saber que memoria vamos a trabajar
			case 1:
				switch(alg){		//Si seleccionó memoria estática ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						cont = Push_Prioridad(elemento, cont);
						break;
					
					case 2:
						Imprimir_Cola_P(elemento, cont);
						break;
					
					case 3:
						Colas(mem);
						break;
				}
				break;
				
			case 2:
				switch(alg){		//Si seleccionó memoria dinámica ahora se usará alguna de las funciones con esa memoria dependiendo el algoritmo
					case 1:
						push_CP();
						getch();
						break;
					
					case 2:
						imprimir_CP();
						getch();
						break;
					
					case 3:
						Colas(mem);
						break;
				}
				break;
		}
		system("cls");
	}while(alg != 3);
}

int Arbol(int mem){
	int arbol;
	
	do{
		printf("\nSeleccione el tipo de Árbol:\n\n 1. Árboles Simples\n 2. Árboles de Busqueda Binaria\n 3. Regresar\n ");
		printf("\nSeleccione una opción: ");
		scanf("%i", &arbol);
		if(arbol>3 || arbol<1)
			printf("\nOpción invalida. Intente de nuevo\n");
			
		system("pause");
		system("cls");
	}while(arbol>3 || arbol<1);
			
	switch(arbol){		
		case 1:
			A_ArbolS(mem);			//Menú de los algoritmos de Arboles Simples
			break;
				
		case 2:
			A_ABB(mem);				//Menú de los algoritmos de Arboles de Busqueda Binaria
			break;
	
		case 3:
			Estructuras(mem);
			break;		
	}
}

int A_ArbolS(int mem){
	int alg;
	
	do{
		do{
			printf("\n=>ARBOLES SIMPLES\n\nSeleccione el Algoritmo:\n\n  1. Cargar nodos\n  2. Imprimir en Preorden\n  3. Imprimir en Inorden\n  4. Imprimir en Posorden\n ");
			printf(" 5. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>5 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>5 || alg<1);
		
		switch(alg){		
			case 1:
				cargarNodos_A();
				getch();
				break;
				
			case 2:
				imprimirPreorden_A(Raiz);
				getch();
				break;
				
			case 3:
				imprimirInorden_A(Raiz);
				getch();
				break;
				
			case 4:
				imprimirPosorden_A(Raiz);
				getch();
				break;
			
			case 5:
				Arbol(mem);
				break;
		}
				
		system("cls");	
	}while(alg != 5);
}

int A_ABB(int mem){
	int alg;
	
	do{
		do{
			printf("\n=>ARBOLES DE BUSQUEDA BINARIA\n\nSeleccione el Algoritmo:\n\n  1. Insertar en Árbol de Busqueda Binaria\n  2. Buscar en Árbol de Busqueda Binaria\n  3. Eliminar en Árbol de Busqueda Binaria\n  4. Imprimir en Preorden\n  5. Imprimir en Inorden\n  6. Imprimir en Posorden\n  7. Regresar\n");
			printf("\nSeleccione una opción: ");
			scanf("%i", &alg);
			if(alg>7 || alg<1)
				printf("\nOpción invalida. Intente de nuevo\n");
				
			system("pause");
			system("cls");
		}while(alg>7 || alg<1);
		
		switch(alg){		
			case 1:
				push_ABB();
				getch();
				break;
				
			case 2:
				busca_ABB();
				getch();
				break;
				
			case 3:
				elimina_ABB();
				getch();
				break;
				
			case 4:
				imprimirPreorden_A(Raiz_ABB);
				getch();
				break;
				
			case 5:
				imprimirInorden_A(Raiz_ABB);
				getch();
				break;
				
			case 6:
				imprimirPosorden_A(Raiz_ABB);
				getch();
				break;
				
			case 7:
				Arbol(mem);
				break;
		}
				
		system("cls");	
	}while(alg != 6);
}

int ConfigurarIdioma(){
	//Cambia al idioma Español   
	struct lconv *lcPtr;
	setlocale(LC_ALL, "spanish");
	lcPtr = localeconv();

	//Configura cantidades para México
	lcPtr->decimal_point = ".";
	lcPtr->thousands_sep = ",";
	lcPtr->grouping = "3";		
}

