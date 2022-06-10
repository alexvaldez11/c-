/*Ejercicio de estrcuturabasico: hacer una estructura llamda alumno en el cual se tendran los siguientes
campos: nombre, edad, promedio, ,,, pedir datos al usuario para tres alumnos diferentes,,, comprobar cual de los tres tiene 
el mejor promedio y posteriormente imprimir los datos del alumno. nota: usar punteros a estructura*/
#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno {
	char nombre[30];
	int edad;
	float promedio;
}alumno[3],*punt_alumno= alumno;



void pedir_datos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"dime tu nombre perra:"<<endl;
    	cin.getline((punt_alumno+i)->nombre,30,'\n');
	    cout<<"dime tu edad perra: "<<endl;
	     cin>>(punt_alumno+i)->edad;
	     cout<<"dime tu promedio perra: "<<endl;
	     cin>>(punt_alumno+i)->promedio;
	}
	
	
}

void mayor(Alumno *punt_alumno){
	float mayor=0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((punt_alumno+i)->promedio > mayor){
			mayor= (punt_alumno+i)->promedio;
			pos= i;
		}
	}
	cout<<" el alumno con mejor promedio: "<<(punt_alumno+pos)->nombre<<endl;
	cout<<" su edad es de: "<<(punt_alumno+pos)->edad<<endl;
	cout<<" su promedio es: "<<(punt_alumno+pos)->promedio<<endl;
}



int main(){
 pedir_datos();
 mayor(punt_alumno);
 
 getch();
 return 0;	
	
}
