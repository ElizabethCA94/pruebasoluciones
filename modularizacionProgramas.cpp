#include <stdio.h>
#include <locale.h>
void buscarNumeroEnVector(int n,int vec[]){
	
}
float leerYPromedioVector(int n, int vec[]){
	
}
void leerYMostrarVector(int n,int vec[]){
	
}


void matrices(){
	int op, f,c;
	printf("Ingrese n�mero de filas ");
	scanf("%i",&f);
	printf("Ingrese n�mero de filas ");
	scanf("%i",&c);
	int mat[f][c];
	printf("Ingrese una opci�n ");
	scanf("%i",&op);
	while(op!=0){
		switch(op){
			case 1: 
				//leerYMostrarMatriz();
			break;
			case 2: 
				//matrizTriangular();
			break;
			case 3: 
				//ordenarMatrizAscendente();
			break;
		}
	}			
}

void vectores(){
	int op, n, j;
	printf("Ingrese el tama�o del vector ");
	scanf("%i",&n);
	int vec[n];
	printf("Ingrese una opci�n \n1.Leer y mostrar vector \n2.Leer y calcular promedio del vector \n3.Buscar n�mero en vector\n");
	scanf("%i",&op);
	while(op!=0){
		switch(op){
			case 1: 
				//leerYMostrarVector(n, vec);
				for(j=0; j<n; j++){	
				printf("Ingrese n�mero en la posici�n %d", j);
				//scanf("%d",&vec[j]);
				}
			break;
			case 2: 
				leerYPromedioVector(n,vec);
			break;
			case 3:
				buscarNumeroEnVector(n,vec);
			break;
		}
	}			
}

void series(){
	int op;
	printf("Ingrese una opci�n ");
	scanf("%i",&op);
	while(op!=0){
		switch(op){
			case 1: 
				//serieNegativos();
			break;
			case 2: 
				//fibonacci();
			break;
		}
	}			
}

void calculos(){
	int op;
	printf("Ingrese una opci�n ");
	scanf("%i",&op);
	while(op!=0){
		switch(op){
			case 1: 
				//valorAbsoluto();
			break;
			case 2: 
				//kilogramosLibras();
			break;
			case 3: 
				//hipotenusa();
			break;
		}
	}		
}

main(){
	setlocale(LC_ALL,"");
	int op;
	printf("Ingrese una opci�n \n1.Calculos \n2.Series \n3.Vectores \n4.Matrices\n");
	scanf("%i",&op);
	while(op!=0){
		switch(op){
			case 1: 
				calculos();
			break;
			case 2: 
				series();
			break;
			case 3: 
				vectores();
			break;
			case 4: 
				matrices();
			break;
		}
	}	
}

