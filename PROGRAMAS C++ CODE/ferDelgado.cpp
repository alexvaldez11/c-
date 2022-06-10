#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<locale.h>
#include<cstring>
using namespace std;

void parte_1();
void parte_2();
void parte_3();
void parte_4();
void parte_5();
void parte_6();
void parte_7();
void parte_8();
void parte_9();
void parte_10();
void parte_11();
void parte_12();
void parte_13();
void parte_14();
void parte_15();
void parte_16();
void parte_17();
void parte_18();
int main (){
	int opc;
	setlocale(LC_ALL,"spanish");
	
	do{
	
	printf("          MENU PROYECTO 3 ARREGLOS Y MATRIZ \n");
	printf(" 1) Hacer un algoritmo que pida 10 edades y mostrarlas en orden inverso al que se ingresaron. \n 2) Ingresar un elemento en una posición indicada en un arreglo de n elementos (números), hasta que el usuario desee salir. \n 3) Mostrar los números de un arreglo en forma ascendente.\n 4) Mostrar alumnos ordenados por mayor puntaje de promedio.\n 5) Mostrar artículos de almacén ordenados por mayor precio, y exhibir los 5 artículos de menor precio.\n 6) Hacer un programa que permita el ingreso de Nombre[X], Teléfono[X], donde X va desde 1 hasta 100. Luego mostrar la lista de los usuarios en orden inverso al que se ingresó.\n 7) En una empresa de 1000 trabajadores se aumentarán los salarios de acuerdo con el tiempo de servicio; para este incremento se tomará en cuenta lo siguiente:\n 8) En una encuesta, cuyas alternativas son “sí” y “no”, participaron 10000 personas. Se quiere saber cuántas de ellas votaron por la primera opción.\n 9) Hacer un programa que registre 30 números en un array de una dimensión, y que muestre el cuadrado de los números registrados en las posiciones pares.\n 10) Hacer un programa que registre 50 números en un arreglo de una dimensión y que muestre los números registrados en las posiciones impares de forma decreciente.\n 11) Hacer un programa que registre 50 números en un array de una dimensión y que muestre los números registrados en las posiciones impares de forma decreciente, sin tomar en cuenta \n 12) Hacer un programa que registre 50 números en un array de una dimensión, que muestre los múltiplos de 5. \n 13) Se tiene un array de 7 elementos y se desea insertar uno nuevo. \n 14) Se tienen 8 elementos y se desea invertir esos elementos.\n 15) Se tienen 9 marcas de jeans y se desea insertar 2 marcas nuevas en las posiciones 2 y 4.\n 16) Escribir el algoritmo que permita sumar el número de elementos positivos y el de negativos de una tabla T. Sea una tabla de dimensiones M, N leídas desde el teclado. \n 17) Inicializar una matriz de dos dimensiones con un valor constante dado K. \n 18) SALIR");
    printf("\nELIGE UNA OPCION: ");
    scanf("%d",&opc);
    system("cls");
    switch (opc) {
	case 1:
		parte_1();
		break;
	case 2:
		parte_2();
		break;
	case 3:
		parte_3();
		break;
	case 4:
		parte_4();
		break;
	case 5:
		parte_5();
		break;
	case 6:
		parte_6();
		break;
	case 7:
		parte_7();
		break;
	case 8:
		parte_8();
		break;
	case 9:
		parte_9();
		break;
	case 10:
		parte_10();
		break;
	case 11:
		parte_11();
		break;
	case 12:
		parte_12();
		break;
	case 13:
		parte_13();
		break;
	case 14:
		parte_14();
		break;
	case 15:
		parte_15();
		break;
	case 16:
		parte_16();
		break;
	case 17:
		parte_17();
		break;
	case 18:
		break;
	}
	system("cls");
}while(opc!=18);
system("pause");
}

