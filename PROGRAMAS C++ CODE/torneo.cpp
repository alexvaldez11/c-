#include<stdio.h>
#include<iostream>
#include<math.h>
#include<locale.h>
void funcion(int lista[4][4]);

int main () {
setlocale(LC_ALL,"spanish");
system("color 3");
int x,resp,y;
int lista[4][4];
printf(" Este programa suma la cantidad de deportistas que estan en el torneo con sus respectivas areas: \n");
printf("1) basketball\n");
printf("2) Futball\n");
printf("3) volleyball\n");
printf("4) tochito\n");
printf("5) natacion\n");

 for(x=0;x<=4;x++){
 	  printf("\n ESCUELA %d \n\n",x+1);
 	  for(y=0;y<=4;y++){
 	  	printf("¿Cuántos deportistas del area %d del colegio %d hay? \n ",y+1,x+1);
 	  	scanf("%d",&lista[x][y]);
	   }
 }
 funcion(lista);
 printf("\n");
 


}

void funcion(lista[4][4]){
	int suma=0,equipo[4],ar;
	int x,y;
	for(x=0;x<=4;x++){
 	
 	  for(y=0;y<=4;y++){
 	  	  suma=suma+lista[x][y];
	   }
	   
	   
 }
	printf("la suma de todos los deportistas del torneo son:  %d",suma);
    system("pause");
}
