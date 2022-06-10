#include<stdio.h>
#include<iostream>
#include<math.h>
#include<locale.h>
void funciontonta(int edad[]);

int main () {
setlocale(LC_ALL,"spanish");
system("color 4");
int x,resp,y;
int edad[4];
printf("\nEste programa calcula la edad que vayas a tener despues de cierto tiempo de un grupo de companeros \n ");	
    for (x=0;x<=4;x++){
		printf("hola, cual es la edad del compañero %d: ",x+1);
		scanf("%d",&edad[x]);
	}
 funciontonta(edad);
 printf("\n");
 for (y=0;y<=4;y++){
 	printf("\n la edad original del compañero %d es: %d ",y+1,edad[y]);
 }
	return 0;
}

void funciontonta(int edad[]){
	int edadcool[4];
	int an,x;
	printf("cuantos años despues quieres cualcular las edades: \n");
	scanf("%d",&an);
	 
	for(x=0;x<=4;x++) {
		edadcool[x]=edad[x]+an;	
		printf("la nueva edad del compeñero %d es: %d \n",x+1,edadcool[x]);
			
	}
	
	
}