void parte_1(){
	int x[10];
	for (int i=0; i<=9; i++){
		printf(" dame la edad %d ",i+1);
		scanf("%d",&x[i]);
	}
	for (int i=9; i>=0; i--){
		printf(" %d ",x[i]);
	}
	system("pause");
}
void parte_2(){
	int x[10];
	int num, pos;
	int salir=0;
	for (int i=0; i<=9; i++){
			x[i]=0;
		}
	do{
		printf(" Dame un numero : ");
		scanf("%d",&num);
		printf(" en que posición (hasta el 10): ");
		scanf("%d",&pos);
		x[pos]=num;
		for (int i=0; i<=9; i++){
			printf("%d ",x[i]);
		}
		printf("\n Si quieres salir presiona 1 \n Si quieres otro numero presiona 0 ");
		scanf("%d",&salir);
		system("cls");
	}while(salir!=1);
}
void parte_3(){
	int numeros[10];
	int tempo;
	for (int i=0; i<=9; i++){
		printf(" dame un numero: ");
		scanf("%d",&numeros[i]);
	}
	for (int i=1; i<10; i++)
	{
		for (int j=0; j<9; j++)
		{
			if (numeros [j] > numeros [j+1])
				{
					tempo = numeros[j];
					numeros[j] = numeros[j+1];
					numeros[j+1] = tempo;
				}
			}
		}
			
		printf(" en forma ascendente: \n");	
		for(int x=0; x<=9; x++)
		{
			
			printf("%d ",numeros[x]);
		}
		system("pause");
}
void parte_4(){
	float numeros[10];
	float tempo;
	
	for (int i=0; i<=9; i++){
		printf(" Promedio de alumno %d: ",i+1);
		scanf("%f",&numeros[i]);
	}
	for (int i=1; i<10; i++)
	{
		for (int j=0; j<9; j++)
		{
			if (numeros [j] < numeros [j+1])
				{
					
					tempo = numeros[j];
					numeros[j] = numeros[j+1];
					numeros[j+1] = tempo;
				}
			}
		}
				
		for(int x=0; x<=9; x++)
		{
			
			printf(" %f \n",numeros[x]);
		}
		system("pause");
	
}
void parte_5(){
	int numeros[10];
	int pos[10];
	int tempo;
	for (int i=0; i<=9; i++){
		printf(" Precio de articulo %d: $",i+1);
		scanf("%d",&numeros[i]);
	}
	for (int i=1; i<10; i++)
	{
		for (int j=0; j<9; j++)
		{
			if (numeros [j] < numeros [j+1])
				{
					pos[i]=j;
					tempo = numeros[j];
					numeros[j] = numeros[j+1];
					numeros[j+1] = tempo;
				}
			}
		}
			
		printf(" lista de Precios: \n");	
		for(int x=0; x<=9; x++)
		{
			
			printf("  $ %d \n",numeros[x]);
		}
		system("pause");
		system("cls");
		printf(" Mostrando los 5 precios mas bajos: \n");
		for(int x=9; x>=5; x--){
			printf(" $ %d \n",numeros[x]);
		}
		system("pause");
	
}
void parte_6(){
	int telefono[100];
	string nombre[100];
	for (int i=0; i<=99; i++){
		printf("\nNombre: ");
		cin>>nombre[i];
		printf("Telefono: ");
		scanf("%d",&telefono[i]);
	}
	system("cls");
	for (int i=99; i>=0; i--){
		
		cout<<nombre[i]<<" telefono: "<<telefono[i]<<endl;
	}
	system("pause");
	
}
void parte_7(){
	int salario[1000];
	int tiempo[1000];
	int old=0;
	int tempo, tempo2;
	for (int i=0;i<= 999; i++){
		printf("Salario del trabajador %d: $",i+1);
		scanf("%d",&salario[i]);
		printf("Años en la empresa: ");
		scanf("%d",&tiempo[i]);
		if (tiempo[i]>=5){
			if(tiempo[i]>=10){
				if(tiempo[i]>=20){
					if(tiempo[i]>=35){
						salario[i]=salario[i]*1.55;
						old=old+1;
					}
					else {
						salario[i]=salario[i]*1.55;
					}
				}
				else{
					salario[i]=salario[i]*1.40;
				}
			}
			else{
				salario[i]=salario[i]*1.25;
			}
		}
		else{
			salario[i]=salario[i]*1.1;
		}
		
	}
	for (int i=1; i<1000; i++)
	{
		for (int j=0; j<999; j++)
		{
			if (salario [j] > salario [j+1])
				{
					tempo = salario[j];
					tempo2 =tiempo[j];
					salario[j] = salario[j+1];
					tiempo[j] = tiempo[j+1];
					salario[j+1] = tempo;
					tiempo[j+1] = tempo2;
				}
			}
		}
	system("cls");
	printf("     Salario modificado ");
	for (int i=0; i<=999; i++){
		printf("\n$%d con %d años trabajando",salario[i],tiempo[i]);
	}
	printf("\nCantidad de personas con mas de 35 años trabajando: %d \n",old);
	system("pause");
	
}
void parte_8(){
	string encuesta[10];
	int cant=0;
	printf(" Encuesta de SI  o No ");
	for(int i=0; i<=9;i++){
		printf("\n si o no? ");
		cin>>encuesta[i];
		if(encuesta[i]=="si"){
			cant=cant+1;
		}	
	}
	printf("\n La cantidad de votos que dijeron si son: %d ",cant);
		system("pause");
	
}
void parte_9(){
	int x[30];
	int temp;
	for (int i=0;i<=29;i++){
		printf("Dame un numero: ");
		scanf("%d",&x[i]);
		temp=i+1;
		if (temp%2==0){
			x[i]=x[i]*x[i];
		}
	}
	system("cls");
	printf("\n Mostrando Numeros modificados: ");
	for (int i=0; i<=29;i++){
		printf("\n%d",x[i]);
	}
	system("pause");
}
void parte_10(){
	int x[50];
	int temp=0,tempo;
	for (int i=0;i<=49;i++){
		printf("Dame un numero: ");
		scanf("%d",&x[i]);
		}
	system("cls");	
	for (int i=1; i<50; i++)
	{
		for (int j=0; j<49; j++)
		{
			if (x[j] < x [j+1])
				{
					tempo = x[j];
					x[j] = x[j+1];
					x[j+1] = tempo;
				}
			}
		}
	printf("   MOSTRANDO LISTA DE IMPARES EN ORDEN DESCENDENTE ");	
	for (int i=0; i<=49;i++){
		temp= i+1;
		if (temp%2==1){
			printf("\n%d",x[i]);
			
		}
	}
	system("pause");
}
void parte_11(){
	int x[50];
	int temp=0,tempo;
	for (int i=0;i<=49;i++){
		printf("Dame un numero: ");
		scanf("%d",&x[i]);
		}
	system("cls");	
	for (int i=1; i<50; i++)
	{
		for (int j=0; j<49; j++)
		{
			if (x[j] < x [j+1])
				{
					tempo = x[j];
					x[j] = x[j+1];
					x[j+1] = tempo;
				}
			}
		}
	printf("   MOSTRANDO LISTA DE POSICIONES IMPARES EN ORDEN DESCENDENTE ");	
	for (int i=0; i<=49;i++){
		temp= i+1;
		if (temp%2==1){
			if((temp<25)||(temp>30)){
				printf("\n %d",x[i]);
			}
			
			
		}
	}
	system("pause");
	
}
void parte_12(){
	int x[50];
	int temp=0,tempo;
	for (int i=0;i<=49;i++){
		printf("Dame un numero: ");
		scanf("%d",&x[i]);
		}
	system("cls");
	printf(" MOSTRANDO LOS MULTIPLLOS DE 5 \n");
	for (int i=0;i<=49;i++){
		if(x[i]%5==0){
			printf("%d\n",x[i]);
		}
	}
	system("pause");
}
void parte_13(){
	int numeros [ ] = {2, 23, 74, 11, 65, 58, 94,  };
	printf("  MOSTRANDO LOS 7 ELEMENTOS DEL ARRAY \n");
	for (int i=0; i<=6;i++){
		printf("%d ",numeros[i]);
	}
	printf(" Cual es el sigueinte elemento que deseas agregar? ");
	scanf("%d",&numeros[7]);
	printf(" Mostrando lista con el elemento agregado \n");
	for(int i=0; i<=7;i++){
		printf("%d ",numeros[i]);
	}
	system("pause");
}
void parte_14(){
		int numeros [ ] = {2, 23, 74, 11, 65, 58, 94, 99 };
		int temp;
		int j=0;
	printf("  MOSTRANDO LOS 8 ELEMENTOS DEL ARRAY \n");
	for (int i=0; i<=7;i++){
		printf("%d ",numeros[i]);
	}
	for (int i=7; i>=4; i--){
		temp= numeros[i];
		numeros[i]=numeros[j];
		numeros[j]= temp;
		j++;
	}
	printf("\n    ARRAY con sus elementos invertidos \n");
	
	for(int i=0;i<=7; i++){
	   printf("%d ",numeros[i]);
	}
	system("pause");
}
void parte_15(){
	string ropa[] ={ "zara", "aeropostale", "levis", "pulllandbear", "hollister", "gucci", "bershka", "nautica", "Tommy Hilghfier" };
	printf("MARCAS DE ROPA \n");
	for (int i=0; i<=8; i++){
		cout<<ropa[i]<<" ";
	}
	printf("\n Cuales son las dos marcas que desa ingresar?\n");
	cin>>ropa[1];
	cin>>ropa[3];
	printf(" nueva lista de marcas :\n");
	for (int i=0; i<=8; i++){
		cout<<ropa[i]<<" ";
		
	}
	system("pause");
}
void parte_16(){
		int z[4][4];
		int sumpos=0, sumneg=0;
	for (int i=0; i<=3; i++){
		for (int j=0; j<=3;j++){
			printf(" Dame un numero: ");
			scanf("%d",&z[i][j]);
			if (z[i][j]>=0){
				sumpos= sumpos+ z[i][j];
			}
			else{
				sumneg= sumneg+ z[i][j];
			}
		}
	}
	printf(" \n Imprimiendo La Matriz: \n");
	for (int i=0; i<=3; i++){
		printf("\n\n\n");
		for (int j=0; j<=3;j++){
			printf("%d   ",z[i][j]);
		}
	}
	printf(" \nLa suma de positivos es: %d \n",sumpos);
	printf(" La suma de negativos es: %d",sumneg);
	system("pause");
}
void parte_17(){
	int z[4][4];
	for (int i=0; i<=3; i++){
		for (int j=0; j<=3;j++){
			printf(" Dame un numero: ");
			scanf("%d",&z[i][j]);
		}
	}
	printf(" \n Imprimiendo La Matriz: \n");
	for (int i=0; i<=3; i++){
		printf("\n\n\n");
		for (int j=0; j<=3;j++){
			printf("%d   ",z[i][j]);
		}
	}
	system("pause");
}
void parte_18(){
}
