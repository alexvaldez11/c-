#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {10,11,12,13,14,15,16,17,18,19};
	int inf, sup, mitad, dato, i;
	char band='F';
	
	cout<<"dame el numero que buscas: ";
	cin>>dato;
	
	inf=0;
	sup=10;
	i=0;
	while((inf<=sup)&&(i<10)){
		mitad = (inf+sup)/2;
		if(numeros[mitad] == dato){
			band='V';
			break;
		}
		if(numeros[mitad]>dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(numeros[mitad]<dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
		i++;
	}
	
	if(band == 'V'){
		cout<<"El numero se encontro con exito, se ubica en la posicion "<<mitad<<endl;
	}
	else{
		cout<<"El numero que buscaste no se pudo encontrar. Intentalo nuevamente.";
	}
	
	getch();
	return 0;
}
